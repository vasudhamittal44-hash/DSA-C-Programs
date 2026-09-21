
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
    struct Node *deleteNode = NULL;

    int n, i ,position ;   

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
    printf("Enter position to delete: ");
scanf("%d", &position);

    if (position == 1) {

        temp = head;
        head = head->next;
        free(temp);
    }

     else {

        temp = head;

        for (i = 1; i < position - 1; i++) {
            temp = temp->next;
        }

         deleteNode = temp->next;

        temp->next = deleteNode->next;

        
        free(deleteNode);
    }

    
    temp = head;

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}