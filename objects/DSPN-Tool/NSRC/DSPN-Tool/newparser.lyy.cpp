/* Driver template for the LEMON parser generator.
** The author disclaims copyright to this source code.
*/
/* First off, code is include which follows the "include" declaration
** in the input file. */
#include <stdio.h>
#line 1 "NSRC/DSPN-Tool/newparser.lyy"
 // Use the Lemon parser generator with C++ additions
	#include <cstdio>
	#include <cstring>
	#include <cstdlib>
	#include <iostream>
	#include <iomanip>
	#include <fstream>
	#include <sstream>
	#include <string>
	#include <vector>
	#include <memory>
	#include <map>
	#include <list>
	#include <stack>
	#include <queue>
	#include <set>
	#include <exception>
	#include <algorithm>
	#include <ctime>
	#include <cfloat>
	using namespace std;

	#include <boost/optional.hpp>

	#include "../numeric/numeric.h"
	using namespace numerical;

	#include "utils.h"
	#include "sparsevector.h"
	#include "ParserDefs.h"
	#include "PetriNet.h"
	#include "Measure.h"
	#include "Language.h"
	#include "DTA.h"
	#include "CSLTA.h"

	#define GetPN()		    (pExtraArgs->pPN)
	#define GetDTA()		(pExtraArgs->pDTA)
	#define Accept(output)  { pExtraArgs->pOutObj = output; }

	// ExtraArgs, Token and the API declaration are in ParserDefs.h	

	// Be sure that the C memory management is not used, otherwise C++ objects will break.
	#define realloc ERROR
	#define malloc ERROR
	#define free ERROR

	// Always generate the parser tracer
	#ifdef NDEBUG
	# undef NDEBUG
	#endif

	template<typename T> shared_ptr<MdepExpr<T>> makeConstLogicExpr(T value) {
		return make_shared<ExprMdepExpr<T>>(make_shared<ConstValExpr<T>>(value));
	}
	shared_ptr<MdepExpr<bool>> TrueExpr()  {  return makeConstLogicExpr(true); }
	shared_ptr<MdepExpr<bool>> FalseExpr() {  return makeConstLogicExpr(false); }
	shared_ptr<MdepExpr<int>> ZeroExprInt()   {  return makeConstLogicExpr(int(0)); }
	shared_ptr<MdepExpr<bool>> PlaceNotZero(const char* name, const PN* pPn) {
		auto a = make_shared<PlaceMarkingMdepExpr<int>>(name, FindPlace(name, pPn));
		auto b = make_shared<BinaryMdepExpr<bool,int,bool_binary_op<int>>>
						(a, ZeroExprInt(), bool_binary_op<int>(CMPOP_NOT_EQ));
		return b;
	}
	shared_ptr<MdepExpr<double>> PdfX = make_shared<ExprMdepExpr<double>>(make_shared<PdfXExpr>());
#line 75 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
/* Next is all token values, in a form suitable for use by makeheaders.
** This section will be null unless lemon is run with the -m switch.
*/
/* 
** These constants (all generated automatically by the parser generator)
** specify the various kinds of tokens (terminals) that the parser
** understands. 
**
** Each symbol here is a terminal symbol in the grammar.
*/
/* Make sure the INTERFACE macro is defined.
*/
#ifndef INTERFACE
# define INTERFACE 1
#endif
/* The next thing included is series of defines which control
** various aspects of the generated parser.
**    YYCODETYPE         is the data type used for storing terminal
**                       and nonterminal numbers.  "unsigned char" is
**                       used if there are fewer than 250 terminals
**                       and nonterminals.  "int" is used otherwise.
**    YYNOCODE           is a number of type YYCODETYPE which corresponds
**                       to no legal terminal or nonterminal number.  This
**                       number is used to fill in empty slots of the hash 
**                       table.
**    YYFALLBACK         If defined, this indicates that one or more tokens
**                       have fall-back values which should be used if the
**                       original value of the token will not parse.
**    YYACTIONTYPE       is the data type used for storing terminal
**                       and nonterminal numbers.  "unsigned char" is
**                       used if there are fewer than 250 rules and
**                       states combined.  "int" is used otherwise.
**    PnParserTOKENTYPE     is the data type used for minor tokens given 
**                       directly to the parser from the tokenizer.
**    YYMINORTYPE        is the data type used for all minor tokens.
**                       This is typically a union of many types, one of
**                       which is PnParserTOKENTYPE.  The entry in the union
**                       for base tokens is called "yy0".
**    YYSTACKDEPTH       is the maximum depth of the parser's stack.
**    PnParserARG_SDECL     A static variable declaration for the %extra_argument
**    PnParserARG_PDECL     A parameter declaration for the %extra_argument
**    PnParserARG_STORE     Code to store %extra_argument into yypParser
**    PnParserARG_FETCH     Code to extract %extra_argument from yypParser
**    YYNSTATE           the combined number of states.
**    YYNRULE            the number of rules in the grammar
**    YYERRORSYMBOL      is the code number of the error symbol.  If not
**                       defined, then do no error processing.
*/
#define YYCODETYPE unsigned char
#define YYNOCODE 118
#define YYACTIONTYPE unsigned short int
#define PnParserTOKENTYPE  Token* 
typedef struct __YYMINTYPE { ~__YYMINTYPE() { }
  PnParserTOKENTYPE yy0;
  shared_ptr<MdepExpr<int>> yy11;
  action_bindings yy12;
  clockval_t yy17;
  shared_ptr<DtaBinding> yy19;
  shared_ptr<AtomicPropExpr> yy28;
  ap_expr_bindings yy45;
  enum CompareOp yy62;
  bool yy65;
  std::string yy71;
  enum BinaryFunct yy79;
  pair<clockval_t, clockval_t> yy81;
  shared_ptr<MeasureExpr> yy92;
  shared_ptr<MdepExpr<bool>> yy116;
  shared_ptr<Expr<double>> yy133;
  enum UnaryFunct yy139;
  shared_ptr<DtaEdge> yy153;
  clock_value_bindings yy156;
  shared_ptr<Expr<int>> yy161;
  shared_ptr<MdepExpr<double>> yy179;
  int yy235;
} YYMINORTYPE;
#define YYSTACKDEPTH 100
#define PnParserARG_SDECL  ExtraParserArgs* pExtraArgs ;
#define PnParserARG_PDECL , ExtraParserArgs* pExtraArgs 
#define PnParserARG_FETCH  ExtraParserArgs* pExtraArgs  = yypParser->pExtraArgs 
#define PnParserARG_STORE yypParser->pExtraArgs  = pExtraArgs 
#define YYNSTATE 319
#define YYNRULE 149
#define YYERRORSYMBOL 87
#define YYERRSYMDT yy235
#define YY_NO_ACTION      (YYNSTATE+YYNRULE+2)
#define YY_ACCEPT_ACTION  (YYNSTATE+YYNRULE+1)
#define YY_ERROR_ACTION   (YYNSTATE+YYNRULE)

