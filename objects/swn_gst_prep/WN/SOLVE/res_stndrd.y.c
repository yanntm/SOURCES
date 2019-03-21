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

#line 2 "WN/SOLVE/res_stndrd.y"

int int_val;
int yylex();

char res_name[200];

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

#line 40 "objects/swn_gst_prep/WN/SOLVE/res_stndrd.y.c"

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
#define L_NOT 271
#define L_AND 272
#define L_OR 273
#define PLACE_NAME 274
#define COMP_OP 275
#define INTEGER 276
#define MARK_PAR 277
#define RATE_PAR 278
#define EXP 279
#define POINT 280
#define ERROR 281
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    1,    5,    2,    7,    4,    4,    9,
    6,    6,    6,   11,    8,   12,    8,   13,    8,   14,
    8,    8,    8,    8,   16,    8,   10,   10,   17,   17,
   18,   18,   19,   19,   22,   23,   20,   21,   21,   21,
   15,   15,   15,   15,   24,   24,   27,   25,   25,   26,
   26,    3,
};
static const YYINT yylen[] = {                            2,
    2,    1,    2,    1,    0,    7,    0,    4,    1,    0,
    4,    2,    1,    0,    4,    0,    4,    0,    6,    0,
    6,    3,    3,    1,    0,    4,    3,    1,    3,    1,
    2,    1,    3,    1,    0,    0,    5,    1,    1,    1,
    1,    1,    1,    1,    2,    1,    0,    4,    2,    1,
    0,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    2,    0,    0,    4,    0,    0,    1,    3,    0,
    0,   52,    5,    0,   14,   16,    0,    0,   25,    0,
   43,   44,    0,    0,    0,   13,   24,   41,    0,    0,
    0,    0,    0,    0,   47,   50,   49,    6,    7,   10,
   12,   45,    0,    0,   40,   38,   39,    0,    0,   30,
   32,   34,   35,    0,   22,   18,   23,   20,    0,    0,
    0,    0,    0,   31,   15,    0,    0,    0,   17,    0,
    0,   26,   48,    0,   11,   33,    0,   29,   36,    0,
    0,    0,   19,   21,   37,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,    7,   24,   14,   25,   61,   26,   62,   48,
   30,   31,   70,   71,   27,   34,   49,   50,   51,   52,
   53,   68,   82,   28,   29,   37,   60,
};
static const YYINT yysindex[] = {                      -243,
 -253,    0,    0, -221,    0, -217, -253,    0,    0, -202,
 -178,    0,    0, -187,    0,    0, -192, -177,    0, -179,
    0,    0, -157, -199, -193,    0,    0,    0, -159, -259,
 -259, -153, -152, -187,    0,    0,    0,    0,    0,    0,
    0,    0, -259, -229,    0,    0,    0, -168, -164,    0,
    0,    0,    0, -167,    0,    0,    0,    0, -204, -157,
 -187, -187, -209,    0,    0, -259, -259, -154,    0, -259,
 -259,    0,    0, -193,    0,    0, -164,    0,    0, -163,
 -160, -165,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -210,
    0,    0, -258,    0, -236,    0,    0,    0, -234,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -181,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -258,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -166,    0,    0, -171,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  112,  115,   89,    0,   63,    0,  -25,    0,  -30,
    0,    0,    0,    0,    0,    0,   59,   60,   82,    0,
   46,    0,    0,    0,    0,   69,    0,
};
#define YYTABLESIZE 129
static const YYINT yytable[] = {                         41,
   54,   51,   51,   51,   51,   51,   51,   51,   43,   51,
   51,   44,   63,    1,   45,    2,   46,   47,   51,   51,
   51,   51,    6,    9,    9,   46,   46,   46,   46,   46,
   46,   46,    9,   46,   46,    1,   75,    8,   43,   80,
   81,   46,   46,   46,   45,   46,   46,   47,   41,   42,
   42,   42,   42,   42,   42,   42,   39,   42,   42,   76,
   38,   39,   10,   66,   72,   42,   42,   42,   40,   15,
   16,   17,   18,   12,   19,   15,   16,   17,   18,   13,
   19,   32,   20,   21,   22,   28,   23,   28,   20,   21,
   22,   28,   23,    8,    8,   27,   33,   27,   65,   69,
   35,   27,    8,   83,   66,   66,   84,   67,   45,   66,
   46,   47,   66,   55,   57,    9,   56,   58,   36,   42,
   79,   11,   59,   74,   77,   64,   78,   85,   73,
};
static const YYINT yycheck[] = {                         25,
   31,  260,  261,  262,  263,  264,  265,  266,  268,  268,
  269,  271,   43,  257,  274,  259,  276,  277,  277,  278,
  279,  280,  276,  260,  261,  260,  261,  262,  263,  264,
  265,  266,  269,  268,  269,  257,   62,  259,  268,   70,
   71,  276,  277,  278,  274,  280,  276,  277,   74,  260,
  261,  262,  263,  264,  265,  266,  261,  268,  269,  269,
  260,  261,  280,  273,  269,  276,  277,  278,  262,  263,
  264,  265,  266,  276,  268,  263,  264,  265,  266,  258,
  268,  274,  276,  277,  278,  267,  280,  269,  276,  277,
  278,  273,  280,  260,  261,  267,  274,  269,  267,  267,
  280,  273,  269,  267,  273,  273,  267,  272,  274,  273,
  276,  277,  273,  267,  267,    4,  270,  270,  276,  279,
  275,    7,   34,   61,   66,   44,   67,   82,   60,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 281
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
"C_BRACE","OPEN","CLOSE","COND_SIGN","L_NOT","L_AND","L_OR","PLACE_NAME",
"COMP_OP","INTEGER","MARK_PAR","RATE_PAR","EXP","POINT","ERROR",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : gram",
"gram : sequence END_RES",
"gram : END_RES",
"sequence : sequence result",
"sequence : result",
"$$1 :",
"result : RES_NAME coord coord COLON $$1 add SEMICOLON",
"$$2 :",
"add : add SUM_OP $$2 fact",
"add : fact",
"$$3 :",
"fact : fact MULT_OP $$3 term",
"fact : fact term",
"fact : term",
"$$4 :",
"term : SS_PROB $$4 logic_cond C_BRACE",
"$$5 :",
"term : TR_PROB $$5 logic_cond C_BRACE",
"$$6 :",
"term : SS_MEAN PLACE_NAME COND_SIGN $$6 logic_cond C_BRACE",
"$$7 :",
"term : TR_MEAN PLACE_NAME COND_SIGN $$7 logic_cond C_BRACE",
"term : SS_MEAN PLACE_NAME C_BRACE",
"term : TR_MEAN PLACE_NAME C_BRACE",
"term : real_val",
"$$8 :",
"term : OPEN $$8 add CLOSE",
"logic_cond : logic_cond L_OR logic_and",
"logic_cond : logic_and",
"logic_and : logic_and L_AND logic_not",
"logic_and : logic_not",
"logic_not : L_NOT logic_term",
"logic_not : logic_term",
"logic_term : OPEN logic_cond CLOSE",
"logic_term : compare",
"$$9 :",
"$$10 :",
"compare : int_expr $$9 COMP_OP $$10 int_expr",
"int_expr : INTEGER",
"int_expr : MARK_PAR",
"int_expr : PLACE_NAME",
"real_val : real",
"real_val : INTEGER",
"real_val : MARK_PAR",
"real_val : RATE_PAR",
"real : rational EXP",
"real : rational",
"$$11 :",
"rational : INTEGER POINT $$11 mant",
"rational : POINT mant",
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
#line 304 "WN/SOLVE/res_stndrd.y"

#include "res_stndrd.y.h"
#include "gre_stndrd.c"

#line 320 "objects/swn_gst_prep/WN/SOLVE/res_stndrd.y.c"

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
case 5:
#line 47 "WN/SOLVE/res_stndrd.y"
	{
#ifdef DEBUG
  fprintf(stderr,"\nresult:%s\n", res_name);
#endif
		  ++no_res;
		  new_res = (struct Res_def*)ecalloc(1,sizeof(struct Res_def));
		  new_res->next = NULL;
		  if ( cur_res == NULL )
		      first_res = new_res;
		  else
		      cur_res->next = new_res;
		  cur_res = new_res;
		  cur_res->name = ecalloc(strlen(res_name)+1,1);
		  sprintf(cur_res->name,res_name);
		  cur_res->nprobs = 0;
		  cur_prob = NULL;
		}
break;
case 7:
#line 69 "WN/SOLVE/res_stndrd.y"
	{
		  sumop[level_op] = yylval;
		}
break;
case 8:
#line 73 "WN/SOLVE/res_stndrd.y"
	{
		  if ( sumop[level_op] == SUM ) {
		      add_op('+');
		    }
		  else {
		      add_op('-');
		    }
		}
break;
case 10:
#line 85 "WN/SOLVE/res_stndrd.y"
	{
		  multop[level_op] = yylval;
		}
break;
case 11:
#line 89 "WN/SOLVE/res_stndrd.y"
	{
		  if ( multop[level_op] == MUL ) {
		      add_op('*');
		    }
		  else {
		      add_op('/');
		    }
		}
break;
case 12:
#line 99 "WN/SOLVE/res_stndrd.y"
	{
		      add_op('*');
		}
break;
case 14:
#line 106 "WN/SOLVE/res_stndrd.y"
	{
		  add_op('o');
		  cur_prob->type = 'P';
		  cur_prob->num = ++no_pro;
		}
break;
case 16:
#line 113 "WN/SOLVE/res_stndrd.y"
	{
		  add_op('o');
		  cur_prob->type = 'p';
		  cur_prob->num = ++no_pro;
		}
break;
case 18:
#line 120 "WN/SOLVE/res_stndrd.y"
	{
		  add_op('o');
		  cur_prob->type = 'C';
		  cur_prob->num = ++no_pro;
		  cur_prob->val.place = yylval;
		}
break;
case 20:
#line 128 "WN/SOLVE/res_stndrd.y"
	{
		  add_op('o');
		  cur_prob->type = 'c';
		  cur_prob->num = ++no_pro;
		  cur_prob->val.place = yylval;
		}
break;
case 22:
#line 136 "WN/SOLVE/res_stndrd.y"
	{
		  add_op('o');
		  cur_prob->type = 'E';
		  cur_prob->num = ++no_pro;
		  cur_prob->val.place = yylval;
		}
break;
case 23:
#line 143 "WN/SOLVE/res_stndrd.y"
	{
		  add_op('o');
		  cur_prob->type = 'e';
		  cur_prob->num = ++no_pro;
		  cur_prob->val.place = yylval;
		}
break;
case 24:
#line 150 "WN/SOLVE/res_stndrd.y"
	{
		  add_op('o');
		  cur_prob->type = 'r';
		  cur_prob->val.realval = cur_real;
		}
break;
case 25:
#line 156 "WN/SOLVE/res_stndrd.y"
	{
		  ++level_op;
		}
break;
case 26:
#line 160 "WN/SOLVE/res_stndrd.y"
	{
		  --level_op;
		}
break;
case 27:
#line 167 "WN/SOLVE/res_stndrd.y"
	{
		  add_cond('|');
		}
break;
case 29:
#line 175 "WN/SOLVE/res_stndrd.y"
	{
		  add_cond('&');
		}
break;
case 31:
#line 183 "WN/SOLVE/res_stndrd.y"
	{
		  add_cond('~');
		}
break;
case 35:
#line 195 "WN/SOLVE/res_stndrd.y"
	{
		  add_cond('c');
		  cur_cond->top1 = cur_inttype;
		  cur_cond->op1 = cur_intval;
		}
break;
case 36:
#line 201 "WN/SOLVE/res_stndrd.y"
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
case 37:
#line 223 "WN/SOLVE/res_stndrd.y"
	{
		  cur_cond->top2 = cur_inttype;
		  cur_cond->op2 = cur_intval;
		}
break;
case 38:
#line 230 "WN/SOLVE/res_stndrd.y"
	{
		  cur_intval = int_val;
		  cur_inttype = 'i';
		}
break;
case 39:
#line 235 "WN/SOLVE/res_stndrd.y"
	{
		  cur_intval = MP[yylval-1];
		  cur_inttype = 'i';
		}
break;
case 40:
#line 240 "WN/SOLVE/res_stndrd.y"
	{
		  cur_intval = yylval;
		  cur_inttype = 'p';
		}
break;
case 42:
#line 248 "WN/SOLVE/res_stndrd.y"
	{
		cur_real = int_val;
	      }
break;
case 43:
#line 252 "WN/SOLVE/res_stndrd.y"
	{
		cur_real = MP[yylval-1];
	      }
break;
case 44:
#line 256 "WN/SOLVE/res_stndrd.y"
	{
		cur_real = RP[yylval-1];
	      }
break;
case 45:
#line 262 "WN/SOLVE/res_stndrd.y"
	{
	        sprintf(sreal,"1.0e%d ", yylval );
		cur_real = atof(sreal);
		cur_real *= cur_rat;
	      }
break;
case 46:
#line 268 "WN/SOLVE/res_stndrd.y"
	{
		  cur_real = cur_rat;
		}
break;
case 47:
#line 274 "WN/SOLVE/res_stndrd.y"
	{
		  sprintf(srat,"%d.", int_val );
		}
break;
case 48:
#line 278 "WN/SOLVE/res_stndrd.y"
	{
		  strcat(srat,smant );
		  cur_rat = atof(srat);
		}
break;
case 49:
#line 284 "WN/SOLVE/res_stndrd.y"
	{
		  sprintf(srat,"0.%s",smant);
		  cur_rat = atof(srat);
		}
break;
case 50:
#line 291 "WN/SOLVE/res_stndrd.y"
	{
	      sprintf(smant,"%d ", int_val );
	    }
break;
case 51:
#line 295 "WN/SOLVE/res_stndrd.y"
	{
	      sprintf(smant,"0 ");
	    }
break;
#line 793 "objects/swn_gst_prep/WN/SOLVE/res_stndrd.y.c"
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
