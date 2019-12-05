#include <iostream>
#include <string>
#include <vector>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

Pass2Visitor::Pass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProgram(caffeinatedParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);
    //j_file.close();
    return value;
}

antlrcpp::Any Pass2Visitor::visitHeader(caffeinatedParser::HeaderContext *ctx)
{
    program_name = ctx->ID()->toString();
    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitMainBlock(caffeinatedParser::MainBlockContext *ctx)
{
    // Emit the main program header.
    j_file << endl;
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic        " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic        " + program_name
           << "/_standardIn LPascalTextIn;" << endl;

    auto value = visitChildren(ctx);

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;

    return value;
}

/*
antlrcpp::Any Pass2Visitor::visitBlock(caffeinatedParser::BlockContext *ctx)
{
    auto value = visitChildren(ctx);

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;

    return value;
}
*/

/*
antlrcpp::Any Pass2Visitor::visitCompoundStmt(caffeinatedParser::CompoundStmtContext *ctx)
{
   // auto value = visit(ctx->expr());

    return NULL;
}
*/

antlrcpp::Any Pass2Visitor::visitStmt(caffeinatedParser::StmtContext *ctx)
{
    j_file << endl << "; " + ctx->getText() << endl << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitAssignmentStmt(caffeinatedParser::AssignmentStmtContext *ctx)
{
    auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::boolean_type) ? "B"
                :                                                   "?";

    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->variable()->ID()->toString()
           << " " << type_indicator << endl;

    return value;
}


antlrcpp::Any Pass2Visitor::visitAddSubExpr(caffeinatedParser::AddSubExprContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    
    string op = ctx->addSubOp()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "isub"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}


antlrcpp::Any Pass2Visitor::visitMulDivExpr(caffeinatedParser::MulDivExprContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);

    string op = ctx->mulDivOp()->getText();
    string opcode;

    if (op == "*")
    {
        opcode = integer_mode ? "imul"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "idiv"
               :                "????";
    }

    // Emit a multiply or divide instruction.
    j_file << "\t" << opcode << endl;

    return value;
}


antlrcpp::Any Pass2Visitor::visitRelOpExpr(caffeinatedParser::RelOpExprContext *ctx)
{
    auto value = visitChildren(ctx);
    TypeSpec *type1 = ctx ->expr(0)->type;
    TypeSpec *type2 = ctx ->expr(1)->type;
    type1 = Predefined::integer_type;
    type2 = Predefined::integer_type;

    bool integer_mode = ((type1 == Predefined::integer_type) && (type2 == Predefined::integer_type));
	string op = ctx->rel_op()->getText();
	string opcode;


	if(op == ">")
    {
		opcode = "if_icmpgt";
	}

    else if(op == ">=")
    {
		opcode = "if_icmpge";
	}

    else if(op == "<")
    {
		opcode = "if_icmplt";
	}

    else if(op == "<=")
    {
		opcode = "if_icmple";
	}

    else if(op == "==")
    {
		opcode = "if_icmpeq";
	}

    else
    {
		opcode = "if_icmpne";
	}

	// j_file << begin + ": " << endl;
	j_file << opcode << endl;

	/*
	j_file << "\t" << opcode << "\t" << true_stmt << endl;
	j_file << "\tint_const_1" << endl;
	j_file << "\tgo_to\t" << false_stmt << endl;
	j_file << true_stmt + ": " << endl;
	j_file << "\tint_const_2" << endl;
	j_file << false_stmt + ": " << endl;
	j_file << "\tif_equal\t" << after << endl;
	*/

	return NULL;

}

antlrcpp::Any Pass2Visitor::visitIntegerConst(caffeinatedParser::IntegerConstContext *ctx)
{
	j_file << "\tInteger_Const: " << ctx->getText() << endl;
	return visitChildren(ctx);

}

antlrcpp::Any Pass2Visitor::visitBoolConst(caffeinatedParser::BoolConstContext *ctx)
{
	j_file << "\tBool_Const: " << ctx->getText() << endl;
	return visitChildren(ctx);

}

/*
string Pass2Visitor::LabelMaker(string input)
{
	string label;
	static char number = '0';
	label = label + " " + number;
	number = number + 1;
	return label;

 }

*/