/* Next are that tables used to determine what action to take based on the
** current state and lookahead token.  These tables are used to implement
** functions that take a state number and lookahead value and return an
** action integer.  
**
** Suppose the action integer is N.  Then the action is determined as
** follows
**
**   0 <= N < YYNSTATE                  Shift N.  That is, push the lookahead
**                                      token onto the stack and goto state N.
**
**   YYNSTATE <= N < YYNSTATE+YYNRULE   Reduce by rule N-YYNSTATE.
**
**   N == YYNSTATE+YYNRULE              A syntax error has occurred.
**
**   N == YYNSTATE+YYNRULE+1            The parser accepts its input.
**
**   N == YYNSTATE+YYNRULE+2            No such action.  Denotes unused
**                                      slots in the yy_action[] table.
**
** The action table is constructed as a single large table named yy_action[].
** Given state S and lookahead X, the action is computed as
**
**      yy_action[ yy_shift_ofst[S] + X ]
**
** If the index value yy_shift_ofst[S]+X is out of range or if the value
** yy_lookahead[yy_shift_ofst[S]+X] is not equal to X or if yy_shift_ofst[S]
** is equal to YY_SHIFT_USE_DFLT, it means that the action is not in the table
** and that yy_default[S] should be used instead.  
**
** The formula above is for computing the action when the lookahead is
** a terminal symbol.  If the lookahead is a non-terminal (as occurs after
** a reduce action) then the yy_reduce_ofst[] array is used in place of
** the yy_shift_ofst[] array and YY_REDUCE_USE_DFLT is used in place of
** YY_SHIFT_USE_DFLT.
**
** The following are the tables generated in this section:
**
**  yy_action[]        A single table containing all actions.
**  yy_lookahead[]     A table containing the lookahead for each entry in
**                     yy_action.  Used to detect hash collisions.
**  yy_shift_ofst[]    For each state, the offset into yy_action for
**                     shifting terminals.
**  yy_reduce_ofst[]   For each state, the offset into yy_action for
**                     shifting non-terminals after a reduce.
**  yy_default[]       Default action for each state.
*/
static const YYACTIONTYPE yy_action[] = {
 /*     0 */     9,   42,   44,   45,   46,  225,  227,  222,  223,  224,
 /*    10 */   226,   65,  469,    1,   59,   41,   18,   92,   19,   62,
 /*    20 */    26,  318,   51,  308,  309,  192,  193,  194,  195,  150,
 /*    30 */    60,    3,  300,  301,  203,  312,  162,   40,  186,   17,
 /*    40 */   211,  212,  213,  214,  215,  216,  217,  243,  161,  256,
 /*    50 */   257,  258,  259,  260,  261,  262,  263,  264,  265,  266,
 /*    60 */   268,  269,  270,  271,  272,  273,  274,   49,   42,   44,
 /*    70 */    45,   46,  225,  227,  222,  223,  224,  226,   84,   23,
 /*    80 */   124,  241,  242,   81,   78,  192,  193,  194,  195,    2,
 /*    90 */     4,    5,    6,  198,  280,  199,  150,  297,   21,  255,
 /*   100 */   160,  267,  159,  153,   30,  158,   54,  211,  212,  213,
 /*   110 */   214,  215,  216,  217,  302,  179,   49,  145,  241,  242,
 /*   120 */   187,  141,  302,  178,   12,  250,  164,  185,   32,   27,
 /*   130 */   312,   58,  157,  184,  294,  295,  255,  160,  267,  159,
 /*   140 */    33,   31,  198,   91,  199,  150,  279,   28,  296,  174,
 /*   150 */    49,   77,  153,   30,  191,   54,  211,  212,  213,  214,
 /*   160 */   215,  216,  217,  225,  227,  222,  223,  224,  226,  174,
 /*   170 */    42,   44,   45,   46,   66,   67,  198,  166,  199,  150,
 /*   180 */   196,   43,  124,  218,  219,  288,  153,   30,  305,   54,
 /*   190 */   211,  212,  213,  214,  215,  216,  217,  241,  242,  191,
 /*   200 */   108,  241,  242,  203,  140,  289,  145,  241,  242,  189,
 /*   210 */   245,  302,  178,  280,   63,  255,  160,  267,  159,  255,
 /*   220 */   160,  267,  159,  290,  306,  255,  160,  267,  159,  241,
 /*   230 */   242,  146,  246,  241,  242,  307,  109,  180,   68,  241,
 /*   240 */   242,  168,  110,  241,  242,  170,  248,  255,  160,  267,
 /*   250 */   159,  255,  160,  267,  159,   33,   31,  255,  160,  267,
 /*   260 */   159,  255,  160,  267,  159,  279,  132,  241,  242,  172,
 /*   270 */   111,   94,  241,  242,  307,   96,  182,  241,  242,   64,
 /*   280 */   112,  241,  242,   52,  113,  255,  160,  267,  159,   95,
 /*   290 */   255,  160,  267,  159,  149,  255,  160,  267,  159,  255,
 /*   300 */   160,  267,  159,   69,   33,   31,  241,  242,  281,  114,
 /*   310 */   241,  242,   34,  115,   57,  156,  241,  242,  283,  116,
 /*   320 */   241,  242,  165,  117,  255,  160,  267,  159,  255,  160,
 /*   330 */   267,  159,   15,  284,  255,  160,  267,  159,  255,  160,
 /*   340 */   267,  159,  241,  242,  197,   80,  124,   42,   44,   45,
 /*   350 */    46,  201,  285,  202,   75,    2,    4,    5,    6,   70,
 /*   360 */   255,  160,  267,  159,  133,  201,  177,  202,   75,   88,
 /*   370 */   152,   90,  151,   89,  201,  167,  202,   73,  315,  286,
 /*   380 */   191,   36,   48,   38,  152,  143,  151,  134,  201,  144,
 /*   390 */   202,   75,  303,  152,  175,  151,  176,  201,  190,  202,
 /*   400 */    75,  188,  200,   42,   44,   45,   35,  152,   53,  151,
 /*   410 */   299,  201,   31,  202,   75,   47,  152,  138,  151,   50,
 /*   420 */   201,   29,  202,   75,  147,  201,  139,  202,   75,  240,
 /*   430 */   152,   16,  151,  148,   42,   44,   45,   46,  135,  152,
 /*   440 */     7,  151,   10,  304,  152,   11,  151,  300,  301,  234,
 /*   450 */   201,  238,  202,   74,  201,  123,  202,   72,  201,  122,
 /*   460 */   202,   74,  201,  121,  202,   74,  275,  120,  276,  152,
 /*   470 */   206,  151,   39,  152,  233,  151,  277,  152,  278,  151,
 /*   480 */    87,  152,  169,  151,  282,  201,  291,  202,   74,  201,
 /*   490 */   221,  202,   74,   86,  220,  300,  301,  201,  173,  202,
 /*   500 */    74,   93,  155,  287,  152,  292,  151,   61,  152,   82,
 /*   510 */   151,   83,  201,  181,  202,   74,  152,  125,  151,  310,
 /*   520 */   201,  183,  202,   76,  311,  126,   24,   42,   44,   45,
 /*   530 */    46,  152,   71,  151,   25,   42,   44,   45,   46,  152,
 /*   540 */   201,  151,  202,   74,  201,  127,  202,   76,  201,  128,
 /*   550 */   202,   74,  201,  129,  202,   74,  314,  130,   20,  152,
 /*   560 */   191,  151,   56,  152,  316,  151,  268,  152,  268,  151,
 /*   570 */   268,  152,  268,  151,  268,  201,  268,  202,   74,  201,
 /*   580 */   131,  202,   74,  268,   85,  171,  142,  201,  268,  202,
 /*   590 */   137,   33,   31,  268,  152,  268,  151,  268,  152,  268,
 /*   600 */   151,  268,  201,  268,  202,   97,  152,  201,  151,  202,
 /*   610 */   136,  268,  201,  229,  202,  204,   42,   44,   45,   46,
 /*   620 */   268,  152,  268,  151,  268,  268,  152,  268,  151,   33,
 /*   630 */    31,  152,  201,  151,  202,  205,  201,  268,  202,   98,
 /*   640 */   201,  268,  202,   99,  201,  268,  202,  207,   33,   31,
 /*   650 */   268,  152,  208,  151,  268,  152,  268,  151,  268,  152,
 /*   660 */   268,  151,  268,  152,  268,  151,  268,  201,  268,  202,
 /*   670 */   100,  201,   55,  202,  118,   45,   46,  201,  268,  202,
 /*   680 */   101,   42,   44,   45,   46,  268,  152,  268,  151,  230,
 /*   690 */   152,  268,  151,  313,  300,  301,  152,  201,  151,  202,
 /*   700 */   102,  268,  201,  268,  202,  103,  154,    2,    4,    5,
 /*   710 */     6,  201,  268,  202,  104,  268,  152,  268,  151,   33,
 /*   720 */    31,  152,  201,  151,  202,  105,  201,  268,  202,  106,
 /*   730 */   152,  268,  151,  201,  268,  202,  107,  201,  268,  202,
 /*   740 */    79,  152,    8,  151,  268,  152,  268,  151,  268,   22,
 /*   750 */    20,  268,  152,  293,  151,  268,  152,  201,  151,  202,
 /*   760 */   119,   42,   44,   45,   46,   42,   44,   45,   46,   42,
 /*   770 */    44,   45,   46,   33,   31,  268,  152,  268,  151,  231,
 /*   780 */    42,   44,   45,   37,   33,   31,  209,   22,   20,  268,
 /*   790 */   210,  317,    2,    4,    5,    6,    2,    4,    5,    6,
 /*   800 */     2,    4,    5,    6,  268,  228,  268,    2,    4,    5,
 /*   810 */     6,    2,    4,    5,    6,  268,    2,    4,    5,    6,
 /*   820 */     2,    4,    5,    6,  268,  244,  268,  192,  193,  194,
 /*   830 */   195,  268,  247,  232,   33,   31,  249,  268,    2,    4,
 /*   840 */     5,    6,  268,  251,  235,  163,   14,    2,    4,    5,
 /*   850 */     6,  237,  252,   42,   44,   45,   46,   33,   31,   33,
 /*   860 */    31,    5,    6,  253,  268,   22,   20,   22,   20,  268,
 /*   870 */   268,  268,  254,  268,  268,  268,  268,  268,  268,  268,
 /*   880 */   268,  268,  268,   13,  268,  268,  268,  298,  268,  268,
 /*   890 */   268,  268,  268,  268,  236,  268,  268,  268,  268,  268,
 /*   900 */   268,  268,  268,  268,  268,  268,  268,  268,  268,  268,
 /*   910 */   268,  268,  268,  268,  268,  268,  268,  239,
};
static const YYCODETYPE yy_lookahead[] = {
 /*     0 */     2,    1,    2,    3,    4,    5,    6,    7,    8,    9,
 /*    10 */    10,   15,  115,   17,   18,   19,   20,   21,   22,   23,
 /*    20 */    24,   25,  107,   75,   76,   27,   28,   29,   30,   31,
 /*    30 */   107,   33,   84,   85,   34,  103,   38,   39,  106,   41,
 /*    40 */    42,   43,   44,   45,   46,   47,   48,   49,   50,   51,
 /*    50 */    52,   53,   54,   55,   56,   57,   58,   59,   60,   61,
 /*    60 */    62,   63,   64,   65,   66,   67,   68,    2,    1,    2,
 /*    70 */     3,    4,    5,    6,    7,    8,    9,   10,   88,   14,
 /*    80 */    90,   90,   91,  107,   93,   27,   28,   29,   30,    1,
 /*    90 */     2,    3,    4,   28,   28,   30,   31,   32,   33,  108,
 /*   100 */   109,  110,  111,   38,   39,  116,   41,   42,   43,   44,
 /*   110 */    45,   46,   47,   48,  103,  104,    2,   98,   90,   91,
 /*   120 */   101,   93,  103,  104,   36,   37,  116,  100,   14,   71,
 /*   130 */   103,   73,   74,  106,   69,   70,  108,  109,  110,  111,
 /*   140 */    12,   13,   28,   90,   30,   31,   80,   33,   83,   36,
 /*   150 */     2,   86,   38,   39,   26,   41,   42,   43,   44,   45,
 /*   160 */    46,   47,   48,    5,    6,    7,    8,    9,   10,   36,
 /*   170 */     1,    2,    3,    4,    1,    2,   28,  116,   30,   31,
 /*   180 */    88,   33,   90,   69,   70,   72,   38,   39,   90,   41,
 /*   190 */    42,   43,   44,   45,   46,   47,   48,   90,   91,   26,
 /*   200 */    93,   90,   91,   34,   93,   72,   98,   90,   91,  101,
 /*   210 */    93,  103,  104,   28,   12,  108,  109,  110,  111,  108,
 /*   220 */   109,  110,  111,   31,   90,  108,  109,  110,  111,   90,
 /*   230 */    91,   99,   93,   90,   91,  103,   93,  105,   36,   90,
 /*   240 */    91,    5,   93,   90,   91,    9,   93,  108,  109,  110,
 /*   250 */   111,  108,  109,  110,  111,   12,   13,  108,  109,  110,
 /*   260 */   111,  108,  109,  110,  111,   80,   81,   90,   91,   77,
 /*   270 */    93,   79,   90,   91,  103,   93,  105,   90,   91,   12,
 /*   280 */    93,   90,   91,   40,   93,  108,  109,  110,  111,   96,
 /*   290 */   108,  109,  110,  111,  116,  108,  109,  110,  111,  108,
 /*   300 */   109,  110,  111,   36,   12,   13,   90,   91,  114,   93,
 /*   310 */    90,   91,   71,   93,   73,   74,   90,   91,  114,   93,
 /*   320 */    90,   91,  116,   93,  108,  109,  110,  111,  108,  109,
 /*   330 */   110,  111,   40,  114,  108,  109,  110,  111,  108,  109,
 /*   340 */   110,  111,   90,   91,   88,   93,   90,    1,    2,    3,
 /*   350 */     4,   89,  114,   91,   92,    1,    2,    3,    4,   33,
 /*   360 */   108,  109,  110,  111,  102,   89,  103,   91,   92,    5,
 /*   370 */   108,    7,  110,    9,   89,   97,   91,   92,  102,   76,
 /*   380 */    26,    4,   36,    4,  108,   95,  110,  102,   89,   95,
 /*   390 */    91,   92,   29,  108,   36,  110,  112,   89,   16,   91,
 /*   400 */    92,  102,   32,    1,    2,    3,    4,  108,   41,  110,
 /*   410 */   102,   89,   13,   91,   92,   35,  108,   75,  110,   35,
 /*   420 */    89,   35,   91,   92,  102,   89,   75,   91,   92,   16,
 /*   430 */   108,   41,  110,  102,    1,    2,    3,    4,  102,  108,
 /*   440 */    35,  110,   35,   80,  108,   35,  110,   84,   85,   72,
 /*   450 */    89,   72,   91,   92,   89,   94,   91,   92,   89,   94,
 /*   460 */    91,   92,   89,   94,   91,   92,   16,   94,   16,  108,
 /*   470 */    37,  110,   35,  108,   72,  110,   16,  108,   16,  110,
 /*   480 */     5,  108,   81,  110,   81,   89,   82,   91,   92,   89,
 /*   490 */    94,   91,   92,   36,   94,   84,   85,   89,   78,   91,
 /*   500 */    92,   79,   94,   76,  108,   34,  110,   33,  108,    7,
 /*   510 */   110,    7,   89,    7,   91,   92,  108,   94,  110,   75,
 /*   520 */    89,    7,   91,   92,   75,   94,    7,    1,    2,    3,
 /*   530 */     4,  108,   36,  110,    7,    1,    2,    3,    4,  108,
 /*   540 */    89,  110,   91,   92,   89,   94,   91,   92,   89,   94,
 /*   550 */    91,   92,   89,   94,   91,   92,   34,   94,   13,  108,
 /*   560 */    26,  110,   36,  108,   16,  110,  117,  108,  117,  110,
 /*   570 */   117,  108,  117,  110,  117,   89,  117,   91,   92,   89,
 /*   580 */    94,   91,   92,  117,   94,  113,  114,   89,  117,   91,
 /*   590 */    92,   12,   13,  117,  108,  117,  110,  117,  108,  117,
 /*   600 */   110,  117,   89,  117,   91,   92,  108,   89,  110,   91,
 /*   610 */    92,  117,   89,   34,   91,   92,    1,    2,    3,    4,
 /*   620 */   117,  108,  117,  110,  117,  117,  108,  117,  110,   12,
 /*   630 */    13,  108,   89,  110,   91,   92,   89,  117,   91,   92,
 /*   640 */    89,  117,   91,   92,   89,  117,   91,   92,   12,   13,
 /*   650 */   117,  108,   37,  110,  117,  108,  117,  110,  117,  108,
 /*   660 */   117,  110,  117,  108,  117,  110,  117,   89,  117,   91,
 /*   670 */    92,   89,   36,   91,   92,    3,    4,   89,  117,   91,
 /*   680 */    92,    1,    2,    3,    4,  117,  108,  117,  110,   72,
 /*   690 */   108,  117,  110,   83,   84,   85,  108,   89,  110,   91,
 /*   700 */    92,  117,   89,  117,   91,   92,   26,    1,    2,    3,
 /*   710 */     4,   89,  117,   91,   92,  117,  108,  117,  110,   12,
 /*   720 */    13,  108,   89,  110,   91,   92,   89,  117,   91,   92,
 /*   730 */   108,  117,  110,   89,  117,   91,   92,   89,  117,   91,
 /*   740 */    92,  108,   36,  110,  117,  108,  117,  110,  117,   12,
 /*   750 */    13,  117,  108,   16,  110,  117,  108,   89,  110,   91,
 /*   760 */    92,    1,    2,    3,    4,    1,    2,    3,    4,    1,
 /*   770 */     2,    3,    4,   12,   13,  117,  108,  117,  110,   72,
 /*   780 */     1,    2,    3,    4,   12,   13,   26,   12,   13,  117,
 /*   790 */    26,   16,    1,    2,    3,    4,    1,    2,    3,    4,
 /*   800 */     1,    2,    3,    4,  117,   37,  117,    1,    2,    3,
 /*   810 */     4,    1,    2,    3,    4,  117,    1,    2,    3,    4,
 /*   820 */     1,    2,    3,    4,  117,   34,  117,   27,   28,   29,
 /*   830 */    30,  117,   37,   72,   12,   13,   37,  117,    1,    2,
 /*   840 */     3,    4,  117,   37,   72,   26,   36,    1,    2,    3,
 /*   850 */     4,   72,   37,    1,    2,    3,    4,   12,   13,   12,
 /*   860 */    13,    3,    4,   26,  117,   12,   13,   12,   13,  117,
 /*   870 */   117,  117,   26,  117,  117,  117,  117,  117,  117,  117,
 /*   880 */   117,  117,  117,   36,  117,  117,  117,   34,  117,  117,
 /*   890 */   117,  117,  117,  117,   72,  117,  117,  117,  117,  117,
 /*   900 */   117,  117,  117,  117,  117,  117,  117,  117,  117,  117,
 /*   910 */   117,  117,  117,  117,  117,  117,  117,   72,
};
#define YY_SHIFT_USE_DFLT (-53)
#define YY_SHIFT_MAX 189
static const short yy_shift_ofst[] = {
 /*     0 */    -4,   -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,
 /*    10 */    -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,   65,
 /*    20 */    65,   65,   65,   65,   65,   65,   65,  114,  114,  114,
 /*    30 */   114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
 /*    40 */   114,  114,  148,  148,  148,  148,  148,  148,  148,  148,
 /*    50 */   148,  148,  148,  148,  148,  148,  148,  148,  148,  148,
 /*    60 */   148,  363,  363,  -52,  610,   58,   58,   58,  363,  -52,
 /*    70 */   185,  610,    0,    0,   67,   67,  158,  158,  354,  534,
 /*    80 */   354,  800,  800,  800,  173,  128,  192,   66,   66,   66,
 /*    90 */    66,  411,  326,  303,  303,  358,   88,  169,  346,  433,
 /*   100 */   615,  680,  760,  764,  526,  768,  402,  779,  791,  706,
 /*   110 */   795,  799,  806,  810,  815,  819,  837,  846,  852,  852,
 /*   120 */   243,  636,  579,  617,  241,  707,  761,  772,  822,  845,
 /*   130 */   847,  292,  364,  737,  853,  775,  672,  672,  377,  379,
 /*   140 */   858,  858,  236,  113,  133,  202,  267,  855,  855,  382,
 /*   150 */   370,  380,  384,  386,  367,  399,  342,  351,  413,  405,
 /*   160 */   407,  410,  437,  390,  450,  452,  460,  462,  401,  475,
 /*   170 */   403,  457,  420,  422,  427,  404,  471,  474,  502,  504,
 /*   180 */   506,  444,  514,  449,  519,  496,  527,  522,  545,  548,
};
#define YY_REDUCE_USE_DFLT (-104)
#define YY_REDUCE_MAX 95
static const short yy_reduce_ofst[] = {
 /*     0 */  -103,   -9,   28,  107,  111,  117,  139,  143,  149,  153,
 /*    10 */   177,  182,  187,  191,  216,  220,  226,  230,  252,  262,
 /*    20 */   276,  285,  299,  308,  322,  331,  336,  361,  365,  369,
 /*    30 */   373,  396,  400,  408,  423,  431,  451,  455,  459,  463,
 /*    40 */   486,  490,  498,  513,  518,  523,  543,  547,  551,  555,
 /*    50 */   578,  582,  588,  608,  613,  622,  633,  637,  644,  648,
 /*    60 */   668,   19,  108,  132,   27,  -10,   92,  256,   11,  171,
 /*    70 */   472,  -68,  -85,  -77,  -85,  -77,  -85,  -24,  -11,   10,
 /*    80 */    61,   53,   98,  134,  178,  206,  193,  194,  204,  219,
 /*    90 */   238,  263,  278,  290,  294,  284,
};
static const YYACTIONTYPE yy_default[] = {
 /*     0 */   468,  468,  468,  468,  468,  468,  468,  468,  468,  468,
 /*    10 */   468,  468,  468,  468,  468,  468,  468,  468,  468,  468,
 /*    20 */   468,  468,  468,  468,  468,  468,  468,  468,  468,  468,
 /*    30 */   468,  468,  468,  468,  468,  468,  468,  468,  468,  468,
 /*    40 */   468,  468,  468,  468,  468,  468,  468,  468,  468,  468,
 /*    50 */   468,  468,  468,  468,  468,  468,  468,  468,  468,  468,
 /*    60 */   468,  443,  443,  446,  449,  468,  468,  468,  468,  468,
 /*    70 */   468,  468,  468,  468,  468,  468,  344,  468,  329,  329,
 /*    80 */   329,  468,  468,  468,  329,  329,  468,  468,  468,  468,
 /*    90 */   468,  468,  468,  419,  419,  435,  468,  468,  468,  468,
 /*   100 */   468,  468,  468,  468,  468,  468,  468,  468,  468,  468,
 /*   110 */   468,  468,  468,  468,  468,  468,  468,  468,  396,  462,
 /*   120 */   468,  468,  468,  468,  468,  468,  468,  468,  468,  468,
 /*   130 */   468,  468,  468,  468,  468,  468,  342,  341,  468,  468,
 /*   140 */   363,  362,  468,  468,  468,  454,  468,  450,  451,  468,
 /*   150 */   468,  468,  468,  468,  468,  400,  468,  468,  468,  468,
 /*   160 */   468,  468,  468,  468,  468,  468,  468,  468,  468,  430,
 /*   170 */   468,  468,  422,  468,  468,  468,  468,  468,  468,  468,
 /*   180 */   468,  468,  468,  468,  468,  455,  468,  468,  466,  468,
 /*   190 */   319,  330,  331,  332,  333,  334,  407,  408,  335,  336,
 /*   200 */   337,  338,  339,  340,  343,  344,  345,  346,  347,  349,
 /*   210 */   350,  351,  352,  353,  354,  355,  356,  357,  394,  395,
 /*   220 */   397,  399,  401,  402,  403,  404,  405,  406,  348,  398,
 /*   230 */   409,  410,  414,  412,  416,  418,  413,  411,  415,  417,
 /*   240 */   320,  358,  359,  360,  361,  364,  365,  366,  367,  368,
 /*   250 */   369,  370,  371,  372,  373,  374,  375,  376,  377,  378,
 /*   260 */   379,  380,  381,  382,  383,  384,  385,  386,  387,  388,
 /*   270 */   389,  390,  391,  392,  393,  321,  322,  323,  324,  426,
 /*   280 */   427,  428,  432,  429,  431,  433,  420,  421,  423,  424,
 /*   290 */   425,  434,  436,  325,  458,  459,  460,  461,  463,  464,
 /*   300 */   456,  457,  437,  438,  439,  444,  445,  440,  441,  442,
 /*   310 */   447,  448,  452,  453,  467,  465,  326,  327,  328,
};
#define YY_SZ_ACTTAB (int)(sizeof(yy_action)/sizeof(yy_action[0]))

