#include<stdio.h>
#include<stdlib.h>
struct ListNode{
    int value;
    struct ListNode* prev;
    struct ListNode* next;
};

ListNode* head = NULL;
ListNode* tail = NULL;

ListNode* createListNode(int data){
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
    temp->value=data;
    temp->prev = NULL;
    temp->next=NULL;
    return temp;
}

void insertFistElement(int data){
    head = createListNode(data);
    tail=head;
}

void insertLast(int data)
{
    if(head==NULL)
    {
        insertFistElement(data);
    }
    else
    {
        ListNode* temp = createListNode(data);
        tail->next = temp;
        temp->prev= tail;
        tail = temp;
    }
}

void printList(){
    printf("The element of the linked list: ");
    ListNode* i = head;
    while(i != NULL){
        printf("%d ",i->value);
        i=i->next;
    }
    printf("\n");
}

void printReverseList(){
    printf("The elemetn of the linked list in reverse order: ");
    ListNode* i= tail;
    while(i != NULL){
        printf("%d ",i->value);
        i=i->prev;
    }
    printf("\n");
}

int main(){

    insertLast(10);
    insertLast(20);
    insertLast(30);

    printList();
    printReverseList();


    return 0;
}