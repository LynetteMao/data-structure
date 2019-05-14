
#include<stdio.h>
#include<stdlib.h>
#define LIST_MALLOW_SIZE 20
#define LIST_INIT_SIZE 100

//结构声明
struct seqList
{
    int *data;
    int MaxSize;
    int Length;
};

typedef struct seqList SeqList;


//函数原型
int ListInit(SeqList *L);
void ListAlloc(SeqList *L);
int ListInsert(SeqList *L, int e,int i);
int ListDelete(SeqList *L,int i);



  