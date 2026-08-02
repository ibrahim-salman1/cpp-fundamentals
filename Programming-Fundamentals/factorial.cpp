#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;  // use long long to handle large results

    // Input number from user
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Display result
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}
