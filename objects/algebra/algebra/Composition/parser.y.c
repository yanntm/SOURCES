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

#line 4 "algebra/Composition/parser.y"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  
  int yylex();
  void yyerror(const char*);


  struct Desc{
    char *wholetag;             /* whole tag;*/
    char *tag;                  /* tag of transition (first part);*/
    char **labels;              /* labels of transition;*/
    int nl;                     /* number of labels;*/
    char *end;                  /* string to distinguish;*/
    struct Desc *next;
  };

  struct RestSet{
    char **labels;     /* Labels that are synchronized*/
    int nl;            /* number of labels*/
  };

  int istrrest;

  extern int Tr_or_Pl;                    /* Tr. or Pl under parsing*/
  extern int Tr_Rest;                     /* is there restriction on labels of tr-s*/
  extern int Pl_Rest;                     /* is there restriction on labels of pl-s*/
  extern struct RestSet PlaceRest;        /* Labels of places to be sybchronised*/
  extern struct RestSet TransRest;        /* Labels of transitions to be sybchronised*/
  extern struct Desc *PDesc;
  extern int Restriction;
  extern char *rlabels[20];

  void Copy_Name(char *str)
    {
      PDesc->tag=(char *)malloc(sizeof(char)*(strlen(str)+1));
      strcpy(PDesc->tag,str);
    }
  
  void Copy_End(char *str)
    {
      PDesc->end=(char *)malloc(sizeof(char)*(strlen(str)+1));
      strcpy(PDesc->end,str);
    }

  void Copy_Label(char *str)
    {
      int rest,ii;
      int isrest;
      struct RestSet *R;

      isrest=Tr_Rest;
      R=&TransRest;
      if(Tr_or_Pl==0)
	{
	  isrest=Pl_Rest;
	  R=&PlaceRest;
	}

      if(!isrest) { rest=0;}
      else
	{
	  rest=1;
	  for(ii=0;ii<R->nl;ii++)
	    if(strcmp(R->labels[ii],str)==0) rest=0;
	}
      if(!rest)
	{
	  if(PDesc->nl==0)
	    {PDesc->labels=(char **)malloc(sizeof(char *)*10);}
	  PDesc->labels[PDesc->nl]=(char*)malloc(sizeof(char)*(strlen(str)+1)); 	 
          strcpy(PDesc->labels[PDesc->nl],str);
 	  PDesc->nl++;
	}
    }

  void Fill_Rest(char *str)
    {
      struct RestSet *R;

      if(istrrest) { R=&TransRest; }
      else { R=&PlaceRest; }
      if(R->nl==0)
	{R->labels=(char **)malloc(sizeof(char *)*100);}
      R->labels[R->nl]=(char *)malloc(sizeof(char)*(strlen(str)+1));
      strcpy(R->labels[R->nl],str);
      R->nl++; 
    }
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 94 "algebra/Composition/parser.y"
typedef union {
  char *SVal; } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 120 "objects/algebra/algebra/Composition/parser.y.c"

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

