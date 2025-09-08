#include <stdio.h>

int main() {
    int unit;
    int category;

    printf("Enter units: ");
    scanf("%d", &unit);

    if (unit < 0) {
        category = 0;  
    } else if (unit <= 100) {
        category = 1;
    } else if (unit <= 200) {
        category = 2;
    } else {
        category = 3;
    }

    switch(category) {
        case 0:
            printf("Invalid unit\n");
            break;
        case 1:
            printf("The bill is Rs 5/unit: %d\n", unit * 5);
            break;
        case 2:
            printf("The bill is Rs 7/unit: %d\n", unit * 7);
            break;
        case 3:
            printf("The bill is Rs 10/unit: %d\n", unit * 10);
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
