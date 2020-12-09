#include <stdlib.h>

#include "type.h"
#include "stack.h"

typedef STACK_TYPE * pSTACK_TYPE;

BOOL _initStack(UINT sLevel);
BOOL _destoryStack(void);
BOOL _pushStack(STACK_TYPE stack);
BOOL _popStack(STACK_TYPE * stack);

pSTACK_TYPE STACK_BOTTOM;
pSTACK_TYPE STACK_TOP;

INT STACK_OFFSET = 0;
INT STACK_REALITY_SIZE = 0;

STACK_MANAGE stackManage = {
    .initStack = _initStack,
    .destoryStack = _destoryStack,
    .pushStack = _pushStack,
    .popStack = _popStack,
};

BOOL _initStack(UINT sLevel) {
    BOOL retVal = false;
    pSTACK_TYPE tempStack = NULL;

    if(sLevel <= STACK_MAX_SIZE) {
        tempStack = (pSTACK_TYPE)malloc(sLevel);
        if(NULL == tempStack) {
            printf("stack init malloc error\n");
        } else {
            STACK_REALITY_SIZE = sLevel;
            STACK_BOTTOM = tempStack;
            printf("stack init ok, level is %d\n", sLevel);
            retVal = true;
        }
    } else {
        printf("stack init level error\n");
    }

    return retVal;
}

BOOL _destoryStack(void) {
    BOOL retVal = false;

    if(NULL == STACK_BOTTOM) {
        printf("stack is not exist\n");
    } else {
        free(STACK_BOTTOM);
        STACK_BOTTOM = NULL;
        printf("stack free ok\n");
        retVal = true;
    }

    return retVal;
}

BOOL _pushStack(STACK_TYPE stack) {
    BOOL retVal = false;
    pSTACK_TYPE temp;

    if(STACK_OFFSET >= STACK_REALITY_SIZE) {
        printf("stack push error\n");
    } else {
        temp = STACK_BOTTOM + STACK_OFFSET;
        *temp = stack;
        ++STACK_OFFSET;
        printf("stack push ok\n");
        retVal = true;
    }

    return retVal;
}

BOOL _popStack(STACK_TYPE * stack) {
    BOOL retVal = false;
    pSTACK_TYPE temp;

    if(STACK_OFFSET <= STACK_START_ADDR) {
        printf("stack pop error\n");
    } else {
        --STACK_OFFSET;
        temp = STACK_BOTTOM + STACK_OFFSET;
        *stack = *temp;
        printf("stack pop ok\n");
        retVal = true;
    }

    return retVal;
}