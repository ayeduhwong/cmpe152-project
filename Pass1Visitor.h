#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include <iostream>
#include <string>
#include <vector>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "caffeinatedBaseVisitor.h"
#include "antlr4-runtime.h"
#include "caffeinatedVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public caffeinatedBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;
    ofstream j_file;
    string prog_name;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(caffeinatedParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(caffeinatedParser::HeaderContext *ctx) override;
    antlrcpp::Any visitDeclarations(caffeinatedParser::DeclarationsContext *ctx) override;
    antlrcpp::Any visitDecl(caffeinatedParser::DeclContext *ctx) override;
    // antlrcpp::Any visitDeclList(caffeinatedParser::DeclListContext *ctx) override; <-- not in pcl2 pass1 even tho its in pcl2Visitor.h

    antlrcpp::Any visitVarList(caffeinatedParser::VarListContext *ctx) override;
    antlrcpp::Any visitVarId(caffeinatedParser::VarIdContext *ctx) override;
    antlrcpp::Any visitTypeId(caffeinatedParser::TypeIdContext *ctx) override;

    // antlrcpp::Any visitVariable(caffeinatedParser::VariableContext *ctx) override;
    // antlrcpp::Any visitStmtList(caffeinatedParser::StmtListContext *ctx) override; <-- not in pcl2 pass1 even tho its in pcl2Visitor.h

    // antlrcpp::Any visitCharExpr(caffeinatedParser::CharExprContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(caffeinatedParser::AddSubExprContext *ctx) override;
    // antlrcpp::Any visitRelOpExpr(caffeinatedParser::RelOpExprContext *ctx) override;
    antlrcpp::Any visitNumberExpr(caffeinatedParser::NumberExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(caffeinatedParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitBoolExpr(caffeinatedParser::BoolExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(caffeinatedParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitIntegerConst(caffeinatedParser::IntegerConstContext *ctx) override;
    // antlrcpp::Any visitCharConst(caffeinatedParser::CharConstContext *ctx) override;
    antlrcpp::Any visitBoolConst(caffeinatedParser::BoolConstContext *ctx)  override;

    // antlrcpp::Any visitMulDivOp(caffeinatedParser::MulDivOpContext *ctx) override;
    // antlrcpp::Any visitAddSubOp(caffeinatedParser::AddSubOpContext *ctx) override;
    
    // antlrcpp::Any visitRel_op(caffeinatedParser::Rel_opContext *ctx) override;
    antlrcpp::Any visitIf_statement(caffeinatedParser::If_statementContext *ctx) override;
    antlrcpp::Any visitWhile_loop(caffeinatedParser::While_loopContext *ctx) override;
};

#endif /* PASS1VISITOR_H_ */
