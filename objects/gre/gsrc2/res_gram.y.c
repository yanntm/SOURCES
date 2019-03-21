/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20180609

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "gsrc2/res_gram.y"

int int_val;
int yylex();

char res_name[100];

extern int checkplace (char *str);
extern int checkmpar (char *str);
extern int checkrpar (char *str);

#define EQUAL_TO 1
#define NOTEQUAL_TO 2
#define GREATER_EQUAL 3
#define GREATER_THAN 4
#define LESS_EQUAL 5
#define LESS_THAN 6

#define SUM 11
#define SUB 12
#define MUL 13
#define DIV 14

#define L_AND 22
#define L_OR 23
#line 46 "objects/gre/gsrc2/res_gram.y.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

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

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define RES_NAME 257
#define COLON 258
#define END_RES 259
#define SEMICOLON 260
#define SUM_OP 261
#define MULT_OP 262
#define SS_PROB 263
#define TR_PROB 264
#define SS_MEAN 265
#define TR_MEAN 266
#define C_BRACE 267
#define OPEN 268
#define CLOSE 269
#define COND_SIGN 270
#define NOT_OP 271
#define LOGIC_OP 272
#define PLACE_NAME 273
#define COMP_OP 274
#define INTEGER 275
#define MARK_PAR 276
#define RATE_PAR 277
#define EXP 278
#define POINT 279
#define ERROR 280
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    5,    2,    7,    4,    4,    9,    6,
   10,    6,    6,   12,    8,   13,    8,   14,    8,   15,
    8,    8,    8,    8,   17,    8,   18,   11,   19,   11,
   20,   11,   11,   23,   21,   22,   22,   22,   16,   16,
   16,   16,   24,   24,   27,   25,   28,   25,   26,   26,
    3,
};
static const YYINT yylen[] = {                            2,
    2,    2,    1,    0,    7,    0,    4,    1,    0,    4,
    0,    3,    1,    0,    4,    0,    4,    0,    6,    0,
    6,    3,    3,    1,    0,    4,    0,    4,    0,    3,
    0,    4,    1,    0,    4,    1,    1,    1,    1,    1,
    1,    1,    2,    1,    0,    4,    0,    3,    1,    0,
    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    3,    0,    0,    1,    2,    0,    0,
   51,    4,    0,   14,   16,    0,    0,   25,    0,   41,
   42,   47,    0,    0,   13,   24,   39,    0,    0,    0,
    0,    0,    0,   45,    0,    5,    6,    9,    0,   43,
   27,   29,   38,   36,   37,    0,   33,    0,    0,   22,
   18,   23,   20,    0,    0,   49,   48,    0,    0,   12,
    0,    0,   15,   31,   34,   17,    0,    0,   26,   46,
    0,   10,    0,    0,    0,    0,    0,    0,   28,    0,
   35,   19,   21,
};
static const YYINT yydgoto[] = {                          2,
    3,    4,    6,   23,   13,   24,   58,   25,   59,   39,
   46,   29,   30,   67,   68,   26,   33,   61,   62,   75,
   47,   48,   76,   27,   28,   57,   55,   35,
};
static const YYINT yysindex[] = {                      -223,
 -222,    0, -224,    0, -221, -222,    0,    0, -216, -180,
    0,    0, -139,    0,    0, -205, -193,    0, -195,    0,
    0,    0, -234, -169,    0,    0,    0, -182, -232, -232,
 -253, -210, -139,    0, -187,    0,    0,    0, -139,    0,
    0,    0,    0,    0,    0, -244,    0, -177, -243,    0,
    0,    0,    0, -259, -187,    0,    0, -139, -139,    0,
 -232, -232,    0,    0,    0,    0, -232, -232,    0,    0,
 -169,    0, -196, -173, -232, -260, -242, -211,    0, -173,
    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -154,    0,
    0,    0,    0, -194,    0,    0,    0, -257,    0,    0,
    0,    0,    0,    0, -214,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -214,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -174,    0,    0, -227,    0,    0,    0,    0,    0, -190,
    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,   95,   94,   71,    0,   55,    0,  -38,    0,    0,
  -30,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   40,    0,    0,    0,   62,    0,    0,
};
#define YYTABLESIZE 140
static const YYINT yytable[] = {                         49,
   60,   37,   44,   44,   44,   44,   44,   44,   44,   69,
   44,   44,   43,   50,   44,   45,   51,   44,   44,   44,
   72,   44,   63,   66,   82,   36,   37,   64,   64,   64,
   73,   74,    1,    1,    7,   41,   77,   78,   42,   30,
   43,   30,   44,   45,   80,   50,   50,   50,   50,   50,
   50,   50,    5,   50,   50,   83,   52,    9,   11,   53,
   64,   50,   50,   50,   50,    8,    8,   31,   11,   11,
   11,   11,   79,   11,    8,   64,   32,   12,   32,   32,
   11,   11,   11,   34,   11,    7,    7,   56,   11,   11,
   11,   11,   38,   11,    7,   40,   65,    8,   64,   10,
   11,   11,   11,   54,   11,   40,   40,   40,   40,   40,
   40,   40,   71,   40,   40,   81,   70,    0,    0,    0,
   40,   40,   40,   14,   15,   16,   17,    0,   18,    0,
    0,    0,    0,    0,    0,   19,   20,   21,    0,   22,
};
static const YYINT yycheck[] = {                         30,
   39,  261,  260,  261,  262,  263,  264,  265,  266,  269,
  268,  269,  273,  267,  275,  276,  270,  275,  276,  277,
   59,  279,  267,  267,  267,  260,  261,  272,  272,  272,
   61,   62,  257,  257,  259,  268,   67,   68,  271,  267,
  273,  269,  275,  276,   75,  260,  261,  262,  263,  264,
  265,  266,  275,  268,  269,  267,  267,  279,  275,  270,
  272,  276,  277,  278,  279,  260,  261,  273,  263,  264,
  265,  266,  269,  268,  269,  272,  267,  258,  269,  273,
  275,  276,  277,  279,  279,  260,  261,  275,  263,  264,
  265,  266,  262,  268,  269,  278,  274,    3,  272,    6,
  275,  276,  277,   33,  279,  260,  261,  262,  263,  264,
  265,  266,   58,  268,  269,   76,   55,   -1,   -1,   -1,
  275,  276,  277,  263,  264,  265,  266,   -1,  268,   -1,
   -1,   -1,   -1,   -1,   -1,  275,  276,  277,   -1,  279,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 280
#define YYUNDFTOKEN 311
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"RES_NAME","COLON","END_RES",
"SEMICOLON","SUM_OP","MULT_OP","SS_PROB","TR_PROB","SS_MEAN","TR_MEAN",
"C_BRACE","OPEN","CLOSE","COND_SIGN","NOT_OP","LOGIC_OP","PLACE_NAME","COMP_OP",
"INTEGER","MARK_PAR","RATE_PAR","EXP","POINT","ERROR",0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : gram",
"gram : sequence END_RES",
"sequence : sequence result",
"sequence : result",
"$$1 :",
"result : RES_NAME coord coord COLON $$1 add SEMICOLON",
"$$2 :",
"add : add SUM_OP $$2 fact",
"add : fact",
"$$3 :",
"fact : fact MULT_OP $$3 term",
"$$4 :",
"fact : fact $$4 term",
"fact : term",
"$$5 :",
"term : SS_PROB $$5 logic_cond C_BRACE",
"$$6 :",
"term : TR_PROB $$6 logic_cond C_BRACE",
"$$7 :",
"term : SS_MEAN PLACE_NAME COND_SIGN $$7 logic_cond C_BRACE",
"$$8 :",
"term : TR_MEAN PLACE_NAME COND_SIGN $$8 logic_cond C_BRACE",
"term : SS_MEAN PLACE_NAME C_BRACE",
"term : TR_MEAN PLACE_NAME C_BRACE",
"term : real_val",
"$$9 :",
"term : OPEN $$9 add CLOSE",
"$$10 :",
"logic_cond : OPEN $$10 logic_cond CLOSE",
"$$11 :",
"logic_cond : NOT_OP $$11 logic_cond",
"$$12 :",
"logic_cond : logic_cond LOGIC_OP $$12 logic_cond",
"logic_cond : compare",
"$$13 :",
"compare : int_expr COMP_OP $$13 int_expr",
"int_expr : INTEGER",
"int_expr : MARK_PAR",
"int_expr : PLACE_NAME",
"real_val : real",
"real_val : INTEGER",
"real_val : MARK_PAR",
"real_val : RATE_PAR",
"real : rational EXP",
"real : rational",
"$$14 :",
"rational : INTEGER POINT $$14 mant",
"$$15 :",
"rational : POINT $$15 mant",
"mant : INTEGER",
"mant :",
"coord : INTEGER POINT INTEGER",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 267 "gsrc2/res_gram.y"

#include "res_gram.y.h"
#include "gre.c"

#line 326 "objects/gre/gsrc2/res_gram.y.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 4:
#line 52 "gsrc2/res_gram.y"
	{
/*
#define DEBUG
*/
#ifdef DEBUG
    fprintf(stderr,"... parsing result %s\n", res_name);
#endif /* DEBUG */
		  ++no_res;
		  fprintf(rfp,"  fprintf(ofp,\"%s = %%f +- %%f\\n\", STIMA[%d], ERROR[%d]);\n",
				res_name, no_res, no_res );
		  fprintf(sfp,"  PROD[%d] =\n", no_res );
		}
break;
case 5:
#line 65 "gsrc2/res_gram.y"
	{ 
#define DEBUG
#ifdef DEBUG
    fprintf(stderr,"... end result definition %s\n", res_name);
#endif /* DEBUG */
		  fprintf(sfp,";\n");
		}
break;
case 6:
#line 76 "gsrc2/res_gram.y"
	{
		  if ( yylval == SUM ) {
		      fprintf(sfp," + ");
		    }
		  else {
		      fprintf(sfp," - ");
		    }
		}
break;
case 9:
#line 89 "gsrc2/res_gram.y"
	{
		  if ( yylval == MUL ) {
		      fprintf(sfp," * ");
		    }
		  else {
		      fprintf(sfp," / ");
		    }
		}
break;
case 11:
#line 99 "gsrc2/res_gram.y"
	{
		      fprintf(sfp," * ");
		}
break;
case 14:
#line 107 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"PRO[%d]", no_pro); ++no_pro;
		  fprintf(ofp,"  if (\n       " );
		}