#define ID 257
#define BAR 258
#define NEWLINE 259
#define B_WAVE 260
#define E_WAVE 261
#define EQUAL 262
#define PL 263
#define TR 264
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    3,    3,    4,    5,    2,    7,    2,    6,    6,    6,
    8,
};
static const YYINT yylen[] = {                            2,
    1,    1,    6,    5,    2,    4,    1,    2,    3,    4,
    1,    3,    1,    0,    6,    0,    6,    0,    1,    3,
    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,   16,   14,    0,    1,    2,    0,   13,    0,
   11,    0,    0,    0,    0,    0,    0,    0,   10,    0,
    0,   12,    0,    0,    0,    4,   21,    0,   19,    0,
    3,    0,   17,   15,   20,
};
static const YYINT yydgoto[] = {                          5,
    6,    7,   10,   11,   13,   28,   12,   29,
};
static const YYINT yysindex[] = {                      -257,
 -255, -246,    0,    0,    0,    0,    0, -243,    0, -238,
    0, -240, -237, -236, -235, -241, -234, -233,    0, -239,
 -229,    0, -228, -228, -227,    0,    0, -256,    0, -249,
    0, -228,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
   24,    0,    0,    0,    0,    0,    0,   31,    0,   32,
    0,    0,    0,    0,   33,    0,    0,    0,    0,    0,
   34,    0, -248, -248,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,   27,  -12,    0,   12,    0,    5,
};
#define YYTABLESIZE 37
static const YYINT yytable[] = {                          1,
    2,   32,    8,   22,   33,    3,    4,   22,   32,   18,
    9,   34,   18,    9,   14,    9,   21,    9,   25,   16,
   19,   17,   20,    7,   18,   23,   24,   26,   27,   31,
    8,    5,    9,    6,   15,   30,   35,
};
static const YYINT yycheck[] = {                        257,
  258,  258,  258,   16,  261,  263,  264,   20,  258,  258,
  257,  261,  261,  257,  258,  257,  258,  257,  258,  258,
  257,  262,  258,    0,  262,  260,  260,  257,  257,  257,
    0,    0,    0,    0,    8,   24,   32,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 264
#define YYUNDFTOKEN 275
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","BAR","NEWLINE","B_WAVE",
"E_WAVE","EQUAL","PL","TR",0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : string",
"string : fulltag",
"string : set_of_labels",
"fulltag : ID BAR labels BAR BAR ID",
"fulltag : BAR labels BAR BAR ID",
"fulltag : BAR labels",
"fulltag : BAR labels BAR BAR",
"fulltag : ID",
"fulltag : ID BAR",
"fulltag : ID BAR labels",
"fulltag : ID BAR BAR ID",
"labels : label",
"labels : labels BAR label",
"label : ID",
"$$1 :",
"set_of_labels : TR $$1 EQUAL B_WAVE rlabels E_WAVE",
"$$2 :",
"set_of_labels : PL $$2 EQUAL B_WAVE rlabels E_WAVE",
"rlabels :",
"rlabels : rlabel",
"rlabels : rlabels BAR rlabel",
"rlabel : ID",

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
#line 136 "algebra/Composition/parser.y"










































#line 338 "objects/algebra/algebra/Composition/parser.y.c"

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
case 3:
#line 112 "algebra/Composition/parser.y"
	{Copy_Name(yystack.l_mark[-5].SVal); Copy_End(yystack.l_mark[0].SVal);}
break;
case 4:
#line 113 "algebra/Composition/parser.y"
	{Copy_End(yystack.l_mark[0].SVal);}
break;
case 7:
#line 116 "algebra/Composition/parser.y"
	{Copy_Name(yystack.l_mark[0].SVal);}
break;
case 8:
#line 117 "algebra/Composition/parser.y"
	{Copy_Name(yystack.l_mark[-1].SVal);}
break;
case 9:
#line 118 "algebra/Composition/parser.y"
	{Copy_Name(yystack.l_mark[-2].SVal);}
break;
case 10:
#line 119 "algebra/Composition/parser.y"
	{Copy_Name(yystack.l_mark[-3].SVal);Copy_End(yystack.l_mark[0].SVal);}
break;
case 13:
#line 124 "algebra/Composition/parser.y"
	{Copy_Label(yystack.l_mark[0].SVal);}
break;
case 14:
#line 126 "algebra/Composition/parser.y"
	{istrrest=1; Tr_Rest=1;}
break;
case 16:
#line 127 "algebra/Composition/parser.y"
	{istrrest=0; Pl_Rest=1;}
break;
case 21:
#line 133 "algebra/Composition/parser.y"
	{Fill_Rest(yystack.l_mark[0].SVal);}
break;
#line 577 "objects/algebra/algebra/Composition/parser.y.c"
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
