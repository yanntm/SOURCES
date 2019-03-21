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

#line 2 "gsrc2/mdr_gram.y"

int_val;
extern int yylex();

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
#line 40 "objects/comp/gsrc2/mdr_gram.y.c"

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
#define ARITHM_OP 263
#define RATE_PAR 264
#define EXP 265
#define ERROR 266
#define COLON 267
#define SEMICOLON 268
#define POINT 269
#define OPEN 270
#define CLOSE 271
#define LOGIC_OP 272
#define NOT_OP 273
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    2,    0,    4,    0,    6,    7,    3,    8,    9,    3,
   10,    5,   11,    5,   12,    5,    5,   14,   16,   13,
   15,   15,   15,   17,    1,   18,    1,    1,   19,   19,
   19,   20,   20,   23,   21,   24,   21,   22,   22,
};
static const YYINT yylen[] = {                            2,
    0,    4,    0,    5,    0,    0,    8,    0,    0,    7,
    0,    4,    0,    3,    0,    4,    1,    0,    0,    5,
    1,    1,    1,    0,    4,    0,    4,    1,    1,    1,
    1,    2,    1,    0,    4,    0,    3,    1,    0,
};
static const YYINT yydefred[] = {                         0,
    8,    1,    0,    0,    0,    0,    5,    3,   18,   11,
   13,    0,   17,   23,    0,   22,   31,   36,   24,    0,
   30,   28,   29,    0,    0,    0,    0,    0,    0,    9,
   15,   34,    0,    0,   26,    2,   32,    0,    0,   19,
    0,    0,    0,    0,    0,   38,   37,    0,    0,    6,
    4,    0,   12,    0,    0,   35,   25,    0,    0,   21,
   20,   10,    0,    7,
};
static const YYINT yydgoto[] = {                          3,
   20,    6,    4,   26,   12,   25,   59,    5,   43,   28,
   29,   44,   13,   27,   21,   52,   34,   49,   22,   23,
   24,   47,   45,   33,
};
static const YYINT yysindex[] = {                      -205,
    0,    0,    0, -203, -257, -240,    0,    0,    0,    0,
    0, -231,    0,    0, -221,    0,    0,    0,    0, -226,
    0,    0,    0, -207, -257, -240, -201, -257, -257,    0,
    0,    0, -200, -240,    0,    0,    0, -229, -224,    0,
 -215, -210, -240, -257, -200,    0,    0, -260, -240,    0,
    0, -212,    0, -223, -210,    0,    0, -199, -240,    0,
    0,    0, -217,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -237,    0,    0,    0,    0,    0,
    0,    0,    0, -236,    0,    0,    0,    0,    0,    0,
    0,    0, -256,    0,    0,    0,    0,    0,    0,    0,
    0, -261,    0,    0, -256,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -253,    0,    0, -243,    0,    0,
    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -26,    0,    0,    0,  -24,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    8,    0,    0,    0,    0,    0,
    0,   18,    0,    0,
};
#define YYTABLESIZE 64
static const YYINT yytable[] = {                         39,
   38,    9,   35,   41,   42,   14,   39,   48,   39,   14,
   57,   39,   10,   16,   39,   11,   54,   16,   14,   55,
   15,   16,   58,   17,   27,   21,   33,   27,   18,   19,
   21,   33,   63,   21,   33,   30,   35,   50,   35,   35,
   31,   36,   31,   51,   62,   35,   14,   32,   60,   16,
   64,    1,    2,    7,    8,   53,   31,   37,   40,   61,
   46,   31,   56,   35,
};
static const YYINT yycheck[] = {                         26,
   25,  259,  263,   28,   29,  267,  263,   34,  265,  271,
  271,  268,  270,  267,  271,  273,   43,  271,  259,   44,
  261,  262,   49,  264,  268,  263,  263,  271,  269,  270,
  268,  268,   59,  271,  271,  267,  263,  267,  263,  263,
  272,  268,  272,  268,  268,  263,  259,  269,  261,  262,
  268,  257,  258,  257,  258,  271,  272,  265,  260,   52,
  261,  272,   45,  263,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#define YYUNDFTOKEN 300
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
"COMP_OP","INTEGER","MARK_PAR","ARITHM_OP","RATE_PAR","EXP","ERROR","COLON",
"SEMICOLON","POINT","OPEN","CLOSE","LOGIC_OP","NOT_OP",0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : assign",
"$$1 :",
"assign : EVER $$1 value SEMICOLON",
"$$2 :",
"assign : when_clause EVER $$2 value SEMICOLON",
"$$3 :",
"$$4 :",
"when_clause : when_clause WHEN $$3 logic_cond COLON $$4 value SEMICOLON",
"$$5 :",
"$$6 :",
"when_clause : WHEN $$5 logic_cond COLON $$6 value SEMICOLON",
"$$7 :",
"logic_cond : OPEN $$7 logic_cond CLOSE",
"$$8 :",
"logic_cond : NOT_OP $$8 logic_cond",
"$$9 :",
"logic_cond : logic_cond LOGIC_OP $$9 logic_cond",
"logic_cond : compare",
"$$10 :",
"$$11 :",
"compare : PLACE_NAME $$10 COMP_OP $$11 int_const",
"int_const : INTEGER",
"int_const : MARK_PAR",
"int_const : PLACE_NAME",
"$$12 :",
"value : OPEN $$12 value CLOSE",
"$$13 :",
"value : value ARITHM_OP $$13 value",
"value : real_val",
"real_val : real",
"real_val : int_const",
"real_val : RATE_PAR",
"real : rational EXP",
"real : rational",
"$$14 :",
"rational : INTEGER POINT $$14 mant",
"$$15 :",
"rational : POINT $$15 mant",
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
#line 222 "gsrc2/mdr_gram.y"

#include "mdr_gram.y.h"
#include "comp_rate.c"

#line 276 "objects/comp/gsrc2/mdr_gram.y.c"

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
case 1:
#line 30 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"{ double rr =\n");
	      fprintf(rsfp,"{ double rr =\n");
	    }
