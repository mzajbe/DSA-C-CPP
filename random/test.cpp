#include<stdio.h>
#include<stdlib.h>
struct ListNode{
    int data;
    struct ListNode* next;
};

ListNode* head = NULL;
ListNode* tail = NULL;

// ListNode* createListNode(int data){
//     ListNode* temp = (ListNode*)malloc(sizeof(ListNode*));
//     temp->value=data;
//     temp->next=NULL;
//     return temp;
// }

int main(){
    ListNode* start = (ListNode*)malloc(sizeof(ListNode));
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
    ListNode* temp1= (ListNode*)malloc(sizeof(ListNode));

    printf("%d ",start->data=10);
    printf("%d ",temp->data=40);
    printf("%d ",temp1->data=30);
    printf("%d ",start->next=temp1);



    return 0;
}