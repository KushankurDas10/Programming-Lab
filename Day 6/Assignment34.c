#include<stdio.h>
int main(){
	int n, f = 0, s = 1, next, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms: ", n);
    if (n <= 0) {
        printf("Invalid input.\n");
    } else if (n == 1) {
        printf("%d\n", f);
    } else {
        printf("%d, %d", f, s);
        for (i = 2; i < n; i++) {
            next = f + s;
            printf(", %d", next);
            f = s;
            s = next;
        }
        printf("\n");
    }
}