#ifndef __LIST_H__
#define __LIST_H__

#include "type.h"

#define DEBUG = false;

typedef INT NODE_TYPE;

typedef struct _NODE {
    NODE_TYPE node;
    struct _NODE * pNextNode;
}NODE;

typedef BOOL (*pInitList)(UINT nLen);
typedef BOOL (*pFreeList)(void);
typedef BOOL (*pAddNode)(NODE_TYPE node);
typedef BOOL (*pDelNode)(void);
typedef BOOL (*pAddNodeWithPos)(NODE node, UINT Pos);
typedef BOOL (*pDelNodeWithPos)(NODE node, UINT Pos);

typedef struct _NODE_MANAGE {
    INT listMaxLen;
    NODE * pListHeather;
    NODE * pListCurrent;
    pInitList initList;
    pFreeList freeList;
    pAddNode addNode;
    pDelNode delNode;
    pAddNodeWithPos addNodeWithPos;
    pDelNodeWithPos delNodeWithPos;
}LIST_MANAGE;

extern LIST_MANAGE listManage;

#endif