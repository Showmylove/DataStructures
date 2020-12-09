#ifndef __STACK_H__
#define __STACK_H__

#include "type.h"

#define STACK_MAX_SIZE   50
#define STACK_START_ADDR 0

typedef INT STACK_TYPE;

typedef BOOL (*pInitStack)(UINT sLevel);
typedef BOOL (*pDestoryStack)(void);
typedef BOOL (*pPushStack)(STACK_TYPE stack);
typedef BOOL (*pPopStack)(STACK_TYPE * stack);

typedef struct _STACK_MANAGE {
    pInitStack initStack;
    pDestoryStack destoryStack;
    pPushStack pushStack;
    pPopStack popStack;
}STACK_MANAGE;

extern STACK_MANAGE stackManage;

#endif
