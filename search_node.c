
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

    int n, i, key, found = 0;

    
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

    // Searching for a node
    printf("Enter element to search: ");
    scanf("%d", &key);

    temp = head;

    while (temp != NULL) {

        if (temp->data == key) {
            found = 1;
            break;
        }

        temp = temp->next;
    }

    if (found == 1)
        printf("Element found\n");
    else
        printf("Element not found\n");

    return 0;
}