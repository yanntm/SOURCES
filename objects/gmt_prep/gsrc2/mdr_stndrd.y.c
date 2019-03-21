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

#line 2 "gsrc2/mdr_stndrd.y"

#include <string.h>
#include "trans_def.h"

int int_val;
int yylex();
static int policy_type;
static int distrib_type;

extern int checkplace (char * str);
extern int checkmpar (char * str);
extern int checkrpar (char * str);


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

#line 48 "objects/gmt_prep/gsrc2/mdr_stndrd.y.c"

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

#define WHEN 257
#define EVER 258
#define PLACE_NAME 259
#define COMP_OP 260
#define INTEGER 261
#define MARK_PAR 262
#define SUM_OP 263
#define MULT_OP 264
#define RATE_PAR 265
#define EXP 266
#define ERROR 267
#define COLON 268
#define SEMICOLON 269
#define POINT 270
#define OPEN 271
#define CLOSE 272
#define L_AND 273
#define L_OR 274
#define L_NOT 275
#define GD 276
#define AGE 277
#define ENABL 278
#define REEN 279
#define PREE 280
#define PO_REDRAW 281
#define PO_RAND 282
#define PO_FD 283
#define PO_LD 284
#define PO_FT 285
#define PO_LT 286
#define DIS 287
#define LIN 288
#define COX 289
#define IPE 290
#define ERL 291
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    3,    0,    5,    2,    2,    2,    4,    4,    7,
    7,    7,    7,    7,    7,    6,    6,    8,    8,    8,
    8,    8,    9,    9,    9,    9,    9,   11,    1,   13,
    1,   15,   12,   16,   12,   14,   14,   17,   17,   18,
   18,   19,   19,   21,   23,   20,   22,   22,   22,   25,
   10,   10,   27,   24,   24,   24,   28,   26,   26,   26,
   26,   29,   29,   32,   30,   30,   31,   31,
};
static const YYINT yylen[] = {                            2,
    1,    0,    3,    0,    4,    2,    1,    1,    0,    2,
    2,    2,    2,    2,    2,    2,    1,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    0,    4,    0,
    5,    0,    7,    0,    6,    3,    1,    3,    1,    2,
    1,    3,    1,    0,    0,    5,    1,    1,    1,    0,
    4,    1,    0,    4,    2,    1,    0,    4,    1,    1,
    1,    2,    1,    0,    4,    2,    1,    0,
};
static const YYINT yydefred[] = {                         0,
   34,   28,    2,    0,    1,    0,    0,    0,    0,   32,
   30,   44,    0,    0,    0,    0,   39,   41,   43,   49,
    0,   48,   61,    0,   57,    0,   60,    0,   56,   59,
    0,    4,    0,    0,    0,    0,    0,    0,    0,    3,
    7,    0,   17,    0,    0,    0,    0,   40,    0,    0,
    0,   64,   67,   66,    0,   50,   29,   53,   55,   62,
    0,    6,   18,   19,   20,   21,   22,   24,   25,   26,
   27,   23,   16,    0,    0,   45,   42,    0,    0,   38,
    0,    0,    0,    0,    0,    0,    8,    0,   31,    0,
   35,   65,   58,    0,   54,   10,   11,   12,   13,   14,
   15,    5,    0,   47,   46,   33,
};
static const YYINT yydgoto[] = {                          4,
    5,   40,    9,   86,   61,   41,   87,   42,   43,   26,
    8,    6,   45,   15,   44,    7,   16,   17,   18,   19,
   46,   27,   90,   28,   83,   29,   84,   55,   30,   31,
   54,   81,
};
static const YYINT yysindex[] = {                      -253,
    0,    0,    0,    0,    0, -248, -251, -167, -262,    0,
    0,    0, -251, -252, -257, -259,    0,    0,    0,    0,
 -249,    0,    0, -228,    0, -231,    0, -174,    0,    0,
 -236,    0, -181, -150, -210, -206, -197, -196, -182,    0,
    0, -149,    0, -251, -167, -178, -172,    0, -167, -251,
 -251,    0,    0,    0, -167,    0,    0,    0,    0,    0,
 -186,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -216, -191,    0,    0, -145, -259,    0,
 -228, -250, -167, -167, -155, -181,    0, -167,    0, -116,
    0,    0,    0, -174,    0,    0,    0,    0,    0,    0,
    0,    0, -144,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -237,    0,    0,    0,    0,
 -188,    0,    0, -223,    0,    0,    0, -219,    0,    0,
 -202,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -175,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -151,    0,
 -223,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -183,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    0,    0,    0,  -32,    0,    0,   59,  -43,
    0,    0,    0,  -10,    0,    0,   61,   69,  108,    0,
    0,   47,    0,   64,    0,  -28,    0,    0,    0,    0,
   63,    0,
};
#define YYTABLESIZE 147
static const YYINT yytable[] = {                         59,
   62,   75,   47,    1,    2,   78,   12,   12,   10,   11,
   49,   82,   56,   51,   32,   33,   50,   34,   13,   13,
   52,   93,    3,   14,   35,   36,   37,   38,   39,   60,
   37,   56,   53,   74,   37,   68,   37,   57,   68,   68,
   68,   68,   68,   52,  103,   68,   68,   68,   68,   52,
   68,   88,   52,  102,   69,   95,   63,   50,   63,   63,
   63,   63,   63,   70,   71,   59,   63,   63,   63,   63,
   47,   56,   47,   47,   47,   47,   47,   89,   72,   51,
   47,   76,   47,   47,   20,   51,   21,   22,   51,   58,
   23,   20,   85,   21,   22,   24,   25,   23,   34,   77,
   73,   50,   24,   25,    9,   35,   36,   37,   38,   39,
   79,    9,    9,    9,    9,    9,   36,   56,   56,   80,
   36,   48,   36,   91,  106,   96,   97,   98,   99,  100,
  101,   63,   64,   65,   66,   67,  105,   35,   36,   37,
   38,   39,   20,   92,  104,   22,   94,
};
static const YYINT yycheck[] = {                         28,
   33,   45,   13,  257,  258,   49,  259,  259,  257,  258,
  268,   55,  263,  273,  277,  278,  274,  280,  271,  271,
  270,  272,  276,  275,  287,  288,  289,  290,  291,  266,
  268,  263,  261,   44,  272,  259,  274,  269,  262,  263,
  264,  265,  266,  263,   88,  269,  270,  271,  272,  269,
  261,  268,  272,   86,  261,   84,  259,  274,  261,  262,
  263,  264,  265,  261,  261,   94,  269,  270,  271,  272,
  259,  263,  261,  262,  263,  264,  265,  269,  261,  263,
  269,  260,  271,  272,  259,  269,  261,  262,  272,  264,
  265,  259,  279,  261,  262,  270,  271,  265,  280,  272,
   42,  274,  270,  271,  280,  287,  288,  289,  290,  291,
   50,  287,  288,  289,  290,  291,  268,  263,  263,   51,
  272,   14,  274,  269,  269,  281,  282,  283,  284,  285,
  286,  282,  283,  284,  285,  286,   90,  287,  288,  289,
  290,  291,  259,   81,  261,  262,   83,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 291
#define YYUNDFTOKEN 326
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"WHEN","EVER","PLACE_NAME",
"COMP_OP","INTEGER","MARK_PAR","SUM_OP","MULT_OP","RATE_PAR","EXP","ERROR",
"COLON","SEMICOLON","POINT","OPEN","CLOSE","L_AND","L_OR","L_NOT","GD","AGE",
"ENABL","REEN","PREE","PO_REDRAW","PO_RAND","PO_FD","PO_LD","PO_FT","PO_LT",
"DIS","LIN","COX","IPE","ERL",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : gram",
"gram : assign",
"$$1 :",
"gram : GD $$1 gen_distr",
"$$2 :",
"gen_distr : AGE $$2 age_m dis_p",
"gen_distr : ENABL dis_p",
"gen_distr : dis_p",
"age_m : ree_p",
"age_m :",
"ree_p : REEN PO_REDRAW",
"ree_p : REEN PO_RAND",
"ree_p : REEN PO_FD",
"ree_p : REEN PO_LD",
"ree_p : REEN PO_FT",
"ree_p : REEN PO_LT",
"dis_p : pree_po distr_type",
"dis_p : distr_type",
"pree_po : PREE PO_RAND",
"pree_po : PREE PO_FD",
"pree_po : PREE PO_LD",
"pree_po : PREE PO_FT",
"pree_po : PREE PO_LT",
"distr_type : ERL INTEGER",
"distr_type : DIS INTEGER",
"distr_type : LIN INTEGER",
"distr_type : COX INTEGER",
"distr_type : IPE INTEGER",
"$$3 :",
"assign : EVER $$3 sum SEMICOLON",
"$$4 :",
"assign : when_clause EVER $$4 sum SEMICOLON",
"$$5 :",
"when_clause : when_clause WHEN $$5 logic_cond COLON sum SEMICOLON",
"$$6 :",
"when_clause : WHEN $$6 logic_cond COLON sum SEMICOLON",
"logic_cond : logic_cond L_OR logic_and",
"logic_cond : logic_and",
"logic_and : logic_and L_AND logic_not",
"logic_and : logic_not",
"logic_not : L_NOT logic_term",
"logic_not : logic_term",
"logic_term : OPEN logic_cond CLOSE",
"logic_term : compare",
"$$7 :",
"$$8 :",
"compare : PLACE_NAME $$7 COMP_OP $$8 int_const",
"int_const : INTEGER",
"int_const : MARK_PAR",
"int_const : PLACE_NAME",
"$$9 :",
"sum : sum SUM_OP $$9 fact",
"sum : fact",
"$$10 :",
"fact : fact MULT_OP $$10 real_val",
"fact : fact real_val",
"fact : real_val",
"$$11 :",
"real_val : OPEN $$11 sum CLOSE",
"real_val : real",
"real_val : int_const",
"real_val : RATE_PAR",
"real : rational EXP",
"real : rational",
"$$12 :",
"rational : INTEGER POINT $$12 mant",
"rational : POINT mant",
"mant : INTEGER",
"mant :",

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
#line 392 "gsrc2/mdr_stndrd.y"

#include "mdr_stndrd.y.h"
#include "gmt_prep.c"

#line 369 "objects/gmt_prep/gsrc2/mdr_stndrd.y.c"

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
case 2:
#line 41 "gsrc2/mdr_stndrd.y"
	{
	    policy_type = 0;
	 }
break;
case 4:
#line 48 "gsrc2/mdr_stndrd.y"
	{
		policy_type = POLICY_AGE;
	      }
break;
case 10:
#line 61 "gsrc2/mdr_stndrd.y"
	{
	   policy_type |= POLICY_REDRAW;
	 }
break;
case 11:
#line 65 "gsrc2/mdr_stndrd.y"
	{
	   policy_type |= POLICY_RE_EN_RANDOM;
	 }
break;
case 12:
#line 69 "gsrc2/mdr_stndrd.y"
	{
	   policy_type |= POLICY_RE_EN_FIRST_DRAWN;
	 }
break;
case 13:
#line 73 "gsrc2/mdr_stndrd.y"
	{
	   policy_type |= POLICY_RE_EN_LAST_DRAWN;
	 }
break;
case 14:
#line 77 "gsrc2/mdr_stndrd.y"
	{
	   policy_type |= POLICY_RE_EN_FIRST_DESCHED;
	 }
break;
case 15:
#line 81 "gsrc2/mdr_stndrd.y"
	{
	   policy_type |= POLICY_RE_EN_LAST_DESCHED;
	 }
break;
case 18:
#line 91 "gsrc2/mdr_stndrd.y"
	{
	     policy_type |= POLICY_DIS_RANDOM;
	   }
break;
case 19:
#line 95 "gsrc2/mdr_stndrd.y"
	{
	     policy_type |= POLICY_DIS_FIRST_DRAWN;
	   }
break;
case 20:
#line 99 "gsrc2/mdr_stndrd.y"
	{
	     policy_type |= POLICY_DIS_LAST_DRAWN;
	   }
break;
case 21:
#line 103 "gsrc2/mdr_stndrd.y"
	{
	     policy_type |= POLICY_DIS_FIRST_SCHED;
	   }
break;
case 22:
#line 107 "gsrc2/mdr_stndrd.y"
	{
	     policy_type |= POLICY_DIS_LAST_SCHED;
	   }
break;
case 23:
#line 113 "gsrc2/mdr_stndrd.y"
	{
		if ( --int_val < 0 || int_val > 31 ) {
		    fprintf(stderr,
		        "ERROR: number of Erlang stages %d out of range!\n",
			    int_val+1 );
		    exit(1);
		  }
	        distrib_type = TIMING_ERLANG | int_val;
		read_distrib(policy_type,distrib_type);
	      }
break;
case 24:
#line 124 "gsrc2/mdr_stndrd.y"
	{
		if ( --int_val < 0 || int_val > 31 ) {
		    fprintf(stderr,
		        "ERROR: number of Discrete values %d out of range!\n",
			    int_val+1 );
		    exit(1);
		  }
	        distrib_type = TIMING_DISCRETE | int_val;
		read_distrib(policy_type,distrib_type);
	      }
break;
case 25:
#line 135 "gsrc2/mdr_stndrd.y"
	{
		if ( --int_val < 0 || int_val > 31 ) {
		    fprintf(stderr,
		        "ERROR: number of Linear intervals %d out of range!\n",
			    int_val+1 );
		    exit(1);
		  }
	        distrib_type = TIMING_LINEAR | int_val;
		read_distrib(policy_type,distrib_type);
	      }
break;
case 26:
#line 146 "gsrc2/mdr_stndrd.y"
	{
		if ( --int_val < 0 || int_val > 31 ) {
		    fprintf(stderr,
		        "ERROR: number of Cox stages %d out of range!\n",
			    int_val+1 );
		    exit(1);
		  }
	        distrib_type = TIMING_COX_normalized | int_val;
		read_distrib(policy_type,distrib_type);
	      }
break;
case 27:
#line 157 "gsrc2/mdr_stndrd.y"
	{
		if ( --int_val < 0 || int_val > 31 ) {
		    fprintf(stderr,
		  "ERROR: number of iperexponential stages %d out of range!\n",
			    int_val+1 );
		    exit(1);
		  }
	        distrib_type = TIMING_IPEREXP | int_val;
		read_distrib(policy_type,distrib_type);
	      }
break;
case 28:
#line 170 "gsrc2/mdr_stndrd.y"
	{
	      add_clause('e');
	    }
break;
case 29:
#line 174 "gsrc2/mdr_stndrd.y"
	{
	      yyin = eof;
	    }
break;
case 30:
#line 178 "gsrc2/mdr_stndrd.y"
	{
	      add_clause('e');
	    }
break;
case 31:
#line 182 "gsrc2/mdr_stndrd.y"
	{
	      yyin = eof;
	    }
break;
case 32:
#line 188 "gsrc2/mdr_stndrd.y"
	{
		    add_clause('w');
		  }
break;
case 34:
#line 194 "gsrc2/mdr_stndrd.y"
	{
		    add_clause('w');
		  }
break;
case 36:
#line 203 "gsrc2/mdr_stndrd.y"
	{
                  add_cond('|');
                }
break;
case 38:
#line 211 "gsrc2/mdr_stndrd.y"
	{
                  add_cond('&');
                }
break;
case 40:
#line 219 "gsrc2/mdr_stndrd.y"
	{
                  add_cond('~');
                }
break;
case 44:
#line 231 "gsrc2/mdr_stndrd.y"
	{
		    add_cond('c');
		    cur_cond->p1 = yylval;
		  }
break;
case 45:
#line 236 "gsrc2/mdr_stndrd.y"
	{ switch (yylval) {
                      case EQUAL_TO :
                          cur_cond->type = '=';
                        break;
                      case NOTEQUAL_TO :
                          cur_cond->type = 'n';
                        break;
                      case GREATER_EQUAL :
                          cur_cond->type = 'g';
                        break;
                      case GREATER_THAN :
                          cur_cond->type = '>';
                        break;
                      case LESS_EQUAL :
                          cur_cond->type = 'l';
                        break;
                      case LESS_THAN :
                          cur_cond->type = '<';
                        break;
                    }     
                  }
break;
case 46:
#line 258 "gsrc2/mdr_stndrd.y"
	{
		    cur_cond->top2 = cur_inttype;
		    cur_cond->op2 = cur_intval;
		  }
break;
case 47:
#line 265 "gsrc2/mdr_stndrd.y"
	{
		  cur_inttype = 'i';
		  cur_intval = int_val;
		}
break;
case 48:
#line 270 "gsrc2/mdr_stndrd.y"
	{
		  cur_inttype = 'i';
		  cur_intval = MP[yylval-1];
		}
break;
case 49:
#line 275 "gsrc2/mdr_stndrd.y"
	{
		  cur_inttype = 'p';
		  cur_intval = yylval;
		}
break;
case 50:
#line 282 "gsrc2/mdr_stndrd.y"
	{
                  sumop[level_op] = yylval;
                }
break;
case 51:
#line 286 "gsrc2/mdr_stndrd.y"
	{
                  if ( sumop[level_op] == SUM ) {
                      add_op('+');
                    }
                  else {
                      add_op('-');
                    }
                }
break;
case 53:
#line 298 "gsrc2/mdr_stndrd.y"
	{
                  multop[level_op] = yylval;
                }
break;
case 54:
#line 302 "gsrc2/mdr_stndrd.y"
	{
                  if ( multop[level_op] == MUL ) {
                      add_op('*');
                    }
                  else {
                      add_op('/');
                    }
                }
break;
case 55:
#line 312 "gsrc2/mdr_stndrd.y"
	{
                      add_op('*');
                }
break;
case 57:
#line 319 "gsrc2/mdr_stndrd.y"
	{
		  ++level_op;
		}
break;
case 58:
#line 323 "gsrc2/mdr_stndrd.y"
	{
		  --level_op;
		}
break;
case 59:
#line 327 "gsrc2/mdr_stndrd.y"
	{
                  add_op('o');
                  cur_val->type = 'r';
                  cur_val->val.real = cur_real;
                }
break;
case 60:
#line 333 "gsrc2/mdr_stndrd.y"
	{
                  add_op('o');
		  if ( cur_inttype == 'p' ) {
		      cur_val->type = 'p';
		      cur_val->val.place = cur_intval;
		    }
                  else {
		      cur_val->type = 'r';
		      cur_val->val.real = (double)cur_intval;
		    }
		}
break;
case 61:
#line 345 "gsrc2/mdr_stndrd.y"
	{
                  add_op('o');
                  cur_val->type = 'r';
                  cur_val->val.real = RP[yylval-1];
		}
break;
case 62:
#line 353 "gsrc2/mdr_stndrd.y"
	{
                sprintf(sreal,"1.0e%d ", yylval );
                cur_real = atof(sreal);
                cur_real *= cur_rat;
              }
break;
case 63:
#line 359 "gsrc2/mdr_stndrd.y"
	{
                  cur_real = cur_rat;
                }
break;
case 64:
#line 365 "gsrc2/mdr_stndrd.y"
	{
                  sprintf(srat,"%d.", int_val );
                }
break;
case 65:
#line 369 "gsrc2/mdr_stndrd.y"
	{
                  strcat(srat,smant );
                  cur_rat = atof(srat);
                }
break;
case 66:
#line 375 "gsrc2/mdr_stndrd.y"
	{
                  sprintf(srat,"0.%s",smant);
                  cur_rat = atof(srat);
                }
break;
case 67:
#line 382 "gsrc2/mdr_stndrd.y"
	{
              sprintf(smant,"%d ", int_val );
            }
break;
case 68:
#line 386 "gsrc2/mdr_stndrd.y"
	{
              sprintf(smant,"0 ");
            }
break;
#line 952 "objects/gmt_prep/gsrc2/mdr_stndrd.y.c"
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
