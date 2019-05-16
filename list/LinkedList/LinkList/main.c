#include <stdio.h>
#include "LinkedList.h"

void main(){
    LinkNode *L;
    LinkNode *head;
    L = LinkInit(L);
    printf("hello");
    while(L->next != NULL){
        L=L->next;
        printf("test:%d",L->data); 
    }

    // head = LinkReturn(L);
    
    //     while(head->next != NULL){
    //     head=head->next;
    //     printf("return:%d",head->data); 
    // }
}