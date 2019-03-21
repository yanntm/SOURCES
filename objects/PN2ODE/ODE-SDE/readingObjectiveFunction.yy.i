
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

#line 2 "ODE-SDE/readingObjectiveFunction.yy"

#include <stdio.h>
#include <string.h>
#include <map>
#include <sstream>
#include <fstream>
#include "ObjectiveFunction.hpp"
#include <FlexLexer.h>
#include <exception>

FlexLexer* lexer;

std::map<std::string,int> Place2Int;

std::string ObjFuncParsed;
std::string array_name;

using namespace std;
using namespace tree_def;

tree* t;

extern "C" {
int yyparse(void);

}



void yyerror(const char *str){
    fprintf(stderr,"Error: %s  at line: %d, last word parsed:%s  \n",str,lexer->lineno()-1,lexer->YYText());
  }



int yyFlexLexer::yywrap()
{
        return 1;


}


int yylex(void){
    int i = lexer->yylex();
    return i;
}


string parseObjectiveFunction(const std::string& of_name, const std::string& a_name)
{

array_name = a_name;
ObjFuncParsed = "**** ERROR - OBJECTIVE FUNCTION HAS NOT BEEN PARSED CORRECTLY *****";
std::stringstream Ibuffer;
 try{
     std::ifstream file(of_name.c_str());
     if(!file){
      cerr << "\n*****Error opening input file "<<of_name<<" *****\n" << endl;
      exit(EXIT_FAILURE);
     }
     Ibuffer<<file.rdbuf();
     lexer = new yyFlexLexer(&Ibuffer);

     if(Ibuffer.str()[Ibuffer.str().size()-1]!='\n'){
        Ibuffer << "\n";
     }

     yyparse();
    }
    catch (exception e){
      cerr << "\n*****"<<e.what()<<endl<< endl;
      exit(EXIT_FAILURE);
    }



return ObjFuncParsed;

}


#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 87 "ODE-SDE/readingObjectiveFunction.yy"
typedef union{
  long double num;
  char *pVar;
  class node* Node;
  class tree* Tree;
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
