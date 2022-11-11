#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "doubly_link_ADT.h"

int main()
{
    struct Node* head=NULL;
    insert_First(&head,855,"Ahmet","Varli","BM",3);
    insert_First(&head,4,"Mehmet","Zaman","BM",1);
    insert_First(&head,6,"Zambak","Zor","Orman Muhendisligi",2);
    insert_Last(&head,7,"Joseph","Stalin","Nukleer Muhendisligi",2);
    insert_After(head->next,8,"Franklin","Roosevelt","Ucak Muhendisligi",2);
    printList(head);

    search_node(head,4);

    printList(head);

    search_node(head,7);

    deleteNode(head,head->next);

    printList(head);

    destroyList(head);

    printList(head);

    return 0;
}
