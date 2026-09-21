
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    int n, i;

    // Create the linked list
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

    // Insertion at the end
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data for new node: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    // Find the last node
    temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Connect last node to new node
    temp->next = newNode;
    temp = head;

while (temp != NULL) {
    printf("%d\n", temp->data);
    temp = temp->next;
}

    return 0;
}