break;
case 15:
#line 112 "gsrc2/res_gram.y"
	{
		  fprintf(ofp,"\n   )  *pp += ival;\n  ++pp;\n");
		}
break;
case 16:
#line 116 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"PRO[%d]", no_pro); ++no_pro;
		  fprintf(ofp,"  if (\n" );
		}
break;
case 17:
#line 121 "gsrc2/res_gram.y"
	{
		  fprintf(ofp,"\n   )  *pp += val;\n  ++pp;\n");
		}
break;
case 18:
#line 125 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"PRO[%d]", no_pro); ++no_pro;
		  p_num = yylval;
		}
break;
case 19:
#line 130 "gsrc2/res_gram.y"
	{
		  fprintf(ofp,"\n   )  *pp += DP[%d]*ival;\n  ++pp;\n",
			      p_num );
		}
break;
case 20:
#line 135 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"PRO[%d]", no_pro); ++no_pro;
		  p_num = yylval;
		}
break;
case 21:
#line 140 "gsrc2/res_gram.y"
	{
		  fprintf(ofp,"\n   )  *pp += DP[%d]*val;\n  ++pp;\n",
			      p_num );
		}
break;
case 22:
#line 145 "gsrc2/res_gram.y"
	{
#define DEBUG
#ifdef DEBUG
    fprintf(stderr,"  ... average marking of place %d\n", yylval);
#endif /* DEBUG */
		  fprintf(sfp,"PRO[%d]", no_pro); ++no_pro;
		  fprintf(ofp,"  *(pp++) += DP[%d]*ival;\n",
			      yylval );
		}
