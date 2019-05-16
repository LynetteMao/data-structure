#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

LinkNode* LinkInit(LinkNode *L){
    LinkNode *s;
    int i;
    //带有哨兵的头节点
    L=(LinkNode *)malloc(sizeof(LinkNode));
    L->next = NULL;
    for(int j=1;j<10;j++){
        s = (LinkNode *)malloc(sizeof(LinkNode));
        s->data = j;
        s->next = L->next;
        L->next = s;

    }
    return L;
}

LinkNode* LinkReturn(LinkNode *L){
    LinkNode* preNode = NULL;
    LinkNode* curNode = L;
    // LinkNode* nextNode = L->next;

    if(L== NULL||L->next ==NULL){
        printf("error\n");
    }

    // while(curNode->next!=NULL){
    //     curNode->next = preNode;
    //     preNode = curNode;
    //     curNode = nextNode;
    //     if (curNode != NULL){
    //     nextNode = curNode->next;
    //     }
    //     printf("one time\n");
    // }
    // curNode->next = preNode;
    
    while(curNode !=NULL){
        LinkNode * nextNode = curNode->next;
        curNode->next = preNode;
        preNode = curNode;
        curNode = nextNode;

    }

    return preNode;

}


LinkNode* LinkMerge(LinkNode *a,LinkNode *b){

    LinkNode *acur = a->next;
    LinkNode *bcur = b->next;
    LinkNode *apre = a;
    LinkNode *bpre = b;

    while(acur!=NULL){
        if(bcur->data<acur->data){
            bpre->next=bcur->next;
            bcur->next = acur;
            apre->next = bcur;
            apre=bcur;

            bcur = bpre->next;

        }else{
            apre=acur;
            acur=acur->next;
            bpre=bcur;
            bcur= bcur->next;
        }

    }
    if(b!=NULL){
        //把b直接插入到a链表末端
        apre->next=b->next;

    }
    return a;
}


LinkNode* LinkCentre(LinkNode *L){
    LinkNode *p=L->next;
    LinkNode *q=p;
    while(q!=NULL&&q->next!=NULL ){
        p=p->next;
        q=q->next->next;
    }
}