/* The next table maps tokens into fallback tokens.  If a construct
** like the following:
** 
**      %fallback ID X Y Z.
**
** appears in the grammer, then ID becomes a fallback token for X, Y,
** and Z.  Whenever one of the tokens X, Y, or Z is input to the parser
** but it does not parse, the type of the token is changed to ID and
** the parse is retried before an error is thrown.
*/
#ifdef YYFALLBACK
static const YYCODETYPE yyFallback[] = {
};
#endif /* YYFALLBACK */

/* The following structure represents a single element of the
** parser's stack.  Information stored includes:
**
**   +  The state number for the parser at this level of the stack.
**
**   +  The value of the token stored at this level of the stack.
**      (In other words, the "major" token.)
**
**   +  The semantic value stored at this level of the stack.  This is
**      the information used by the action routines in the grammar.
**      It is sometimes called the "minor" token.
*/
struct yyStackEntry {
  int stateno;       /* The state-number */
  int major;         /* The major token value.  This is the code
                     ** number for the token at this stack level */
  YYMINORTYPE minor; /* The user-supplied minor token value.  This
                     ** is the value of the token  */
};
typedef struct yyStackEntry yyStackEntry;

/* The state of the parser is completely contained in an instance of
** the following structure */
struct yyParser {
  int yyidx;                    /* Index of top element in stack */
  int yyerrcnt;                 /* Shifts left before out of the error */
  PnParserARG_SDECL                /* A place to hold %extra_argument */
  yyStackEntry yystack[YYSTACKDEPTH];  /* The parser's stack */
};
typedef struct yyParser yyParser;

#ifndef NDEBUG
#include <stdio.h>
static FILE *yyTraceFILE = 0;
static char *yyTracePrompt = 0;
#endif /* NDEBUG */

#ifndef NDEBUG
/* 
** Turn parser tracing on by giving a stream to which to write the trace
** and a prompt to preface each trace message.  Tracing is turned off
** by making either argument NULL 
**
** Inputs:
** <ul>
** <li> A FILE* to which trace output should be written.
**      If NULL, then tracing is turned off.
** <li> A prefix string written at the beginning of every
**      line of trace output.  If NULL, then tracing is
**      turned off.
** </ul>
**
** Outputs:
** None.
*/
void PnParserTrace(FILE *TraceFILE, char *zTracePrompt){
  yyTraceFILE = TraceFILE;
  yyTracePrompt = zTracePrompt;
  if( yyTraceFILE==0 ) yyTracePrompt = 0;
  else if( yyTracePrompt==0 ) yyTraceFILE = 0;
}
#endif /* NDEBUG */

