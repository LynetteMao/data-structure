#include <stdio.h>
#include "SequenceList.h"

int main(){
    SeqList *L;
    int i;
    int e;
    printf("hello world\n");
    int test=ListInit(L);
    printf("%d",test);
    printf("the list length is %d\n",L->Length);

    ListInsert(L,9,3);
    printf("%d",L->data[2]);

    ListDelete(L,3);
    printf("%d",L->data[2]);
}