#include <stdio.h>

int main() {
    int a, b, c;

    printf("\tENTER THREE NUMBERS\n\n");

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
        printf("\n%d is the greatest number.\n", a);
    else if (b >= a && b >= c)
        printf("\n%d is the greatest number.\n", b);
    else
        printf("\n%d is the greatest number.\n", c);

    return 0;
}

