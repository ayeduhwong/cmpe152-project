
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from caffeinated.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "caffeinatedParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by caffeinatedParser.
 */
class  caffeinatedVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by caffeinatedParser.
   */
    virtual antlrcpp::Any visitProgram(caffeinatedParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitHeader(caffeinatedParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitMainBlock(caffeinatedParser::MainBlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarations(caffeinatedParser::DeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitDeclList(caffeinatedParser::DeclListContext *context) = 0;

    virtual antlrcpp::Any visitDecl(caffeinatedParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitVarList(caffeinatedParser::VarListContext *context) = 0;

    virtual antlrcpp::Any visitVarId(caffeinatedParser::VarIdContext *context) = 0;

    virtual antlrcpp::Any visitTypeId(caffeinatedParser::TypeIdContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStmt(caffeinatedParser::CompoundStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt(caffeinatedParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitStmtList(caffeinatedParser::StmtListContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(caffeinatedParser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitVariable(caffeinatedParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpr(caffeinatedParser::VariableExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(caffeinatedParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitRelOpExpr(caffeinatedParser::RelOpExprContext *context) = 0;

    virtual antlrcpp::Any visitNumberExpr(caffeinatedParser::NumberExprContext *context) = 0;

    virtual antlrcpp::Any visitBoolExpr(caffeinatedParser::BoolExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(caffeinatedParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitIntegerConst(caffeinatedParser::IntegerConstContext *context) = 0;

    virtual antlrcpp::Any visitBoolConst(caffeinatedParser::BoolConstContext *context) = 0;

    virtual antlrcpp::Any visitMulDivOp(caffeinatedParser::MulDivOpContext *context) = 0;

    virtual antlrcpp::Any visitAddSubOp(caffeinatedParser::AddSubOpContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(caffeinatedParser::Rel_opContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(caffeinatedParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitWhile_loop(caffeinatedParser::While_loopContext *context) = 0;


};

