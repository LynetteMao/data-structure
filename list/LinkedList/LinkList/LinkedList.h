
#include<stdio.h>

//结构声明
//单链表和循环链表的结构
struct linkNode{
    int data;
    struct linkNode *next;
};


typedef struct linkNode LinkNode;



//函数
//为了便于表示，全部都采用带有哨兵结点的结构

LinkNode* LinkInit(LinkNode *L);
void LinkInsert(LinkNode *L,int i,int e);
void LinkDelete(LinkNode *L,int i);
//RUL算法实现
void RUL(LinkNode *L);

//单链表反转
LinkNode* LinkReturn(LinkNode *L);
//有序链表合并
LinkNode* LinkMerge(LinkNode *a,LinkNode *b);

//快慢指针找中点
LinkNode* LinkCentre(LinkNode *L);

//链表中环的检测

//检测是否是回文
int IsPalNum(LinkNode *L);

