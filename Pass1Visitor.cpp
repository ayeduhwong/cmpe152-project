#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    cout << "=== Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProgram(caffeinatedParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);

    cout << "=== visitProgram: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);

    return value;
}

antlrcpp::Any Pass1Visitor::visitHeader(caffeinatedParser::HeaderContext *ctx)
{
    cout << "=== visitHeader: " + ctx->getText() << endl;

    string program_name = ctx->ID()->toString();

    program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
                              symtab_stack->push());
    symtab_stack->set_program_id(program_id);

    // Create the assembly output file.
    j_file.open(program_name + ".j");
    if (j_file.fail())
    {
        cout << "***** Cannot open assembly file." << endl;
        exit(-99);
    }

    // Emit the program header.
    j_file << ".class public " << program_name << endl;
    j_file << ".super java/lang/Object" << endl;

    // Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    j_file << ".field private static _runTimer LRunTimer;" << endl;
    j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    prog_name = program_name;

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitDeclarations(caffeinatedParser::DeclarationsContext *ctx)
{
    cout << "=== visitDeclarations: " << ctx->getText() << endl;

    auto value = visitChildren(ctx);

    // Emit the class constructor.
    j_file << endl;
    j_file << ".method public <init>()V" << endl;
    j_file << endl;
    j_file << "\taload_0" << endl;
    j_file << "\tinvokenonvirtual    java/lang/Object/<init>()V" << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 1" << endl;
    j_file << ".limit stack 1" << endl;
    j_file << ".end method" << endl;

    return value;
}

antlrcpp::Any Pass1Visitor::visitDecl(caffeinatedParser::DeclContext *ctx)
{
    cout << "=== visitDecl: " + ctx->getText() << endl;

    j_file << "\n; " << ctx->getText() << "\n" << endl;
    return visitChildren(ctx);
}

/*
antlrcpp::Any Pass1Visitor::visitDeclList(caffeinatedParser::DeclListContext *ctx)
{
    cout << "=== visitDeclList: " + ctx->getText() << endl;

    //declList.resize(0);
    return visitChildren(ctx);

}
*/

antlrcpp::Any Pass1Visitor::visitVarList(caffeinatedParser::VarListContext *ctx)
{
    cout << "=== visitVarList: " + ctx->getText() << endl;

    variable_id_list.resize(0);
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVarId(caffeinatedParser::VarIdContext *ctx)
{
    cout << "=== visitVarId: " + ctx->getText() << endl;

    string variable_name = ctx->ID()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);
    variable_id_list.push_back(variable_id);

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitTypeId(caffeinatedParser::TypeIdContext *ctx)
{
    cout << "=== visitTypeId: " + ctx->getText() << endl;

    TypeSpec *type;
    string type_indicator;

    string type_name = ctx->Type_ID()->toString();

    if (type_name == "boba") // boba == int
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }

    else if (type_name == "ice") // ice == bool
    {
        type = Predefined::boolean_type;
        type_indicator = "B";
    }

    /*
    else if (type_name == "sweet") // sweet == char
    {
        type = Predefined::char_type;
        type_indicator = "C";
    }
	*/

    else
    {
        type = nullptr;
        type_indicator = "?";
    }

    for (SymTabEntry *id : variable_id_list) {
        id->set_typespec(type);

        // Emit a field declaration.
        j_file << ".field private static "
               << id->get_name() << " " << type_indicator << endl;
    }

    return visitChildren(ctx);
}


antlrcpp::Any Pass1Visitor::visitAddSubExpr(caffeinatedParser::AddSubExprContext *ctx)
{
    cout << "=== visitAddSubExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   :                nullptr;
    ctx->type = type;


    return value;
}



antlrcpp::Any Pass1Visitor::visitNumberExpr(caffeinatedParser::NumberExprContext *ctx)
{
    cout << "=== visitNumberExpr: " + ctx->getText() << endl;

    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
    
}

antlrcpp::Any Pass1Visitor::visitVariableExpr(caffeinatedParser::VariableExprContext *ctx)
{
    cout << "=== visitVariableExpr: " + ctx->getText() << endl;

    string variable_name = ctx->variable()->ID()->toString();
    SymTabEntry *variable_id = symtab_stack->lookup(variable_name);

    ctx->type = variable_id->get_typespec();
    return visitChildren(ctx);
    
}

antlrcpp::Any Pass1Visitor::visitBoolExpr(caffeinatedParser::BoolExprContext *ctx)
{
    cout << "=== visitBoolExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->true_false()->type;
    return value;
    
}

antlrcpp::Any Pass1Visitor::visitMulDivExpr(caffeinatedParser::MulDivExprContext *ctx)
{
    cout << "=== visitMulDivExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   :                nullptr;
    ctx->type = type;

    return value;
    
}

antlrcpp::Any Pass1Visitor::visitIntegerConst(caffeinatedParser::IntegerConstContext *ctx)
{
	cout << "=== visitIntegerConst: " + ctx->getText() << endl;

	ctx->type = Predefined::integer_type;
	return visitChildren(ctx);
    
}

antlrcpp::Any Pass1Visitor::visitBoolConst(caffeinatedParser::BoolConstContext *ctx)
{
	cout << "=== visitBoolConst: " + ctx->getText() << endl;

	ctx->type = Predefined::boolean_type;
	return visitChildren(ctx);
    
}

antlrcpp::Any Pass1Visitor::visitIf_statement(caffeinatedParser::If_statementContext *ctx)
{
	cout << "=== visitIf_statement: " + ctx->getText() << endl;

	visit(ctx->expr());
	visitChildren(ctx->stmtList());
	return NULL;
}

antlrcpp::Any Pass1Visitor::visitWhile_loop(caffeinatedParser::While_loopContext *ctx)
{
    cout << "=== visitwhile_Loop: " + ctx->getText() << endl;

    visit(ctx->stmtList());
    visit(ctx->expr());

    return NULL;
}
