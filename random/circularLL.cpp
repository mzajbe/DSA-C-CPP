#include<stdio.h>
#include<stdlib.h>
struct ListNode{
    int value;
    struct ListNode* next;
};

ListNode* head = NULL;
ListNode* tail = NULL;

ListNode* createListNode(int data){
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
    temp->value=data;
    temp->next=NULL;
    return temp;
}

void insertFistElement(int data){
    head = createListNode(data);
    tail=head;
    tail->next = head;
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
        temp->next = head;
        tail = temp;

    }
}

void printList(){
    printf("The element of the linked list: ");
    ListNode* i = head;
    while(i!=NULL){
        printf("%d ",i->value);
        i=i->next;
    }
    printf("\n");
}

int main(){




    return 0;
}
