//
//      ......
//     .
//     .
//       ....   Syntax Sugar for you...
//           .
//           .
//     ......
//
//-----------------------------------
//      ssDefines

#ifndef SS_DEFINES_AZAZA
#define SS_DEFINES_AZAZA

#define ssFunction(NAME, VARIABLES, CODE, RETURN_TYPE) \
RETURN_TYPE NAME VARIABLES {  CODE  }

#define ssClass(NAME, TYPE, CODE) \
    struct NAME { TYPE : CODE  }

#define ssCheck(COND, STATEMENT_CODE, ELESWERE_CODE) \
    if(COND) {STATEMENT_CODE} else {ELESWERE_CODE}

#define ssArray(NAME, TYPE) TYPE NAME
#define ssArrayV(NAME, TYPE, VALUE) TYPE NAME = VALUE

#define ssPrintF (STATES) cout<<STATES;

#define ssVariableV(NAME, TYPE, VALUE) TYPE NAME = VALUE;
#define ssVariable(NAME, TYPE)        TYPE NAME;

#define ssInteger int
#define ssConstruct(NAME, VARIABLES, CODE) \
    NAME VARIABLES {  CODE  }
#define ssDestruct(NAME, VARIABLES, CODE) \
    ~ NAME VARIABLES {  CODE  }
#define ssOperator(RETURN_TYPE, OPERATOR , VARIABLES , CODE) RETURN_TYPE operator OPERATOR VARIABLES {CODE}

#endif