break;
case 2:
#line 34 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,";\n  return( rr );\n  }\n");
	      fprintf(rsfp,";\n  return( rr );\n  }\n");
	      yyin = eof;
	    }
break;
case 3:
#line 39 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"  else   rr =\n");
	      fprintf(rsfp,"  else   rr =\n");
	    }
break;
case 4:
#line 43 "gsrc2/mdr_gram.y"
	{ fprintf(rafp," ;\n  return( rr );\n  }\n");
	      fprintf(rsfp," ;\n  return( rr );\n  }\n");
	      yyin = eof;
	    }
break;
case 5:
#line 50 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"  else if (\n");
		    fprintf(rsfp,"  else if (\n");
		  }
break;
case 6:
#line 54 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"\n  )  rr =\n");
		    fprintf(rsfp,"\n  )  rr =\n");
		  }
break;
case 7:
#line 58 "gsrc2/mdr_gram.y"
	{ fprintf(rafp," ;\n");
		    fprintf(rsfp," ;\n");
		  }
break;
case 8:
#line 62 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"{ double rr;\n");
		    fprintf(rafp,"  if (\n");
		    fprintf(rsfp,"{ double rr;\n");
		    fprintf(rsfp,"  if (\n");
		  }
break;
case 9:
#line 68 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"\n  )  rr =\n");
		    fprintf(rsfp,"\n  )  rr =\n");
		  }
break;
case 10:
#line 72 "gsrc2/mdr_gram.y"
	{ fprintf(rafp," ;\n");
		    fprintf(rsfp," ;\n");
		  }
break;
case 11:
#line 78 "gsrc2/mdr_gram.y"
	{ fprintf(rafp," ( ");
		    fprintf(rsfp," ( ");
		  }
