#include <stdio.h>

int main() {
    int a[6];
    int b;
    int found = 0;
    printf("Enter 6 elements for the array:\n");
    for (int i = 0; i < 6; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number to search: ");
    scanf("%d", &b);
    
    for (int i = 0; i < 6; i++) {
        if (a[i] == b) {
            printf("Element found at index %d (position %d).\n", i, i + 1);
            found = 1; 
            break;
            
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}