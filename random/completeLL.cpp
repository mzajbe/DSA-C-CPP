#include<stdio.h>
#include<stdlib.h>
struct ListNode{
    int value;
    struct ListNode* next;
};
typedef struct ListNode ListNode;
ListNode* head = NULL;
ListNode* tail = NULL;

ListNode* createListNode(int data){
    ListNode* temp;
    temp = (ListNode*)malloc(sizeof(ListNode));
    temp->value=data;
    temp->next=NULL;
    return temp;
}

void insertFirstElement(int data){
    head=createListNode(data);
    tail=head;
}
void insertFirst(int data){
    if(head == NULL){
        insertFirstElement(data);
    }
    else{
        ListNode* temp = createListNode(data);
        temp->next= head;
        head = temp;
    }
}


void printList(){
    printf("The Element of the Linked List: ");
    ListNode* i=head;
    while(i!=NULL){
        printf("%d ",i->value);
        i=i->next;
    }
    printf("\n");
}
int main(){
    insertFirst(5);
    insertFirst(5);
    insertFirst(5);
    insertFirst(6);
    printList();

    return 0;
}