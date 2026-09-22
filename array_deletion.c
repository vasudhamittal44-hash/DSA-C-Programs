
#include <stdio.h>

int main() {

    int arr[100];
    int n, i, position;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
    printf("\n\nEnter position you want to delete: ");
    scanf("%d", &position);

    
    for (i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    n--;

    
    printf("\nArray after deletion:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}