#ifndef NDEBUG
/* For tracing shifts, the names of all terminals and nonterminals
** are required.  The following table supplies these names */
static const char *const yyTokenName[] = { 
  "$",             "PLUS",          "MINUS",         "TIMES",       
  "DIV",           "LESS",          "LESS_EQ",       "EQ",          
  "NOT_EQ",        "GREATER",       "GREATER_EQ",    "UNARY_NEG",   
  "OR",            "AND",           "NOT",           "GREATSPN_MEASURE",
  "END",           "GREATSPN_MDEPDELAY",  "GREATSPN_MDEARCMULT",  "GREATSPN_TRNGUARD",
  "GREATSPN_GENERALPDF",  "DTA_EDGE_DEF",  "DTA_STATE_PROPOSITION",  "DTA_BINDING_RULES",
  "CSLTA_EXPR",    "INVALID",       "SEMICOLON",     "REALNUM",     
  "INTEGER",       "G_RATE_PARAM",  "G_MARK_PARAM",  "SHARP",       
  "G_PLACE_ID",    "OP_PAREN",      "CL_PAREN",      "OP_SQPAR",    
  "COMMA",         "CL_SQPAR",      "IF_FN",         "WHEN",        
  "COLON",         "EVER",          "ABS_FN",        "FACTORIAL_FN",
  "MIN_FN",        "MAX_FN",        "MOD_FN",        "BINOMIAL_FN", 
  "FRACT_FN",      "PDF_X_VAR",     "LOG_FN",        "SIN_FN",      
  "COS_FN",        "TAN_FN",        "ARCSIN_FN",     "ARCCOS_FN",   
  "ARCTAN_FN",     "EXP_FN",        "SQRT_FN",       "CEIL_FN",     
  "FLOOR_FN",      "DIRACDELTA_FN",  "POW_FN",        "RECT_FN",     
  "UNIFORM_FN",    "TRIANGULAR_FN",  "ERLANG_FN",     "TRUNCATED_EXP_FN",
  "PARETO_FN",     "TRUE",          "FALSE",         "OPEN_P",      
  "CL_BRACK",      "OPEN_E",        "OPEN_X",        "G_TRANSITION_ID",
  "G_ACTION_ID",   "ACTS",          "SETMINUS",      "OP_BRACK",    
  "G_CLOCKVALUE_ID",  "XCLK",          "RESET",         "G_ATOMIC_PROP_ID",
  "ID",            "STRING",        "PROB_TA",       "error",       
  "measure",       "int_const",     "real_const",    "int_marking", 
  "int_mdexpr",    "real_mdexpr",   "logic_mdcond",  "act_list",    
  "actset",        "dta_edge",      "clock_value_list",  "transition_list",
  "spexpr_list",   "dta_binding",   "cslta_expr",    "id_or_quoted_id",
  "clock_id_name",  "transition_id_name",  "spexpr_name",   "comp_op",     
  "unary_int_fn",  "unary_real_fn",  "binary_int_fn",  "binary_real_fn",
  "opt_reset",     "clock_constr",  "clock_value",   "parser_entry",
  "opt_semicolon",
};
#endif /* NDEBUG */

#ifndef NDEBUG
/* For tracing reduce actions, the names of all rules are required.
*/
static const char *const yyRuleName[] = {
 /*   0 */ "parser_entry ::= GREATSPN_MEASURE measure opt_semicolon END",
 /*   1 */ "parser_entry ::= GREATSPN_MDEPDELAY real_mdexpr opt_semicolon END",
 /*   2 */ "parser_entry ::= GREATSPN_MDEARCMULT int_mdexpr opt_semicolon END",
 /*   3 */ "parser_entry ::= GREATSPN_TRNGUARD logic_mdcond opt_semicolon END",
 /*   4 */ "parser_entry ::= GREATSPN_GENERALPDF real_mdexpr opt_semicolon END",
 /*   5 */ "parser_entry ::= DTA_EDGE_DEF dta_edge END",
 /*   6 */ "parser_entry ::= DTA_STATE_PROPOSITION cslta_expr END",
 /*   7 */ "parser_entry ::= DTA_BINDING_RULES dta_binding END",
 /*   8 */ "parser_entry ::= CSLTA_EXPR cslta_expr END",
 /*   9 */ "parser_entry ::= INVALID",
 /*  10 */ "opt_semicolon ::=",
 /*  11 */ "opt_semicolon ::= SEMICOLON",
 /*  12 */ "real_const ::= REALNUM",
 /*  13 */ "real_const ::= INTEGER",
 /*  14 */ "real_const ::= G_RATE_PARAM",
 /*  15 */ "real_const ::= G_MARK_PARAM",
 /*  16 */ "int_const ::= INTEGER",
 /*  17 */ "int_const ::= G_MARK_PARAM",
 /*  18 */ "int_marking ::= SHARP G_PLACE_ID",
 /*  19 */ "int_mdexpr ::= int_const",
 /*  20 */ "int_mdexpr ::= int_marking",
 /*  21 */ "int_mdexpr ::= OP_PAREN int_mdexpr CL_PAREN",
 /*  22 */ "int_mdexpr ::= int_mdexpr PLUS int_mdexpr",
 /*  23 */ "int_mdexpr ::= int_mdexpr MINUS int_mdexpr",
 /*  24 */ "int_mdexpr ::= int_mdexpr TIMES int_mdexpr",
 /*  25 */ "int_mdexpr ::= int_mdexpr DIV int_mdexpr",
 /*  26 */ "int_mdexpr ::= binary_int_fn OP_SQPAR int_mdexpr COMMA int_mdexpr CL_SQPAR",
 /*  27 */ "int_mdexpr ::= MINUS int_mdexpr",
 /*  28 */ "int_mdexpr ::= unary_int_fn OP_SQPAR int_mdexpr CL_SQPAR",
 /*  29 */ "int_mdexpr ::= IF_FN OP_SQPAR logic_mdcond COMMA int_mdexpr COMMA int_mdexpr CL_SQPAR",
 /*  30 */ "int_mdexpr ::= WHEN logic_mdcond COLON int_mdexpr SEMICOLON EVER int_mdexpr SEMICOLON",
 /*  31 */ "int_mdexpr ::= EVER int_mdexpr SEMICOLON",
 /*  32 */ "unary_int_fn ::= ABS_FN",
 /*  33 */ "unary_int_fn ::= FACTORIAL_FN",
 /*  34 */ "binary_int_fn ::= MIN_FN",
 /*  35 */ "binary_int_fn ::= MAX_FN",
 /*  36 */ "binary_int_fn ::= MOD_FN",
 /*  37 */ "binary_int_fn ::= BINOMIAL_FN",
 /*  38 */ "binary_int_fn ::= FRACT_FN",
 /*  39 */ "real_mdexpr ::= real_const",
 /*  40 */ "real_mdexpr ::= int_marking",
 /*  41 */ "real_mdexpr ::= PDF_X_VAR",
 /*  42 */ "real_mdexpr ::= OP_PAREN real_mdexpr CL_PAREN",
 /*  43 */ "real_mdexpr ::= real_mdexpr PLUS real_mdexpr",
 /*  44 */ "real_mdexpr ::= real_mdexpr MINUS real_mdexpr",
 /*  45 */ "real_mdexpr ::= real_mdexpr TIMES real_mdexpr",
 /*  46 */ "real_mdexpr ::= real_mdexpr DIV real_mdexpr",
 /*  47 */ "real_mdexpr ::= binary_real_fn OP_SQPAR real_mdexpr COMMA real_mdexpr CL_SQPAR",
 /*  48 */ "real_mdexpr ::= MINUS real_mdexpr",
 /*  49 */ "real_mdexpr ::= unary_real_fn OP_SQPAR real_mdexpr CL_SQPAR",
 /*  50 */ "real_mdexpr ::= LOG_FN OP_SQPAR real_mdexpr CL_SQPAR",
 /*  51 */ "real_mdexpr ::= LOG_FN OP_SQPAR real_mdexpr COMMA real_mdexpr CL_SQPAR",
 /*  52 */ "real_mdexpr ::= IF_FN OP_SQPAR logic_mdcond COMMA real_mdexpr COMMA real_mdexpr CL_SQPAR",
 /*  53 */ "real_mdexpr ::= WHEN logic_mdcond COLON real_mdexpr SEMICOLON EVER real_mdexpr SEMICOLON",
 /*  54 */ "real_mdexpr ::= EVER real_mdexpr SEMICOLON",
 /*  55 */ "unary_real_fn ::= unary_int_fn",
 /*  56 */ "unary_real_fn ::= SIN_FN",
 /*  57 */ "unary_real_fn ::= COS_FN",
 /*  58 */ "unary_real_fn ::= TAN_FN",
 /*  59 */ "unary_real_fn ::= ARCSIN_FN",
 /*  60 */ "unary_real_fn ::= ARCCOS_FN",
 /*  61 */ "unary_real_fn ::= ARCTAN_FN",
 /*  62 */ "unary_real_fn ::= EXP_FN",
 /*  63 */ "unary_real_fn ::= SQRT_FN",
 /*  64 */ "unary_real_fn ::= CEIL_FN",
 /*  65 */ "unary_real_fn ::= FLOOR_FN",
 /*  66 */ "unary_real_fn ::= DIRACDELTA_FN",
 /*  67 */ "binary_real_fn ::= binary_int_fn",
 /*  68 */ "binary_real_fn ::= POW_FN",
 /*  69 */ "binary_real_fn ::= RECT_FN",
 /*  70 */ "binary_real_fn ::= UNIFORM_FN",
 /*  71 */ "binary_real_fn ::= TRIANGULAR_FN",
 /*  72 */ "binary_real_fn ::= ERLANG_FN",
 /*  73 */ "binary_real_fn ::= TRUNCATED_EXP_FN",
 /*  74 */ "binary_real_fn ::= PARETO_FN",
 /*  75 */ "logic_mdcond ::= TRUE",
 /*  76 */ "logic_mdcond ::= FALSE",
 /*  77 */ "logic_mdcond ::= int_mdexpr comp_op int_mdexpr",
 /*  78 */ "logic_mdcond ::= NOT logic_mdcond",
 /*  79 */ "logic_mdcond ::= OP_PAREN logic_mdcond CL_PAREN",
 /*  80 */ "logic_mdcond ::= logic_mdcond AND logic_mdcond",
 /*  81 */ "logic_mdcond ::= logic_mdcond OR logic_mdcond",
 /*  82 */ "comp_op ::= EQ",
 /*  83 */ "comp_op ::= NOT_EQ",
 /*  84 */ "comp_op ::= GREATER",
 /*  85 */ "comp_op ::= LESS",
 /*  86 */ "comp_op ::= GREATER_EQ",
 /*  87 */ "comp_op ::= LESS_EQ",
 /*  88 */ "measure ::= measure PLUS measure",
 /*  89 */ "measure ::= measure MINUS measure",
 /*  90 */ "measure ::= OPEN_P logic_mdcond CL_BRACK",
 /*  91 */ "measure ::= real_const OPEN_P logic_mdcond CL_BRACK",
 /*  92 */ "measure ::= OPEN_E int_mdexpr CL_BRACK",
 /*  93 */ "measure ::= real_const OPEN_E int_mdexpr CL_BRACK",
 /*  94 */ "measure ::= OPEN_E int_mdexpr DIV logic_mdcond CL_BRACK",
 /*  95 */ "measure ::= real_const OPEN_E int_mdexpr DIV logic_mdcond CL_BRACK",
 /*  96 */ "measure ::= OPEN_X G_TRANSITION_ID CL_BRACK",
 /*  97 */ "measure ::= real_const OPEN_X G_TRANSITION_ID CL_BRACK",
 /*  98 */ "measure ::= OPEN_X G_TRANSITION_ID DIV logic_mdcond CL_BRACK",
 /*  99 */ "measure ::= real_const OPEN_X G_TRANSITION_ID DIV logic_mdcond CL_BRACK",
 /* 100 */ "act_list ::=",
 /* 101 */ "act_list ::= G_ACTION_ID",
 /* 102 */ "act_list ::= act_list COMMA G_ACTION_ID",
 /* 103 */ "actset ::= ACTS",
 /* 104 */ "actset ::= ACTS SETMINUS OP_BRACK act_list CL_BRACK",
 /* 105 */ "actset ::= OP_BRACK act_list CL_BRACK",
 /* 106 */ "actset ::= SHARP",
 /* 107 */ "clock_value ::= G_CLOCKVALUE_ID",
 /* 108 */ "clock_value ::= INTEGER",
 /* 109 */ "clock_constr ::= clock_value LESS XCLK LESS clock_value",
 /* 110 */ "clock_constr ::= XCLK LESS clock_value",
 /* 111 */ "clock_constr ::= clock_value LESS XCLK",
 /* 112 */ "clock_constr ::= XCLK GREATER clock_value",
 /* 113 */ "clock_constr ::= clock_value GREATER XCLK",
 /* 114 */ "clock_constr ::= XCLK EQ clock_value",
 /* 115 */ "opt_reset ::= COMMA RESET",
 /* 116 */ "opt_reset ::=",
 /* 117 */ "dta_edge ::= OP_PAREN clock_constr COMMA actset opt_reset CL_PAREN",
 /* 118 */ "clock_id_name ::= id_or_quoted_id",
 /* 119 */ "clock_id_name ::= G_RATE_PARAM",
 /* 120 */ "clock_id_name ::= G_CLOCKVALUE_ID",
 /* 121 */ "transition_id_name ::= id_or_quoted_id",
 /* 122 */ "transition_id_name ::= G_TRANSITION_ID",
 /* 123 */ "transition_id_name ::= G_ACTION_ID",
 /* 124 */ "clock_value_list ::=",
 /* 125 */ "clock_value_list ::= clock_id_name EQ real_const",
 /* 126 */ "clock_value_list ::= clock_value_list COMMA clock_id_name EQ real_const",
 /* 127 */ "transition_list ::=",
 /* 128 */ "transition_list ::= transition_id_name EQ G_TRANSITION_ID",
 /* 129 */ "transition_list ::= transition_list COMMA transition_id_name EQ G_TRANSITION_ID",
 /* 130 */ "spexpr_list ::=",
 /* 131 */ "spexpr_list ::= spexpr_name EQ cslta_expr",
 /* 132 */ "spexpr_list ::= spexpr_list COMMA spexpr_name EQ cslta_expr",
 /* 133 */ "spexpr_name ::= id_or_quoted_id",
 /* 134 */ "spexpr_name ::= G_ATOMIC_PROP_ID",
 /* 135 */ "dta_binding ::= clock_value_list",
 /* 136 */ "dta_binding ::= clock_value_list OR transition_list OR spexpr_list",
 /* 137 */ "id_or_quoted_id ::= ID",
 /* 138 */ "id_or_quoted_id ::= STRING",
 /* 139 */ "cslta_expr ::= TRUE",
 /* 140 */ "cslta_expr ::= FALSE",
 /* 141 */ "cslta_expr ::= G_ATOMIC_PROP_ID",
 /* 142 */ "cslta_expr ::= G_PLACE_ID",
 /* 143 */ "cslta_expr ::= int_mdexpr comp_op int_mdexpr",
 /* 144 */ "cslta_expr ::= OP_PAREN cslta_expr CL_PAREN",
 /* 145 */ "cslta_expr ::= NOT cslta_expr",
 /* 146 */ "cslta_expr ::= cslta_expr AND cslta_expr",
 /* 147 */ "cslta_expr ::= cslta_expr OR cslta_expr",
 /* 148 */ "cslta_expr ::= PROB_TA comp_op real_const id_or_quoted_id OP_PAREN dta_binding CL_PAREN",
};
#endif /* NDEBUG */

