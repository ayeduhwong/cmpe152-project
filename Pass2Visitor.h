#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

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

class Pass2Visitor : public caffeinatedBaseVisitor
{
private:
	string program_name;
	ostream& j_file;
    string LabelMaker(string input);

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();

    antlrcpp::Any visitProgram(caffeinatedParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(caffeinatedParser::HeaderContext *ctx) override;
    antlrcpp::Any visitMainBlock(caffeinatedParser::MainBlockContext *ctx) override;
    // antlrcpp::Any visitBlock(caffeinatedParser::BlockContext *ctx) override;

    // antlrcpp::Any visitCompoundStmt(caffeinatedParser::CompoundStmtContext *ctx) override;
    antlrcpp::Any visitStmt(caffeinatedParser::StmtContext *ctx) override;
    antlrcpp::Any visitAssignmentStmt(caffeinatedParser::AssignmentStmtContext *ctx) override;
    
    antlrcpp::Any visitAddSubExpr(caffeinatedParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(caffeinatedParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitRelOpExpr(caffeinatedParser::RelOpExprContext *ctx) override;

    antlrcpp::Any visitIntegerConst(caffeinatedParser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitBoolConst(caffeinatedParser::BoolConstContext *ctx)  override;

    // antlrcpp::Any visitMulDivOp(caffeinatedParser::MulDivOpContext *ctx) override;
    // antlrcpp::Any visitAddSubOp(caffeinatedParser::AddSubOpContext *ctx) override;
    // antlrcpp::Any visitRel_op(caffeinatedParser::Rel_opContext *ctx) override;
    // antlrcpp::Any visitIf_statement(caffeinatedParser::If_statementContext *ctx) override;
    // antlrcpp::Any visitWhile_loop(caffeinatedParser::While_loopContext *ctx) override;
    
    
};

#endif /* PASS2VISITOR_H_ */
