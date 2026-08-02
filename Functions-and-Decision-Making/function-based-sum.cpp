#include <stdio.h>
#include <conio.h>

int sum1(int a, int b)
{
    return a + b;
}

int main()
{
    int c, d, e;

    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &c, &d);

    e = sum1(c, d);
    printf("Sum = %d", e);

    getch();
}