/*
** This function returns the symbolic name associated with a token
** value.
*/
const char *PnParserTokenName(int tokenType){
#ifndef NDEBUG
  if( tokenType>0 && tokenType<(int)(sizeof(yyTokenName)/sizeof(yyTokenName[0])) ){
    return yyTokenName[tokenType];
  }else{
    return "Unknown";
  }
#else
  return "";
#endif
}

/* 
** This function allocates a new parser.
** The only argument is a pointer to a function which works like
** malloc.
**
** Inputs:
** A pointer to the function used to allocate memory.
**
** Outputs:
** A pointer to a parser.  This pointer is used in subsequent calls
** to PnParser and PnParserFree.
*/
void *PnParserAlloc(void *(*mallocProc)(size_t)){
  yyParser *pParser;
  //pParser = (yyParser*)(*mallocProc)( (size_t)sizeof(yyParser) );
  pParser = new yyParser;
  if( pParser ){
    pParser->yyidx = -1;
  }
  return pParser;
}

/* The following function deletes the value associated with a
** symbol.  The symbol can be either a terminal or nonterminal.
** "yymajor" is the symbol code, and "yypminor" is a pointer to
** the value.
*/
static void yy_destructor(YYCODETYPE yymajor, YYMINORTYPE *yypminor){
  switch( yymajor ){
    /* Here is inserted the actions which take place when a
    ** terminal or non-terminal is destroyed.  This can happen
    ** when the symbol is popped from the stack during a
    ** reduce or during error processing or when a parser is 
    ** being destroyed before it is finished parsing.
    **
    ** Note: during a reduce, the only symbols destroyed are those
    ** which appear on the RHS of the rule, but which are not used
    ** inside the C code.
    */
    case 88:
#line 92 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy92).reset(); /*UNUSED(pExtraArgs);*/ }
#line 801 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 89:
#line 94 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy161).reset(); }
#line 806 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 90:
#line 96 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy133).reset(); }
#line 811 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 91:
    case 92:
#line 98 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy11).reset(); }
#line 817 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 93:
#line 102 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy179).reset(); }
#line 822 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 94:
#line 104 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy116).reset(); }
#line 827 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 95:
    case 96:
    case 97:
#line 106 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy153).reset(); }
#line 834 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 98:
#line 112 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy156).clear(); }
#line 839 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 99:
#line 114 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy12).clear(); }
#line 844 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 100:
#line 116 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy45).clear(); }
#line 849 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 101:
#line 118 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy19).reset(); }
#line 854 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 102:
#line 120 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy28).reset(); }
#line 859 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    case 103:
    case 104:
    case 105:
    case 106:
#line 122 "NSRC/DSPN-Tool/newparser.lyy"
{ (yypminor->yy71).clear(); }
#line 867 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
      break;
    default:  break;   /* If no destructor action specified: do nothing */
  }
}

/*
** Pop the parser's stack once.
**
** If there is a destructor routine associated with the token which
** is popped from the stack, then call it.
**
** Return the major token number for the symbol popped.
*/
static int yy_pop_parser_stack(yyParser *pParser){
  YYCODETYPE yymajor;
  yyStackEntry *yytos = &pParser->yystack[pParser->yyidx];

  if( pParser->yyidx<0 ) return 0;
#ifndef NDEBUG
  if( yyTraceFILE && pParser->yyidx>=0 ){
    fprintf(yyTraceFILE,"%sPopping %s\n",
      yyTracePrompt,
      yyTokenName[yytos->major]);
  }
#endif
  yymajor = yytos->major;
  yy_destructor( yymajor, &yytos->minor);
  pParser->yyidx--;
  return yymajor;
}

/* 
** Deallocate and destroy a parser.  Destructors are all called for
** all stack elements before shutting the parser down.
**
** Inputs:
** <ul>
** <li>  A pointer to the parser.  This should be a pointer
**       obtained from PnParserAlloc.
** <li>  A pointer to a function used to reclaim memory obtained
**       from malloc.
** </ul>
*/
void PnParserFree(
  void *p,                    /* The parser to be deleted */
  void (*freeProc)(void*)     /* Function used to reclaim memory */
){
  yyParser *pParser = (yyParser*)p;
  if( pParser==0 ) return;
  while( pParser->yyidx>=0 ) yy_pop_parser_stack(pParser);
  //(*freeProc)((void*)pParser);
  delete pParser;
}

/*
** Find the appropriate action for a parser given the terminal
** look-ahead token iLookAhead.
**
** If the look-ahead token is YYNOCODE, then check to see if the action is
** independent of the look-ahead.  If it is, return the action, otherwise
** return YY_NO_ACTION.
*/
static int yy_find_shift_action(
  yyParser *pParser,        /* The parser */
  YYCODETYPE iLookAhead     /* The look-ahead token */
){
  int i;
  int stateno = pParser->yystack[pParser->yyidx].stateno;
 
  if( stateno>YY_SHIFT_MAX || (i = yy_shift_ofst[stateno])==YY_SHIFT_USE_DFLT ){
    return yy_default[stateno];
  }
  if( iLookAhead==YYNOCODE ){
    return YY_NO_ACTION;
  }
  i += iLookAhead;
  if( i<0 || i>=YY_SZ_ACTTAB || yy_lookahead[i]!=iLookAhead ){
    if( iLookAhead>0 ){
#ifdef YYFALLBACK
      int iFallback;            /* Fallback token */
      if( iLookAhead<sizeof(yyFallback)/sizeof(yyFallback[0])
             && (iFallback = yyFallback[iLookAhead])!=0 ){
#ifndef NDEBUG
        if( yyTraceFILE ){
          fprintf(yyTraceFILE, "%sFALLBACK %s => %s\n",
             yyTracePrompt, yyTokenName[iLookAhead], yyTokenName[iFallback]);
        }
#endif
        return yy_find_shift_action(pParser, iFallback);
      }
#endif
#ifdef YYWILDCARD
      {
        int j = i - iLookAhead + YYWILDCARD;
        if( j>=0 && j<YY_SZ_ACTTAB && yy_lookahead[j]==YYWILDCARD ){
#ifndef NDEBUG
          if( yyTraceFILE ){
            fprintf(yyTraceFILE, "%sWILDCARD %s => %s\n",
               yyTracePrompt, yyTokenName[iLookAhead], yyTokenName[YYWILDCARD]);
          }
#endif /* NDEBUG */
          return yy_action[j];
        }
      }
#endif /* YYWILDCARD */
    }
    return yy_default[stateno];
  }else{
    return yy_action[i];
  }
}

/*
** Find the appropriate action for a parser given the non-terminal
** look-ahead token iLookAhead.
**
** If the look-ahead token is YYNOCODE, then check to see if the action is
** independent of the look-ahead.  If it is, return the action, otherwise
** return YY_NO_ACTION.
*/
static int yy_find_reduce_action(
  int stateno,              /* Current state number */
  YYCODETYPE iLookAhead     /* The look-ahead token */
){
  int i;
  /* int stateno = pParser->yystack[pParser->yyidx].stateno; */
 
  if( stateno>YY_REDUCE_MAX ||
      (i = yy_reduce_ofst[stateno])==YY_REDUCE_USE_DFLT ){
    return yy_default[stateno];
  }
  if( iLookAhead==YYNOCODE ){
    return YY_NO_ACTION;
  }
  i += iLookAhead;
  if( i<0 || i>=YY_SZ_ACTTAB || yy_lookahead[i]!=iLookAhead ){
    return yy_default[stateno];
  }else{
    return yy_action[i];
  }
}

/*
** Perform a shift action.
*/
static void yy_shift(
  yyParser *yypParser,          /* The parser to be shifted */
  int yyNewState,               /* The new state to shift in */
  int yyMajor,                  /* The major token to shift in */
  YYMINORTYPE *yypMinor         /* Pointer ot the minor token to shift in */
){
  yyStackEntry *yytos;
  yypParser->yyidx++;
  if( yypParser->yyidx>=YYSTACKDEPTH ){
     PnParserARG_FETCH;
     yypParser->yyidx--;
#ifndef NDEBUG
     if( yyTraceFILE ){
       fprintf(yyTraceFILE,"%sStack Overflow!\n",yyTracePrompt);
     }
#endif
     while( yypParser->yyidx>=0 ) yy_pop_parser_stack(yypParser);
     /* Here code is inserted which will execute if the parser
     ** stack every overflows */
#line 81 "NSRC/DSPN-Tool/newparser.lyy"
 pExtraArgs->status = PS_FAILED; cerr << "Parser stack overflow!" << endl; 
#line 1035 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
     PnParserARG_STORE; /* Suppress warning about unused %extra_argument var */
     return;
  }
  yytos = &yypParser->yystack[yypParser->yyidx];
  yytos->stateno = yyNewState;
  yytos->major = yyMajor;
  yytos->minor = *yypMinor;
#ifndef NDEBUG
  if( yyTraceFILE && yypParser->yyidx>0 ){
    int i;
    fprintf(yyTraceFILE,"%sShift %d\n",yyTracePrompt,yyNewState);
    fprintf(yyTraceFILE,"%sStack:",yyTracePrompt);
    for(i=1; i<=yypParser->yyidx; i++)
      fprintf(yyTraceFILE," %s",yyTokenName[yypParser->yystack[i].major]);
    fprintf(yyTraceFILE,"\n");
  }
#endif
}

