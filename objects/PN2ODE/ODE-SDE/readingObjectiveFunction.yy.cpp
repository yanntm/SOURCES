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
#line 17 "readingObjectiveFunction.yy.c"
#include "readingObjectiveFunction.yy.i"
#include "readingObjectiveFunction.yy.h"
typedef short YYINT;
static const YYINT mmlhs[] = {                           -1,
    0,    0,    2,    2,    2,    2,    2,    2,    1,    1,
    6,    6,    6,    6,    5,    5,    4,    4,    7,    8,
    9,    3,
};
static const YYINT mmlen[] = {                            2,
    2,    2,    3,    1,    1,    3,    1,    3,    4,    3,
    1,    1,    1,    1,    2,    3,    1,    1,    1,    1,
    1,    1,
};
static const YYINT mmdefred[] = {                         0,
    0,   18,    0,   21,   19,   22,    0,    4,    0,    0,
    5,    7,    0,    0,   15,    0,   11,   12,   13,   14,
    2,    0,    1,    0,    0,   16,    3,    6,    8,   20,
   10,    0,    9,
};
static const YYINT mmdgoto[] = {                          7,
    8,    9,   10,   11,   12,   22,   13,   31,   14,
};
static const YYINT mmsindex[] = {                      -256,
 -255,    0, -252,    0,    0,    0,    0,    0, -237, -261,
    0,    0, -231, -253,    0, -249,    0,    0,    0,    0,
    0, -231,    0, -225, -231,    0,    0,    0,    0,    0,
    0, -225,    0,
};
static const YYINT mmrindex[] = {                         0,
 -246,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
static const YYINT mmgindex[] = {                         0,
   -5,  -13,    0,   -4,   -2,    0,   14,   -1,    0,
};
#define YYTABLESIZE 40
static const YYINT mmtable[] = {                         24,
    1,    2,   15,    3,   16,   23,    4,    5,   26,    6,
    5,   32,   17,   17,   17,   17,   27,   28,   17,   29,
   17,   17,   18,   19,   20,    1,    2,   25,    3,   21,
   33,    4,    5,   17,   18,   19,   20,    0,    0,   30,
};
static const YYINT mmcheck[] = {                         13,
  257,  258,  258,  260,  257,  267,  263,  264,  258,  266,
  264,   25,  259,  260,  261,  262,   22,   22,  265,   22,
  267,  259,  260,  261,  262,  257,  258,   14,  260,  267,
   32,  263,  264,  259,  260,  261,  262,   -1,   -1,  265,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 267
#define YYUNDFTOKEN 279
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const mmname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"FLOAT","PLACE","PLUS","MINUS",
"MULT","DIV","FUNCT","BOPEN","BCLOSE","STRING","ENDLINE",0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const mmrule[] = {
"$accept : objfunc",
"objfunc : com ENDLINE",
"objfunc : exp ENDLINE",
"exp : exp op fun",
"exp : fun",
"exp : base",
"exp : exp op base",
"exp : composite",
"exp : exp op composite",
"fun : funct bracketO exp bracketC",
"fun : bracketO exp bracketC",
"op : PLUS",
"op : MINUS",
"op : MULT",
"op : DIV",
"composite : FLOAT PLACE",
"composite : MINUS FLOAT PLACE",
"base : FLOAT",
"base : PLACE",
"bracketO : BOPEN",
"bracketC : BCLOSE",
"funct : FUNCT",
"com : STRING",

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
#line 124 "ODE-SDE/readingObjectiveFunction.yy"
	{t= new tree(yystack.l_mark[-1].Node);
                      ObjFuncParsed = t->toString();}
break;
case 2:
#line 126 "ODE-SDE/readingObjectiveFunction.yy"
	{t= new tree(yystack.l_mark[-1].Node);
                      ObjFuncParsed = t->toString();}
break;
case 3:
#line 133 "ODE-SDE/readingObjectiveFunction.yy"
	{ yyval.Node = new expression_node(yystack.l_mark[-1].pVar,yystack.l_mark[-2].Node,yystack.l_mark[0].Node);}
break;
case 4:
#line 134 "ODE-SDE/readingObjectiveFunction.yy"
	{yyval.Node = new expression_node("funct",yystack.l_mark[0].Node,nullptr);}
break;
case 5:
#line 135 "ODE-SDE/readingObjectiveFunction.yy"
	{yyval.Node = new expression_node("base",yystack.l_mark[0].Node,nullptr);}
break;
case 6:
#line 136 "ODE-SDE/readingObjectiveFunction.yy"
	{yyval.Node = new expression_node(yystack.l_mark[-1].pVar,yystack.l_mark[-2].Node,yystack.l_mark[0].Node);}
break;
case 7:
#line 137 "ODE-SDE/readingObjectiveFunction.yy"
	{yyval.Node = new expression_node("compos",yystack.l_mark[0].Node,nullptr);}
break;
case 8:
#line 138 "ODE-SDE/readingObjectiveFunction.yy"
	{yyval.Node = new expression_node(yystack.l_mark[-1].pVar,yystack.l_mark[-2].Node,yystack.l_mark[0].Node);}
break;
case 9:
#line 145 "ODE-SDE/readingObjectiveFunction.yy"
	{ yyval.Node= new function_node(yystack.l_mark[-3].pVar,yystack.l_mark[-1].Node);}
break;
case 10:
#line 146 "ODE-SDE/readingObjectiveFunction.yy"
	{yyval.Node= new function_node("",yystack.l_mark[-1].Node);}
break;
case 11:
#line 152 "ODE-SDE/readingObjectiveFunction.yy"
	{/*std::cout<<"+";*/
		 yyval.pVar = yystack.l_mark[0].pVar;}
break;
case 12:
#line 154 "ODE-SDE/readingObjectiveFunction.yy"
	{/*std::cout<<"-";*/
		 yyval.pVar = yystack.l_mark[0].pVar;}
break;
case 13:
#line 156 "ODE-SDE/readingObjectiveFunction.yy"
	{/*std::cout<<"*";*/
		 yyval.pVar = yystack.l_mark[0].pVar;}
break;
case 14:
#line 158 "ODE-SDE/readingObjectiveFunction.yy"
	{/*std::cout<<"/";*/
		 yyval.pVar = yystack.l_mark[0].pVar;}
break;
case 15:
#line 167 "ODE-SDE/readingObjectiveFunction.yy"
	{

			    auto iter = Place2Int.find(yystack.l_mark[0].pVar);

                if(iter != Place2Int.end()) {
                    yyval.Node= new composite_node(new num_node(yystack.l_mark[-1].num),new var_node(iter->second+2,array_name));
                    /*std::cout<<$1<<$2;*/
                }
                else {
                    cerr << "\n*****Error, no such place called like "<<yystack.l_mark[0].pVar<<" *****\n" << endl;
                    exit(EXIT_FAILURE);
                }
			}
break;
case 16:
#line 180 "ODE-SDE/readingObjectiveFunction.yy"
	{
                auto iter = Place2Int.find(yystack.l_mark[0].pVar);

                if(iter != Place2Int.end()) {
                    yyval.Node= new composite_node(new num_node(-1*yystack.l_mark[-1].num),new var_node(iter->second+2,array_name));
                    /*std::cout<<$1<<$2;*/
                }
                else {
                    cerr << "\n*****Error, no such place called like "<<yystack.l_mark[0].pVar<<" *****\n" << endl;
                    exit(EXIT_FAILURE);
                }
        }
break;
case 17:
#line 198 "ODE-SDE/readingObjectiveFunction.yy"
	{/*std::cout<<$1;*/
		 yyval.Node = new num_node(yystack.l_mark[0].num);}
break;
case 18:
#line 200 "ODE-SDE/readingObjectiveFunction.yy"
	{
			    auto iter = Place2Int.find(yystack.l_mark[0].pVar);
                if(iter != Place2Int.end()) {
                    yyval.Node= new var_node(iter->second+2,array_name);
                    /*std::cout<<$1;*/
                }
                else {
                    cerr << "\n*****Error, no such place called like "<<yystack.l_mark[0].pVar<<" *****\n" << endl;
                    exit(EXIT_FAILURE);
                }
            }
break;
case 19:
#line 216 "ODE-SDE/readingObjectiveFunction.yy"
	{/*std::cout<<"(";*/
		 /*$$ = $1;*/
}
break;
case 20:
#line 224 "ODE-SDE/readingObjectiveFunction.yy"
	{/*std::cout<<")";*/
		 /*$$ = $1;*/
}
break;
case 21:
#line 231 "ODE-SDE/readingObjectiveFunction.yy"
	{/*std::cout<<$1;*/
	      yyval.pVar = yystack.l_mark[0].pVar;}
break;
case 22:
#line 238 "ODE-SDE/readingObjectiveFunction.yy"
	{/*std::cout<<$1<<std::endl;*/
		yyval.Node=new comment_node(yystack.l_mark[0].pVar);}
break;
#line 564 "readingObjectiveFunction.yy.c"
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