break;
case 23:
#line 155 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"tr_mean_tok(%d)", yylval);
		}
break;
case 25:
#line 160 "gsrc2/res_gram.y"
	{
		  fprintf(sfp," ( ");
		}
break;
case 26:
#line 164 "gsrc2/res_gram.y"
	{
		  fprintf(sfp," ) ");
		}
break;
case 27:
#line 170 "gsrc2/res_gram.y"
	{ fprintf(ofp," ( "); }
break;
case 28:
#line 172 "gsrc2/res_gram.y"
	{ fprintf(ofp," ) "); }
break;
case 29:
#line 174 "gsrc2/res_gram.y"
	{ fprintf(ofp," ! "); }
break;
case 31:
#line 177 "gsrc2/res_gram.y"
	{ if ( yylval == L_AND )
			  fprintf(ofp," && ");
		      else
			  fprintf(ofp," || ");
		    }
break;
case 34:
#line 187 "gsrc2/res_gram.y"
	{ switch (yylval) {
		      case EQUAL_TO :
			  fprintf(ofp," == ");
			break;
		      case NOTEQUAL_TO :
			  fprintf(ofp," != ");
			break;
		      case GREATER_EQUAL :
			  fprintf(ofp," >= ");
			break;
		      case GREATER_THAN :
			  fprintf(ofp," > ");
			break;
		      case LESS_EQUAL :
			  fprintf(ofp," <= ");
			break;
		      case LESS_THAN :
			  fprintf(ofp," < ");
			break;
		    }
		  }
break;
case 36:
#line 212 "gsrc2/res_gram.y"
	{ fprintf(ofp,"%d", int_val ); }
break;
case 37:
#line 214 "gsrc2/res_gram.y"
	{ fprintf(ofp,"%d", MP[yylval-1] ); }
break;
case 38:
#line 216 "gsrc2/res_gram.y"
	{ fprintf(ofp,"DP[%d]", yylval ); }
break;
case 40:
#line 221 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"%d", int_val );
		}
break;
case 41:
#line 225 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"%d", MP[yylval-1] );
		}
break;
case 42:
#line 229 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"%f", RP[yylval-1] );
		}
break;
case 43:
#line 235 "gsrc2/res_gram.y"
	{
	        fprintf(sfp,"e%d", yylval );
	      }
break;
case 45:
#line 242 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"%d.", int_val );
		}
break;
case 47:
#line 247 "gsrc2/res_gram.y"
	{
		  fprintf(sfp,"0.");
		}
break;
case 49:
#line 254 "gsrc2/res_gram.y"
	{
	      fprintf(sfp,"%d", int_val );
	    }
break;
case 50:
#line 258 "gsrc2/res_gram.y"
	{
	      fprintf(sfp,"0");
	    }
break;
#line 766 "objects/gre/gsrc2/res_gram.y.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
