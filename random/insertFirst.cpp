#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    node* next;
};

node* head = NULL;
node* tail = NULL;

node* createListNode(int value){
    node* temp = (node*)malloc(sizeof(node));
    temp->data=value;
    temp->next=NULL;
    return temp;
}
void insertList(int value){
    if(head==NULL){
        head=createListNode(value);
        tail=head;
    }
    else{
        node* temp = createListNode(value);
        tail->next=temp;
        tail=tail->next;
    }
}

void insertFirst(int value){
    node* temp = createListNode(value);
    temp->next = head;
    head=temp;
    if(tail==NULL){
        tail=head;
    }
}
void printList(){
    node* temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}

int main(){
    insertList(2);
    insertList(5);
    insertFirst(1);

    printList();

    return 0;
}