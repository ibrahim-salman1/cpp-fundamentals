#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c, d, e, T, P;

    printf("Enter Your Computer Marks: ");
    scanf("%f", &a);

    printf("Enter Your Physics Marks: ");
    scanf("%f", &b);

    printf("Enter Your Maths Marks: ");
    scanf("%f", &c);

    printf("Enter Your English Marks: ");
    scanf("%f", &d);

    printf("Enter Your PST Marks: ");
    scanf("%f", &e);

    T = a + b + c + d + e;
    P = (T / 500) * 100;

    printf("\nTOTAL: %.2f", T);
    printf("\nPERCENTAGE: %.2f", P);

    if (P > 45)
    {
        printf("\nRESULT: Pass");
    }
    else
    {
        printf("\nRESULT: Fail");
    }

    getch();
    return 0;
}