/* The following table contains information about every rule that
** is used during the reduce.
*/
static const struct {
  YYCODETYPE lhs;         /* Symbol on the left-hand side of the rule */
  unsigned char nrhs;     /* Number of right-hand side symbols in the rule */
} yyRuleInfo[] = {
  { 115, 4 },
  { 115, 4 },
  { 115, 4 },
  { 115, 4 },
  { 115, 4 },
  { 115, 3 },
  { 115, 3 },
  { 115, 3 },
  { 115, 3 },
  { 115, 1 },
  { 116, 0 },
  { 116, 1 },
  { 90, 1 },
  { 90, 1 },
  { 90, 1 },
  { 90, 1 },
  { 89, 1 },
  { 89, 1 },
  { 91, 2 },
  { 92, 1 },
  { 92, 1 },
  { 92, 3 },
  { 92, 3 },
  { 92, 3 },
  { 92, 3 },
  { 92, 3 },
  { 92, 6 },
  { 92, 2 },
  { 92, 4 },
  { 92, 8 },
  { 92, 8 },
  { 92, 3 },
  { 108, 1 },
  { 108, 1 },
  { 110, 1 },
  { 110, 1 },
  { 110, 1 },
  { 110, 1 },
  { 110, 1 },
  { 93, 1 },
  { 93, 1 },
  { 93, 1 },
  { 93, 3 },
  { 93, 3 },
  { 93, 3 },
  { 93, 3 },
  { 93, 3 },
  { 93, 6 },
  { 93, 2 },
  { 93, 4 },
  { 93, 4 },
  { 93, 6 },
  { 93, 8 },
  { 93, 8 },
  { 93, 3 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 109, 1 },
  { 111, 1 },
  { 111, 1 },
  { 111, 1 },
  { 111, 1 },
  { 111, 1 },
  { 111, 1 },
  { 111, 1 },
  { 111, 1 },
  { 94, 1 },
  { 94, 1 },
  { 94, 3 },
  { 94, 2 },
  { 94, 3 },
  { 94, 3 },
  { 94, 3 },
  { 107, 1 },
  { 107, 1 },
  { 107, 1 },
  { 107, 1 },
  { 107, 1 },
  { 107, 1 },
  { 88, 3 },
  { 88, 3 },
  { 88, 3 },
  { 88, 4 },
  { 88, 3 },
  { 88, 4 },
  { 88, 5 },
  { 88, 6 },
  { 88, 3 },
  { 88, 4 },
  { 88, 5 },
  { 88, 6 },
  { 95, 0 },
  { 95, 1 },
  { 95, 3 },
  { 96, 1 },
  { 96, 5 },
  { 96, 3 },
  { 96, 1 },
  { 114, 1 },
  { 114, 1 },
  { 113, 5 },
  { 113, 3 },
  { 113, 3 },
  { 113, 3 },
  { 113, 3 },
  { 113, 3 },
  { 112, 2 },
  { 112, 0 },
  { 97, 6 },
  { 104, 1 },
  { 104, 1 },
  { 104, 1 },
  { 105, 1 },
  { 105, 1 },
  { 105, 1 },
  { 98, 0 },
  { 98, 3 },
  { 98, 5 },
  { 99, 0 },
  { 99, 3 },
  { 99, 5 },
  { 100, 0 },
  { 100, 3 },
  { 100, 5 },
  { 106, 1 },
  { 106, 1 },
  { 101, 1 },
  { 101, 5 },
  { 103, 1 },
  { 103, 1 },
  { 102, 1 },
  { 102, 1 },
  { 102, 1 },
  { 102, 1 },
  { 102, 3 },
  { 102, 3 },
  { 102, 2 },
  { 102, 3 },
  { 102, 3 },
  { 102, 7 },
};

static void yy_accept(yyParser*);  /* Forward Declaration */

