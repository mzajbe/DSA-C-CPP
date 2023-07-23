#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the double linked list
struct Node {
    int value;
    struct Node* prev;
    struct Node* next;
};

int main() {
    // Create the double linked list
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* last = NULL;

    // Create nodes and assign values
    head = (struct Node*)malloc(sizeof(struct Node));
    temp = (struct Node*)malloc(sizeof(struct Node));
    last = (struct Node*)malloc(sizeof(struct Node));

    head->value = 27;
    head->prev = NULL;
    head->next = temp;

    temp->value = 57;
    temp->prev = head;
    temp->next = last;

    last->value = 113;
    last->prev = temp;
    last->next = NULL;

    // Answer the questions
    int value;

    // a) head->next->next->value = ?
    value = head->next->next->value;
    printf("a) head->next->next->value = %d\n", value);

    // b) last->prev->next->value = ?
    value = last->prev->next->value;
    printf("b) last->prev->next->value = %d\n", value);

    // c) temp->prev->prev->prev = ?
    struct Node* resultC = temp->prev->prev->prev;
    printf("c) temp->prev->prev->prev = %p\n", resultC);

    // d) temp->next->prev->prev->value = ?
    value = temp->next->prev->prev->value;
    printf("d) temp->next->prev->prev->value = %d\n", value);

    // e) last->prev->prev->next->value = ?
    value = last->prev->prev->next->value;
    printf("e) last->prev->prev->next->value = %d\n", value);

    

    return 0;
}
