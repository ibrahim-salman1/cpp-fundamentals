#include <stdio.h>

int main() {
    int n, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (j = 2; j < n; j++) {
        if (n % j == 0) {
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}
