#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int value;
    ListNode *next;
    ListNode *prev;
};

typedef ListNode ListNode;

ListNode *head = NULL;
ListNode *tail = NULL;

ListNode *createListNode(int data)
{
    ListNode *temp;
    temp = (ListNode *)malloc(sizeof(ListNode));
    temp->value = data;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
ListNode *linearSearch(int key)
{
    ListNode *i = head;
    while (i != NULL)
    {
        if (i->value == key)
        {
            return i;
        }
        i = i->next;
    }
    return NULL;
}

void insertFirstElement(int data){
    head = createListNode(data);
    tail = head;
}
void insertLast(int data){
    if(head==NULL){
        insertFirstElement(data);
    }
    else{
        ListNode* temp = createListNode(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertFirst(int data){
    if(head==NULL){
        insertFirstElement(data);
    }
    else{
        ListNode* temp = createListNode(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAfter(int data,int key){
    ListNode* location = linearSearch(key);
    if(location == NULL){
        return;
    }
    ListNode* temp = createListNode(data);
    temp->next = location->next;
    location->next = temp;
    temp->prev = location;
    if(location==tail){
        tail = tail->next;
    }
}
void printList(){
    ListNode* current = head;
    while(current != NULL){
        printf("%d ",current->value);
        current = current->next;
    }
    printf("\n");
}
void deleteFirst(){
    if(head==NULL){
        return;
    }
    else if(head == tail){
        free(head);
        head = tail = NULL;
    }
    else{
        ListNode* temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }

}
void deleteLast(){
    if(tail==NULL){
        return;
    }
    else if(head==tail){
        free(head);
        head=tail=NULL;
    }
    else{
        ListNode* temp = tail;
        tail=tail->prev;
        tail->next=NULL;
        free(temp);
    }
}
void deleteKey(int key)
{
    if(head==NULL)
        return;
    else if(head==tail)
    {
        if(head->value==key)
            deleteFirst();
    }
    else
    {
        if(head->value==key)
            deleteFirst();
        else
        {
            ListNode*i=head;
            while(i!=NULL && i->value!=key)
            {
                i=i->next;
            }
            if(i==NULL)
                return;
            else
            {
                i->prev->next=i->next;
                if(i->next)
                    i->next->prev=i->prev;
                if(i==tail)
                    tail=i->prev;
                free(i);
            }
        }
    }
}

int main(){
    insertLast(1);
    insertFirst(0);
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertLast(2);
    insertAfter(3,2);
    deleteFirst();
    deleteLast();
    deleteKey(2);
    deleteKey(10);
    deleteKey(0);



    printList();
    return 0;
}