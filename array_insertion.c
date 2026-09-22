
#include <stdio.h>

int main() {

    int arr[100];
    int n, i, position, value;

    
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

    
    printf("\n\nEnter position where you want to insert: ");
    scanf("%d", &position);

   
    printf("Enter value to insert: ");
    scanf("%d", &value);

    
    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[position - 1] = value;

    
    n++;

    
    printf("\nArray after insertion:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}