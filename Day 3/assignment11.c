#include <stdio.h>

int main() {
    int number;
    int lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    printf("The last digit is with modulus: %d\n", lastDigit);
    
    lastDigit = number-(10*(number/10));
    printf("The last digit is without modulus: %d\n", lastDigit);

    return 0;
}