/*
** Perform a reduce action and the shift that must immediately
** follow the reduce.
*/
static void yy_reduce(
  yyParser *yypParser,         /* The parser */
  int yyruleno                 /* Number of the rule by which to reduce */
){
  int yygoto;                     /* The next state */
  int yyact;                      /* The next action */
  YYMINORTYPE yygotominor;        /* The LHS of the rule reduced */
  yyStackEntry *yymsp;            /* The top of the parser's stack */
  int yysize;                     /* Amount to pop the stack */
  PnParserARG_FETCH;
  yymsp = &yypParser->yystack[yypParser->yyidx];
#ifndef NDEBUG
  if( yyTraceFILE && yyruleno>=0 
        && yyruleno<(int)(sizeof(yyRuleName)/sizeof(yyRuleName[0])) ){
    fprintf(yyTraceFILE, "%sReduce [%s].\n", yyTracePrompt,
      yyRuleName[yyruleno]);
  }
#endif /* NDEBUG */

#ifndef NDEBUG
  /* Silence complaints from purify about yygotominor being uninitialized
  ** in some cases when it is copied into the stack after the following
  ** switch.  yygotominor is uninitialized when a rule reduces that does
  ** not set the value of its left-hand side nonterminal.  Leaving the
  ** value of the nonterminal uninitialized is utterly harmless as long
  ** as the value is never used.  So really the only thing this code
  ** accomplishes is to quieten purify.  
  */
  //memset(&yygotominor, 0, sizeof(yygotominor)); // Commented by ELVIO
#endif

  switch( yyruleno ){
  /* Beginning here are the reduction cases.  A typical example
  ** follows:
  **   case 0:
  **  #line <lineno> <grammarfile>
  **     { ... }           // User supplied code
  **  #line <lineno> <thisfile>
  **     break;
  */
      case 0:
#line 154 "NSRC/DSPN-Tool/newparser.lyy"
{ Accept(yymsp[-2].minor.yy92); }
#line 1262 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 1:
      case 4:
#line 155 "NSRC/DSPN-Tool/newparser.lyy"
{ Accept(yymsp[-2].minor.yy179); }
#line 1268 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 2:
#line 156 "NSRC/DSPN-Tool/newparser.lyy"
{ Accept(yymsp[-2].minor.yy11); }
#line 1273 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 3:
#line 157 "NSRC/DSPN-Tool/newparser.lyy"
{ Accept(yymsp[-2].minor.yy116); }
#line 1278 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 5:
#line 159 "NSRC/DSPN-Tool/newparser.lyy"
{ Accept(yymsp[-1].minor.yy153); }
#line 1283 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 6:
      case 8:
#line 160 "NSRC/DSPN-Tool/newparser.lyy"
{ Accept(yymsp[-1].minor.yy28); }
#line 1289 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 7:
#line 161 "NSRC/DSPN-Tool/newparser.lyy"
{ Accept(yymsp[-1].minor.yy19); }
#line 1294 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 9:
#line 163 "NSRC/DSPN-Tool/newparser.lyy"
{ }
#line 1299 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 12:
#line 170 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy133 = make_shared<ConstValExpr<double>>(yymsp[0].minor.yy0->real);}
#line 1304 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 13:
#line 171 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy133 = make_shared<ConstValExpr<double>>(yymsp[0].minor.yy0->integer);}
#line 1309 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 14:
#line 172 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy133 = FindRatePar(yymsp[0].minor.yy0->text.c_str(), GetPN()); }
#line 1314 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 15:
#line 173 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy133 = make_shared<CastExpr<double, int>>(FindMarkPar(yymsp[0].minor.yy0->text.c_str(), GetPN())); }
#line 1319 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 16:
#line 175 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy161 = make_shared<ConstValExpr<int>>(yymsp[0].minor.yy0->integer); }
#line 1324 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 17:
#line 176 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy161 = FindMarkPar(yymsp[0].minor.yy0->text.c_str(), GetPN()); }
#line 1329 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 18:
#line 178 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = make_shared<PlaceMarkingMdepExpr<int>>(yymsp[0].minor.yy0->text.c_str(), FindPlace(yymsp[0].minor.yy0->text.c_str(), GetPN())); }
#line 1334 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 19:
#line 180 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = make_shared<ExprMdepExpr<int>>(yymsp[0].minor.yy161); }
#line 1339 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 20:
#line 181 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = yymsp[0].minor.yy11; }
#line 1344 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 21:
      case 31:
#line 182 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = yymsp[-1].minor.yy11; }
#line 1350 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 22:
#line 183 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = make_shared<BinaryMdepExpr<int,int,plus_binary_op<int>>>(yymsp[-2].minor.yy11, yymsp[0].minor.yy11); }
#line 1355 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 23:
#line 184 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = make_shared<BinaryMdepExpr<int,int,minus_binary_op<int>>>(yymsp[-2].minor.yy11, yymsp[0].minor.yy11); }
#line 1360 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 24:
#line 185 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = make_shared<BinaryMdepExpr<int,int,mult_binary_op<int>>>(yymsp[-2].minor.yy11, yymsp[0].minor.yy11); }
#line 1365 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 25:
#line 186 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = make_shared<BinaryMdepExpr<int,int,div_binary_op<int>>>(yymsp[-2].minor.yy11, yymsp[0].minor.yy11); }
#line 1370 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 26:
#line 187 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = make_shared<BinaryMdepExpr<int,int,int_binary_op>>(yymsp[-3].minor.yy11, yymsp[-1].minor.yy11, int_binary_op(yymsp[-5].minor.yy79)); }
#line 1375 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 27:
#line 188 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = make_shared<UnaryMdepExpr<int,int,neg_unary_op<int>>>(yymsp[0].minor.yy11); }
#line 1380 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 28:
#line 189 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy11 = make_shared<UnaryMdepExpr<int,int,int_unary_op>>(yymsp[-1].minor.yy11, int_unary_op(yymsp[-3].minor.yy139)); }
#line 1385 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 29:
#line 190 "NSRC/DSPN-Tool/newparser.lyy"
{
/**/											  		  yygotominor.yy11 = make_shared<IfThenElseMdepExpr<int>>(yymsp[-5].minor.yy116, yymsp[-3].minor.yy11, yymsp[-1].minor.yy11); }
#line 1391 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 30:
#line 192 "NSRC/DSPN-Tool/newparser.lyy"
{
/**/											 		  yygotominor.yy11 = make_shared<IfThenElseMdepExpr<int>>(yymsp[-6].minor.yy116, yymsp[-4].minor.yy11, yymsp[-1].minor.yy11); }
#line 1397 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 32:
#line 196 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_ABS; }
#line 1402 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 33:
#line 197 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_FACTORIAL; }
#line 1407 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 34:
#line 199 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_MIN; }
#line 1412 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 35:
#line 200 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_MAX; }
#line 1417 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 36:
#line 201 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_MOD; }
#line 1422 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 37:
#line 202 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_BINOMIAL; }
#line 1427 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 38:
#line 203 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_FRACT; }
#line 1432 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 39:
#line 205 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<ExprMdepExpr<double>>(yymsp[0].minor.yy133); }
#line 1437 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 40:
#line 206 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<CastMdepExpr<double,int>>(yymsp[0].minor.yy11); }
#line 1442 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 41:
#line 207 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = PdfX; }
#line 1447 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 42:
      case 54:
#line 208 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = yymsp[-1].minor.yy179; }
#line 1453 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 43:
#line 209 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<BinaryMdepExpr<double,double,plus_binary_op<double>>>(yymsp[-2].minor.yy179, yymsp[0].minor.yy179); }
#line 1458 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 44:
#line 210 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<BinaryMdepExpr<double,double,minus_binary_op<double>>>(yymsp[-2].minor.yy179, yymsp[0].minor.yy179); }
#line 1463 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 45:
#line 211 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<BinaryMdepExpr<double,double,mult_binary_op<double>>>(yymsp[-2].minor.yy179, yymsp[0].minor.yy179); }
#line 1468 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 46:
#line 212 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<BinaryMdepExpr<double,double,div_binary_op<double>>>(yymsp[-2].minor.yy179, yymsp[0].minor.yy179); }
#line 1473 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 47:
#line 213 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<BinaryMdepExpr<double,double,double_binary_op>>(yymsp[-3].minor.yy179, yymsp[-1].minor.yy179, double_binary_op(yymsp[-5].minor.yy79)); }
#line 1478 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 48:
#line 214 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<UnaryMdepExpr<double,double,neg_unary_op<double>>>(yymsp[0].minor.yy179); }
#line 1483 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 49:
#line 215 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<UnaryMdepExpr<double,double,double_unary_op>>(yymsp[-1].minor.yy179, double_unary_op(yymsp[-3].minor.yy139)); }
#line 1488 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 50:
#line 216 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<UnaryMdepExpr<double,double,log_unary_op>>(yymsp[-1].minor.yy179); }
#line 1493 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 51:
#line 217 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy179 = make_shared<BinaryMdepExpr<double,double,log_binary_op>>(yymsp[-3].minor.yy179, yymsp[-1].minor.yy179); }
#line 1498 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 52:
#line 218 "NSRC/DSPN-Tool/newparser.lyy"
{
/**/											  			  yygotominor.yy179 = make_shared<IfThenElseMdepExpr<double>>(yymsp[-5].minor.yy116, yymsp[-3].minor.yy179, yymsp[-1].minor.yy179); }
#line 1504 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 53:
#line 220 "NSRC/DSPN-Tool/newparser.lyy"
{
/**/											  			  yygotominor.yy179 = make_shared<IfThenElseMdepExpr<double>>(yymsp[-6].minor.yy116, yymsp[-4].minor.yy179, yymsp[-1].minor.yy179); }
#line 1510 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 55:
#line 224 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = yymsp[0].minor.yy139; }
#line 1515 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 56:
#line 225 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_SIN; }
#line 1520 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 57:
#line 226 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_COS; }
#line 1525 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 58:
#line 227 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_TAN; }
#line 1530 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 59:
#line 228 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_ARCSIN; }
#line 1535 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 60:
#line 229 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_ARCCOS; }
#line 1540 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 61:
#line 230 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_ARCTAN; }
#line 1545 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 62:
#line 231 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_EXP; }
#line 1550 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 63:
#line 232 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_SQRT; }
#line 1555 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 64:
#line 233 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_CEIL; }
#line 1560 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 65:
#line 234 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_FLOOR; }
#line 1565 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 66:
#line 235 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy139 = UF_DIRACDELTA; }
#line 1570 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 67:
#line 237 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = yymsp[0].minor.yy79; }
#line 1575 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 68:
#line 238 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_POW; }
#line 1580 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 69:
#line 239 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_RECT; }
#line 1585 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 70:
#line 240 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_UNIFORM; }
#line 1590 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 71:
#line 241 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_TRIANGULAR; }
#line 1595 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 72:
#line 242 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_ERLANG; }
#line 1600 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 73:
#line 243 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_TRUNCATED_EXP; }
#line 1605 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 74:
#line 244 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy79 = BF_PARETO; }
#line 1610 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 75:
#line 248 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy116 = TrueExpr(); }
#line 1615 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 76:
#line 249 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy116 = FalseExpr(); }
#line 1620 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 77:
#line 250 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy116 = make_shared<BinaryMdepExpr<bool,int,bool_binary_op<int>>>(yymsp[-2].minor.yy11, yymsp[0].minor.yy11, bool_binary_op<int>(yymsp[-1].minor.yy62)); }
#line 1625 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 78:
#line 251 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy116 = make_shared<UnaryMdepExpr<bool,bool,not_unary_op<bool>>>(yymsp[0].minor.yy116); }
#line 1630 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 79:
#line 252 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy116 = yymsp[-1].minor.yy116; }
#line 1635 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 80:
#line 253 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy116 = make_shared<BinaryMdepExpr<bool,bool,and_binary_op>>(yymsp[-2].minor.yy116, yymsp[0].minor.yy116); }
#line 1640 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 81:
#line 254 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy116 = make_shared<BinaryMdepExpr<bool,bool,or_binary_op>>(yymsp[-2].minor.yy116, yymsp[0].minor.yy116); }
#line 1645 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 82:
#line 256 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy62 = CMPOP_EQ; }
#line 1650 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 83:
#line 257 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy62 = CMPOP_NOT_EQ; }
#line 1655 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 84:
#line 258 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy62 = CMPOP_GREATER; }
#line 1660 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 85:
#line 259 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy62 = CMPOP_LESS; }
#line 1665 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 86:
#line 260 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy62 = CMPOP_GREATER_EQ; }
#line 1670 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 87:
#line 261 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy62 = CMPOP_LESS_EQ; }
#line 1675 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 88:
#line 265 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_Binary>(yymsp[-2].minor.yy92, '+', yymsp[0].minor.yy92); }
#line 1680 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 89:
#line 266 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_Binary>(yymsp[-2].minor.yy92, '-', yymsp[0].minor.yy92); }
#line 1685 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 90:
#line 267 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_P>(yymsp[-1].minor.yy116); }
#line 1690 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 91:
#line 268 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_Binary>(make_shared<MeasureExpr_Real>(yymsp[-3].minor.yy133), '*', make_shared<MeasureExpr_P>(yymsp[-1].minor.yy116)); }
#line 1695 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 92:
#line 269 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_E>(yymsp[-1].minor.yy11, TrueExpr()); }
#line 1700 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 93:
#line 270 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_Binary>(make_shared<MeasureExpr_Real>(yymsp[-3].minor.yy133), '*', make_shared<MeasureExpr_E>(yymsp[-1].minor.yy11, TrueExpr())); }
#line 1705 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 94:
#line 271 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_E>(yymsp[-3].minor.yy11, yymsp[-1].minor.yy116); }
#line 1710 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 95:
#line 272 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_Binary>(make_shared<MeasureExpr_Real>(yymsp[-5].minor.yy133), '*', make_shared<MeasureExpr_E>(yymsp[-3].minor.yy11, yymsp[-1].minor.yy116)); }
#line 1715 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 96:
#line 273 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_X>(yymsp[-1].minor.yy0->text.c_str(), TrueExpr()); }
#line 1720 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 97:
#line 274 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_Binary>(make_shared<MeasureExpr_Real>(yymsp[-3].minor.yy133), '*', make_shared<MeasureExpr_X>(yymsp[-1].minor.yy0->text.c_str(), TrueExpr())); }
#line 1725 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 98:
#line 275 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_X>(yymsp[-3].minor.yy0->text.c_str(), yymsp[-1].minor.yy116); }
#line 1730 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 99:
#line 276 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy92 = make_shared<MeasureExpr_Binary>(make_shared<MeasureExpr_Real>(yymsp[-5].minor.yy133), '*', make_shared<MeasureExpr_X>(yymsp[-3].minor.yy0->text.c_str(), yymsp[-1].minor.yy116)); }
#line 1735 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 100:
#line 280 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy153 = make_shared<DtaEdge>(); }
#line 1740 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 101:
#line 281 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy153 = make_shared<DtaEdge>(); yygotominor.yy153->actset.actInds.push_back(FindActionInd(yymsp[0].minor.yy0->text.c_str(), GetDTA())); }
#line 1745 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 102:
#line 282 "NSRC/DSPN-Tool/newparser.lyy"
{ yymsp[-2].minor.yy153->actset.actInds.push_back(FindActionInd(yymsp[0].minor.yy0->text.c_str(), GetDTA())); yygotominor.yy153 = yymsp[-2].minor.yy153; }
#line 1750 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 103:
#line 284 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy153 = make_shared<DtaEdge>(); yygotominor.yy153->actset.type = AT_REJECTED_ACTIONS; }
#line 1755 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 104:
#line 285 "NSRC/DSPN-Tool/newparser.lyy"
{ yymsp[-1].minor.yy153->actset.type = AT_REJECTED_ACTIONS; yygotominor.yy153 = yymsp[-1].minor.yy153; }
#line 1760 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 105:
#line 286 "NSRC/DSPN-Tool/newparser.lyy"
{ yymsp[-1].minor.yy153->actset.type = AT_ACCEPTED_ACTIONS; yygotominor.yy153 = yymsp[-1].minor.yy153; }
#line 1765 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 106:
#line 287 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy153 = make_shared<DtaEdge>(); yygotominor.yy153->actset.type = AT_BOUNDARY; }
#line 1770 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 107:
#line 289 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy17 = FindClockValue(yymsp[0].minor.yy0->text.c_str(), GetDTA()); }
#line 1775 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 108:
#line 290 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy17 = FindClockValue(to_string(yymsp[0].minor.yy0->integer).c_str(), GetDTA()); }
#line 1780 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 109:
#line 292 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy81 = make_pair(yymsp[-4].minor.yy17, yymsp[0].minor.yy17); }
#line 1785 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 110:
#line 293 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy81 = make_pair(FindClockValue(CLOCK_VALUE_NAME_0, GetDTA()), yymsp[0].minor.yy17); }
#line 1790 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 111:
#line 294 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy81 = make_pair(yymsp[-2].minor.yy17, FindClockValue(CLOCK_VALUE_NAME_INFINITY, GetDTA())); }
#line 1795 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 112:
#line 295 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy81 = make_pair(yymsp[0].minor.yy17, FindClockValue(CLOCK_VALUE_NAME_INFINITY, GetDTA())); }
#line 1800 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 113:
#line 296 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy81 = make_pair(FindClockValue(CLOCK_VALUE_NAME_0, GetDTA()), yymsp[-2].minor.yy17); }
#line 1805 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 114:
#line 297 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy81 = make_pair(yymsp[0].minor.yy17, yymsp[0].minor.yy17); }
#line 1810 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 115:
#line 299 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy65 = true; }
#line 1815 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 116:
#line 300 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy65 = false; }
#line 1820 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 117:
#line 302 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy153 = yymsp[-2].minor.yy153; yygotominor.yy153->alpha = yymsp[-4].minor.yy81.first; yygotominor.yy153->beta = yymsp[-4].minor.yy81.second; yygotominor.yy153->reset = yymsp[-1].minor.yy65; }
#line 1825 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 118:
      case 121:
      case 133:
#line 306 "NSRC/DSPN-Tool/newparser.lyy"
{ std::swap(yygotominor.yy71, yymsp[0].minor.yy71); }
#line 1832 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 119:
      case 120:
      case 122:
      case 123:
      case 134:
      case 137:
      case 138:
#line 307 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy71 = yymsp[0].minor.yy0->text; }
#line 1843 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 124:
#line 314 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy156.clear(); }
#line 1848 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 125:
#line 315 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy156.clear(); yygotominor.yy156.emplace_back(make_pair(yymsp[-2].minor.yy71,yymsp[0].minor.yy133)); }
#line 1853 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 126:
#line 316 "NSRC/DSPN-Tool/newparser.lyy"
{ yymsp[-4].minor.yy156.emplace_back(make_pair(yymsp[-2].minor.yy71,yymsp[0].minor.yy133)); std::swap(yygotominor.yy156, yymsp[-4].minor.yy156); }
#line 1858 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 127:
#line 318 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy12.clear(); }
#line 1863 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 128:
#line 319 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy12.clear(); yygotominor.yy12.push_back(make_pair(yymsp[-2].minor.yy71,BoundAction(yymsp[0].minor.yy0->text, FindTransition(yymsp[0].minor.yy0->text.c_str(), GetPN())))); }
#line 1868 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 129:
#line 320 "NSRC/DSPN-Tool/newparser.lyy"
{ yymsp[-4].minor.yy12.push_back(make_pair(yymsp[-2].minor.yy71,BoundAction(yymsp[0].minor.yy0->text, FindTransition(yymsp[0].minor.yy0->text.c_str(), GetPN())))); std::swap(yygotominor.yy12, yymsp[-4].minor.yy12); }
#line 1873 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 130:
#line 322 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy45.clear(); }
#line 1878 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 131:
#line 323 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy45.clear(); yygotominor.yy45.emplace_back(make_pair(yymsp[-2].minor.yy71, yymsp[0].minor.yy28)); }
#line 1883 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 132:
#line 324 "NSRC/DSPN-Tool/newparser.lyy"
{ yymsp[-4].minor.yy45.emplace_back(make_pair(yymsp[-2].minor.yy71, yymsp[0].minor.yy28)); std::swap(yygotominor.yy45, yymsp[-4].minor.yy45); }
#line 1888 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 135:
#line 329 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy19 = make_shared<DtaBinding>(); std::swap(yygotominor.yy19->clock_values, yymsp[0].minor.yy156); }
#line 1893 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 136:
#line 330 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy19 = make_shared<DtaBinding>(); std::swap(yygotominor.yy19->clock_values, yymsp[-4].minor.yy156); std::swap(yygotominor.yy19->trn_actions, yymsp[-2].minor.yy12); std::swap(yygotominor.yy19->ap_exprs, yymsp[0].minor.yy45); }
#line 1898 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 139:
#line 337 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy28 = make_shared<AtomicPropExpr_Const>(true); }
#line 1903 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 140:
#line 338 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy28 = make_shared<AtomicPropExpr_Const>(false); }
#line 1908 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 141:
#line 339 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy28 = FindAtomicProposition(yymsp[0].minor.yy0->text.c_str(), GetDTA()); }
#line 1913 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 142:
#line 340 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy28 = make_shared<AtomicPropExpr_MdepExpr>(PlaceNotZero(yymsp[0].minor.yy0->text.c_str(), GetPN())); }
#line 1918 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 143:
#line 342 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy28 = make_shared<AtomicPropExpr_MdepExpr>(make_shared<BinaryMdepExpr<bool,int,bool_binary_op<int>>>(yymsp[-2].minor.yy11, yymsp[0].minor.yy11, bool_binary_op<int>(yymsp[-1].minor.yy62))); }
#line 1923 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 144:
#line 343 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy28 = yymsp[-1].minor.yy28; }
#line 1928 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 145:
#line 344 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy28 = make_shared<AtomicPropExpr_NOT>(yymsp[0].minor.yy28); }
#line 1933 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 146:
#line 345 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy28 = make_shared<AtomicPropExpr_BOP>(yymsp[-2].minor.yy28, yymsp[0].minor.yy28, BBF_AND); }
#line 1938 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 147:
#line 346 "NSRC/DSPN-Tool/newparser.lyy"
{ yygotominor.yy28 = make_shared<AtomicPropExpr_BOP>(yymsp[-2].minor.yy28, yymsp[0].minor.yy28, BBF_OR); }
#line 1943 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
      case 148:
#line 348 "NSRC/DSPN-Tool/newparser.lyy"
{ 
/**/ 														  yygotominor.yy28 = make_shared<CsltaProbExpr>(ProbabilityConstr(yymsp[-5].minor.yy62, yymsp[-4].minor.yy133), yymsp[-3].minor.yy71.c_str(), yymsp[-1].minor.yy19); }
#line 1949 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
        break;
  };
  yygoto = yyRuleInfo[yyruleno].lhs;
  yysize = yyRuleInfo[yyruleno].nrhs;
  yypParser->yyidx -= yysize;
  yyact = yy_find_reduce_action(yymsp[-yysize].stateno,yygoto);
  if( yyact < YYNSTATE ){
#ifdef NDEBUG
    /* If we are not debugging and the reduce action popped at least
    ** one element off the stack, then we can push the new element back
    ** onto the stack here, and skip the stack overflow test in yy_shift().
    ** That gives a significant speed improvement. */
    if( yysize ){
      yypParser->yyidx++;
      yymsp -= yysize-1;
      yymsp->stateno = yyact;
      yymsp->major = yygoto;
      yymsp->minor = yygotominor;
    }else
#endif
    {
      yy_shift(yypParser,yyact,yygoto,&yygotominor);
    }
  }else if( yyact == YYNSTATE + YYNRULE + 1 ){
    yy_accept(yypParser);
  }
}

