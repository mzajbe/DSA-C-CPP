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
}
ListNode* linerSearch(int key){
    ListNode* i = head;
    while (i!=NULL)
    {
        if(i->value==key){
            return i;
        }
        i=i->next;

    }
    return NULL;
    
}

void insertFirst(int data){
    if(head==NULL){
        insertFistElement(data);
    }
    else{
        ListNode* temp = createListNode(data);
        temp->next= head;
        head=temp;
    }
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
        tail = tail->next; /// tail = temp;
    }
}

void insertAfter(int data,int key){
    ListNode* location = linerSearch(key);
    if(location==NULL)
    return;

    ListNode* temp = createListNode(data);
    temp->next=location->next;
    location->next=temp;

    if(location == tail)
    tail = tail->next;
}

void insertBefore(int tergetValue,int newValue){

    if(head==NULL){
        return;
    }

    if(head->value == tergetValue){
        ListNode* newNode = createListNode(newValue);
        newNode->next=head;
        head = newNode;
        return;
    }

    ListNode* current = head;
    while(current->next != NULL){
        if(current->next->value == tergetValue){
            ListNode* newNode = createListNode(newValue);
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }

}

void deleteFirst(){
    if(head==NULL){
        return;
    }
    else if(head==tail){
        free(head);
        head=tail= NULL;
    }
    else{
        ListNode* temp = head;
        head = head->next;
        free(temp);
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



    insertLast(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
    insertLast(50);

    insertAfter(25,20);
    insertBefore(30,35);

    deleteFirst();
    
    printList();

    return 0;
}