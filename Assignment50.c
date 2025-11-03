#include <stdio.h>

int main() {
    int arr[] = {50, 10, 80, 20, 90, 40, 60, 30};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The array is: {50, 10, 80, 20, 90, 40, 60, 30}\n");
    printf("Maximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min);

    return 0;
}
