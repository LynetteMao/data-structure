#include "SequenceList.h"
#include <stdio.h>


//初始化
int ListInit(SeqList *L){
        
    L->data = (int *)malloc(sizeof(int)*LIST_INIT_SIZE);
    printf("hi");
    if(!L->data){
        return 0;
    }
    L->MaxSize = LIST_INIT_SIZE;
    L->Length = 0;

    int j=1;
    for(int i=0;i<10;i++){
        L->data[i]=j;
        j++;
    }
    L->Length = 10;

    return 1;
}
//当容量满了的时候扩容
void ListAlloc(SeqList *L){
    L->data = (int *)malloc(sizeof(int)*LIST_MALLOW_SIZE);
}
int ListInsert(SeqList *L,int e,int i){
    if (L->Length>=L->MaxSize){
        ListAlloc(L);
    }
    if(i>L->Length+1||i<1){
        return 0;
    }
    for(int j=L->Length;j>=i;j--){
        L->data[j]=L->data[j-1];
    }
    L->data[i-1]=e;
    L->Length++;
    return 1;
}

int ListDelete(SeqList *L,int i){
    if(L->Length<=0){
        return 0;
    }
    if(i<1||i>=L->Length){
        return 0;
    }
    for(int j=i;j<L->Length;j++){
        L->data[j-1]=L->data[j];
    }
    L->Length --;
    return 1;
}