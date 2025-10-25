// Insert a Node at the End of a Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *head = NULL;

// Function to create the linked list
void create(int A[], int n) {
    int i;
    struct Node *t, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Function to display the linked list
void Display(struct Node *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// Function to insert a node at the end
void InsertLast(int x) {
    struct Node *t, *last;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (head == NULL) {
        head = t;
    } else {
        last = head;
        while (last->next != NULL)
            last = last->next;
        last->next = t;
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    
    printf("Original Linked List: ");
    Display(head);

    InsertLast(60);
    printf("After inserting 60 at the end: ");
    Display(head);

    InsertLast(70);
    printf("After inserting 70 at the end: ");
    Display(head);

    return 0;
}
