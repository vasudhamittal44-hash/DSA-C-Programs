
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

    int n, i,position;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Creating the linked list
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
    // Create new node
newNode = (struct Node *)malloc(sizeof(struct Node));
printf("Enter position: ");
        scanf("%d",&position);

printf("Enter data for new node: ");
    scanf("%d", &newNode->data);


// If position is 1
if (position == 1) {
    newNode->next = head;
    head = newNode;
}
else {
    temp = head;

    // Move to the node before the required position
    for (i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    // Insert the new node
    newNode->next = temp->next;
    temp->next = newNode;
}

    // Traversal
    temp = head;

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}