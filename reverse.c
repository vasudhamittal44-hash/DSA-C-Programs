
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to print linked list in reverse
void printReverse(struct Node *head) {

    if (head == NULL) {
        return;
    }

    printReverse(head->next);

    printf("%d\n", head->data);
}

int main() {

    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {

        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    
    printReverse(head);

    return 0;
}