/*
** The following code executes when the parse fails
*/
static void yy_parse_failed(
  yyParser *yypParser           /* The parser */
){
  PnParserARG_FETCH;
#ifndef NDEBUG
  if( yyTraceFILE ){
    fprintf(yyTraceFILE,"%sFail!\n",yyTracePrompt);
  }
#endif
  while( yypParser->yyidx>=0 ) yy_pop_parser_stack(yypParser);
  /* Here code is inserted which will be executed whenever the
  ** parser fails */
#line 79 "NSRC/DSPN-Tool/newparser.lyy"
 pExtraArgs->status = PS_FAILED; 
#line 1996 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
  PnParserARG_STORE; /* Suppress warning about unused %extra_argument variable */
}

/*
** The following code executes when a syntax error first occurs.
*/
static void yy_syntax_error(
  yyParser *yypParser,           /* The parser */
  int yymajor,                   /* The major type of the error token */
  YYMINORTYPE yyminor            /* The minor type of the error token */
){
  PnParserARG_FETCH;
#define TOKEN (yyminor.yy0)
  PnParserARG_STORE; /* Suppress warning about unused %extra_argument variable */
}

/*
** The following is executed when the parser accepts
*/
static void yy_accept(
  yyParser *yypParser           /* The parser */
){
  PnParserARG_FETCH;
#ifndef NDEBUG
  if( yyTraceFILE ){
    fprintf(yyTraceFILE,"%sAccept!\n",yyTracePrompt);
  }
#endif
  while( yypParser->yyidx>=0 ) yy_pop_parser_stack(yypParser);
  /* Here code is inserted which will be executed whenever the
  ** parser accepts */
#line 77 "NSRC/DSPN-Tool/newparser.lyy"
 pExtraArgs->status = PS_ACCEPTED; 
#line 2031 "objects/DSPN-Tool/NSRC/DSPN-Tool/newparser.lyy.cpp"
  PnParserARG_STORE; /* Suppress warning about unused %extra_argument variable */
}

/* The main parser program.
** The first argument is a pointer to a structure obtained from
** "PnParserAlloc" which describes the current state of the parser.
** The second argument is the major token number.  The third is
** the minor token.  The fourth optional argument is whatever the
** user wants (and specified in the grammar) and is available for
** use by the action routines.
**
** Inputs:
** <ul>
** <li> A pointer to the parser (an opaque structure.)
** <li> The major token number.
** <li> The minor token number.
** <li> An option argument of a grammar-specified type.
** </ul>
**
** Outputs:
** None.
*/
void PnParser(
  void *yyp,                   /* The parser */
  int yymajor,                 /* The major token code number */
  PnParserTOKENTYPE yyminor       /* The value for the token */
  PnParserARG_PDECL               /* Optional %extra_argument parameter */
){
  YYMINORTYPE yyminorunion;
  int yyact;            /* The parser action. */
  int yyendofinput;     /* True if we are at the end of input */
  int yyerrorhit = 0;   /* True if yymajor has invoked an error */
  yyParser *yypParser;  /* The parser */

  /* (re)initialize the parser, if necessary */
  yypParser = (yyParser*)yyp;
  if( yypParser->yyidx<0 ){
    /* if( yymajor==0 ) return; // not sure why this was here... */
    yypParser->yyidx = 0;
    yypParser->yyerrcnt = -1;
    yypParser->yystack[0].stateno = 0;
    yypParser->yystack[0].major = 0;
  }
  yyminorunion.yy0 = yyminor;
  yyendofinput = (yymajor==0);
  PnParserARG_STORE;

#ifndef NDEBUG
  if( yyTraceFILE ){
    fprintf(yyTraceFILE,"%sInput %s\n",yyTracePrompt,yyTokenName[yymajor]);
  }
#endif

  do{
    yyact = yy_find_shift_action(yypParser,yymajor);
    if( yyact<YYNSTATE ){
      yy_shift(yypParser,yyact,yymajor,&yyminorunion);
      yypParser->yyerrcnt--;
      if( yyendofinput && yypParser->yyidx>=0 ){
        yymajor = 0;
      }else{
        yymajor = YYNOCODE;
      }
    }else if( yyact < YYNSTATE + YYNRULE ){
      yy_reduce(yypParser,yyact-YYNSTATE);
    }else if( yyact == YY_ERROR_ACTION ){
      int yymx;
#ifndef NDEBUG
      if( yyTraceFILE ){
        fprintf(yyTraceFILE,"%sSyntax Error!\n",yyTracePrompt);
      }
#endif
#ifdef YYERRORSYMBOL
      /* A syntax error has occurred.
      ** The response to an error depends upon whether or not the
      ** grammar defines an error token "ERROR".  
      **
      ** This is what we do if the grammar does define ERROR:
      **
      **  * Call the %syntax_error function.
      **
      **  * Begin popping the stack until we enter a state where
      **    it is legal to shift the error symbol, then shift
      **    the error symbol.
      **
      **  * Set the error count to three.
      **
      **  * Begin accepting and shifting new tokens.  No new error
      **    processing will occur until three tokens have been
      **    shifted successfully.
      **
      */
      if( yypParser->yyerrcnt<0 ){
        yy_syntax_error(yypParser,yymajor,yyminorunion);
      }
      yymx = yypParser->yystack[yypParser->yyidx].major;
      if( yymx==YYERRORSYMBOL || yyerrorhit ){
#ifndef NDEBUG
        if( yyTraceFILE ){
          fprintf(yyTraceFILE,"%sDiscard input token %s\n",
             yyTracePrompt,yyTokenName[yymajor]);
        }
#endif
        yy_destructor(yymajor,&yyminorunion);
        yymajor = YYNOCODE;
      }else{
         while(
          yypParser->yyidx >= 0 &&
          yymx != YYERRORSYMBOL &&
          (yyact = yy_find_reduce_action(
                        yypParser->yystack[yypParser->yyidx].stateno,
                        YYERRORSYMBOL)) >= YYNSTATE
        ){
          yy_pop_parser_stack(yypParser);
        }
        if( yypParser->yyidx < 0 || yymajor==0 ){
          yy_destructor(yymajor,&yyminorunion);
          yy_parse_failed(yypParser);
          yymajor = YYNOCODE;
        }else if( yymx!=YYERRORSYMBOL ){
          YYMINORTYPE u2;
          u2.YYERRSYMDT = 0;
          yy_shift(yypParser,yyact,YYERRORSYMBOL,&u2);
        }
      }
      yypParser->yyerrcnt = 3;
      yyerrorhit = 1;
#else  /* YYERRORSYMBOL is not defined */
      /* This is what we do if the grammar does not define ERROR:
      **
      **  * Report an error message, and throw away the input token.
      **
      **  * If the input token is $, then fail the parse.
      **
      ** As before, subsequent error messages are suppressed until
      ** three input tokens have been successfully shifted.
      */
      if( yypParser->yyerrcnt<=0 ){
        yy_syntax_error(yypParser,yymajor,yyminorunion);
      }
      yypParser->yyerrcnt = 3;
      yy_destructor(yymajor,&yyminorunion);
      if( yyendofinput ){
        yy_parse_failed(yypParser);
      }
      yymajor = YYNOCODE;
#endif
    }else{
      yy_accept(yypParser);
      yymajor = YYNOCODE;
    }
  }while( yymajor!=YYNOCODE && yypParser->yyidx>=0 );
  return;
}
