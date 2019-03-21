
#ifndef yyparse
#define yyparse    mmparse
#endif /* yyparse */

#ifndef yylex
#define yylex      mmlex
#endif /* yylex */

#ifndef yyerror
#define yyerror    mmerror
#endif /* yyerror */

#ifndef yychar
#define yychar     mmchar
#endif /* yychar */

#ifndef yyval
#define yyval      mmval
#endif /* yyval */

#ifndef yylval
#define yylval     mmlval
#endif /* yylval */

#ifndef yydebug
#define yydebug    mmdebug
#endif /* yydebug */

#ifndef yynerrs
#define yynerrs    mmnerrs
#endif /* yynerrs */

#ifndef yyerrflag
#define yyerrflag  mmerrflag
#endif /* yyerrflag */

#ifndef yylhs
#define yylhs      mmlhs
#endif /* yylhs */

#ifndef yylen
#define yylen      mmlen
#endif /* yylen */

#ifndef yydefred
#define yydefred   mmdefred
#endif /* yydefred */

#ifndef yydgoto
#define yydgoto    mmdgoto
#endif /* yydgoto */

#ifndef yysindex
#define yysindex   mmsindex
#endif /* yysindex */

#ifndef yyrindex
#define yyrindex   mmrindex
#endif /* yyrindex */

#ifndef yygindex
#define yygindex   mmgindex
#endif /* yygindex */

#ifndef yytable
#define yytable    mmtable
#endif /* yytable */

#ifndef yycheck
#define yycheck    mmcheck
#endif /* yycheck */

#ifndef yyname
#define yyname     mmname
#endif /* yyname */

#ifndef yyrule
#define yyrule     mmrule
#endif /* yyrule */
#define YYPREFIX "mm"

#define YYPURE 0

#line 2 "WN/SOURCE/RGMEDD2/CTLParser.yy"
/*#include "../../INCLUDE/var_ext.h"*/
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
#include <fstream>
#include "CTLLexer.ll.h"
#include "CTL.h"
#include "rgmedd2.h"
#define PERFORMANCECTL 1
#define PERFORMANCE 1

using namespace std;
using namespace ctlmdd;

extern const char* MCC_TECHNIQUES;
CTLMDD *ctl = CTLMDD::getInstance();
static BaseFormula *ris = NULL;
/* Is the last parsed line in the CTL file a comment? Or is it a query?*/
static bool parsed_comment = false;
/* Last parsed comment in the CTL file*/
static std::string property_name; 
RSRG *rsrg;
static istringstream *Ibuffer;
static FlexLexer* lexer;
/* tempi di clock quando inizia la generazione dell'MDD della formula, */
/* quando finisce e dopo aver controllato la presenza dello stato iniziale nella formula*/
static clock_t startMDD, endMDD, endMDD2; 
/* From the command line*/
extern bool print_CTL_counterexamples;


void yyerror(const char *str) {
  cout<<"Parse error at \"" << lexer->YYText() << "\": " << str << "." << endl;
}
 
int yylex(void){
    int i = lexer->mmlex(); 
    return i;
}
extern int yyparse(void);
extern int output_flag;

/* reverse the sign of an inequality (i.e. a < b -> b > a)*/
inline Inequality::op_type reverse_ineq_op(Inequality::op_type inop) {
    switch (inop) {
        case Inequality::IOP_MIN:       return Inequality::IOP_MAJ;
        case Inequality::IOP_MAJ:       return Inequality::IOP_MIN;
        case Inequality::IOP_MINEQ:     return Inequality::IOP_MAJEQ;
        case Inequality::IOP_MAJEQ:     return Inequality::IOP_MINEQ;
        default:                        return inop; /* [not] equal*/
    }
}

#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 59 "WN/SOURCE/RGMEDD2/CTLParser.yy"
typedef union{
  float num;
  char *pVar;
  int place_id;
  int mpar_id;
  int transition_id;
  PlaceTerm *term;
  StateFormula *state_formula;
  IntFormula *int_formula;
  Inequality::op_type inop;
  std::vector<int>* place_id_list;
  std::vector<int>* transition_id_list;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#ifndef YYDEBUG
#define YYDEBUG 0
#endif

#if YYDEBUG
extern	int      yydebug;
#endif

extern	int      yyerrflag;
extern	int      yychar;
extern	YYSTYPE  yyval;
extern	YYSTYPE  yylval;
extern	int      yynerrs;
