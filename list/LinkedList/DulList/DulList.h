#include <stdio.h>

//双向链表的结构
struct dulNode{
    int data;
    struct dulNode *pre;
    struct dulNode *next;
};
typedef struct dulNode DulNode;