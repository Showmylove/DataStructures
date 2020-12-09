#include <stdlib.h>

#include "list.h"

BOOL _initList(UINT nLen);
BOOL _freeList(void);
BOOL _addNode(NODE_TYPE node);
BOOL _delNode(void);
BOOL _addNodeWithPos(NODE node, UINT Pos);
BOOL _delNodeWithPos(NODE node, UINT Pos);

LIST_MANAGE listManage = {
    .listMaxLen = 0,
    .pListHeather = NULL,
    .pListCurrent = NULL,
    .initList = _initList,
    .freeList = _freeList,
    .addNode = _addNode,
    .delNode = _delNode,
    .addNodeWithPos = _addNodeWithPos,
    .delNodeWithPos = _delNodeWithPos,
};

BOOL _initList(UINT nLen) {
    BOOL retVal = false;

    if(nLen <=0 || nLen > 100) {
        printf("initList para error\n");
    } else {
        listManage.listMaxLen = nLen;
        printf("initList ok, level is %d\n", nLen);
        retVal = true;
    }

    return retVal;
}

BOOL _freeList(void) {
    BOOL retVal = false;
    NODE * tempNode = NULL;
    NODE * deleteNode = NULL;

    if(NULL == listManage.pListHeather) {
        printf("list is not exist\n");
    } else {
        for(tempNode = listManage.pListHeather; NULL != tempNode; ) {
            deleteNode = tempNode;
            tempNode = tempNode->pNextNode;
            // printf("freeNode: %d\n", deleteNode->node);
            free((void *)deleteNode);
            printf("freeList ok\n");
        }
        listManage.pListHeather = NULL;
        retVal = true;
    }

    return retVal;
}

BOOL _addNode(NODE_TYPE node) {
    BOOL retVal = false;
    NODE * tempNode = NULL;

    tempNode = (NODE *)malloc(sizeof(NODE));
    if(NULL == tempNode) {
        printf("addNode malloc error\n");
    } else {
        if((NULL == listManage.pListHeather) && (NULL == listManage.pListCurrent)) {
            tempNode->node = node;
            tempNode->pNextNode = NULL;
            listManage.pListHeather = tempNode;
            listManage.pListCurrent = tempNode;
            // printf("addNode 1st ok: %d\n", tempNode->node);
            printf("addNode 1st ok\n");
        }else {
            tempNode->node = node;
            tempNode->pNextNode = NULL;
            listManage.pListCurrent->pNextNode = tempNode;
            listManage.pListCurrent = tempNode;
            // printf("addNode ok: %d\n", tempNode->node);
            printf("addNode ok\n");
        }

        retVal = true;
    }

    return retVal;
}

BOOL _delNode(void) {
    printf("delNode\n");
}

BOOL _addNodeWithPos(NODE node, UINT Pos) {
    printf("addNodeWithPos\n");
}

BOOL _delNodeWithPos(NODE node, UINT Pos) {
    printf("delNodeWithPos\n");
}
