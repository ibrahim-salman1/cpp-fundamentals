#include <stdio.h>

int main() {
    int num, i;

    // Input number from user
    printf("Enter a number to generate its table: ");
    scanf("%d", &num);

    // Display multiplication table
    printf("\nMultiplication Table of %d\n", num);
    printf("------------------------------\n");

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