break;
case 12:
#line 82 "gsrc2/mdr_gram.y"
	{ fprintf(rafp," ) ");
		    fprintf(rsfp," ) ");
		  }
break;
case 13:
#line 86 "gsrc2/mdr_gram.y"
	{ fprintf(rafp," ! ");
		    fprintf(rsfp," ! ");
		  }
break;
case 15:
#line 91 "gsrc2/mdr_gram.y"
	{ if ( yylval == L_AND ) {
			  fprintf(rafp," && ");
			  fprintf(rsfp," && ");
			}
		      else {
			  fprintf(rafp," || ");
			  fprintf(rsfp," || ");
			}
		    }
break;
case 18:
#line 105 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"DP[%d]", yylval );
		    fprintf(rsfp,"DP[%d]", yylval );
		  }
break;
case 19:
#line 109 "gsrc2/mdr_gram.y"
	{ switch (yylval) {
		      case EQUAL_TO :
			  fprintf(rafp," == ");
			  fprintf(rsfp," == ");
			break;
		      case NOTEQUAL_TO :
			  fprintf(rafp," != ");
			  fprintf(rsfp," != ");
			break;
		      case GREATER_EQUAL :
			  fprintf(rafp," >= ");
			  fprintf(rsfp," >= ");
			break;
		      case GREATER_THAN :
			  fprintf(rafp," > ");
			  fprintf(rsfp," > ");
			break;
		      case LESS_EQUAL :
			  fprintf(rafp," <= ");
			  fprintf(rsfp," <= ");
			break;
		      case LESS_THAN :
			  fprintf(rafp," < ");
			  fprintf(rsfp," < ");
			break;
		    }
		  }
break;
case 21:
#line 140 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"%d", int_val );
		  fprintf(rsfp,"%d", int_val );
		}
break;
case 22:
#line 144 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"%d", (int)MP[yylval-1] );
		  fprintf(rsfp,"%d", (int)MP[yylval-1] );
		}
break;
case 23:
#line 148 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"DP[%d]", yylval );
		  fprintf(rsfp,"DP[%d]", yylval );
		}
break;
case 24:
#line 154 "gsrc2/mdr_gram.y"
	{ fprintf(rafp," ( ");
		  fprintf(rsfp," ( ");
		}
break;
case 25:
#line 158 "gsrc2/mdr_gram.y"
	{ fprintf(rafp," ) ");
		  fprintf(rsfp," ) ");
		}
break;
case 26:
#line 162 "gsrc2/mdr_gram.y"
	{ switch (yylval) {
		    case SUM :
			fprintf(rafp," + ");
			fprintf(rsfp," + ");
		      break;
		    case SUB :
			fprintf(rafp," - ");
			fprintf(rsfp," - ");
		      break;
		    case MUL :
			fprintf(rafp," * ");
			fprintf(rsfp," * ");
		      break;
		    case DIV :
			fprintf(rafp," / ");
			fprintf(rsfp," / ");
		      break;
		  }
		}
break;
case 31:
#line 188 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"%f", RP[yylval-1] );
		  fprintf(rsfp,"%f", RP[yylval-1] );
		}
break;
case 32:
#line 194 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"e%d", yylval );
	        fprintf(rsfp,"e%d", yylval );
	      }
break;
case 34:
#line 201 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"%d.", int_val );
		  fprintf(rsfp,"%d.", int_val );
		}
break;
case 36:
#line 206 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"0.");
		  fprintf(rsfp,"0.");
		}
break;
case 38:
#line 213 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"%d", int_val );
	      fprintf(rsfp,"%d", int_val );
	    }
break;
case 39:
#line 217 "gsrc2/mdr_gram.y"
	{ fprintf(rafp,"0");
	      fprintf(rsfp,"0");
	    }
break;
#line 693 "objects/comp/gsrc2/mdr_gram.y.c"
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
