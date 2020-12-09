#include <stdlib.h>

#include "list.h"
#include "stack.h"

#define TEST_LIST_SIZE  10
#define TEST_STACK_SIZE 5

void main(INT argc, char **argv) {
    STACK_TYPE temp = 0;

    if(false == listManage.initList(TEST_LIST_SIZE)) {
        printf("test list init error\n");
    } else {
        listManage.freeList();
    }

    if(false == stackManage.initStack(TEST_STACK_SIZE)) {
        printf("test stack init error\n");
    } else {
        stackManage.pushStack(-10000);
        stackManage.pushStack(9999);
        stackManage.pushStack(8888);
        stackManage.pushStack(7777);
        stackManage.pushStack(6666);
        stackManage.pushStack(5555);
        stackManage.destoryStack();
    }

    printf("this is a study program\n");
}