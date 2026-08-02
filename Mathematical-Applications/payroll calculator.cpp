#include <stdio.h>
#include <conio.h>

int main()
{
    float basic_pay;
    float medical_allowance;
    float conveyance_allowance;
    float house_rent;
    float gross_pay;
    float gp_deduction;
    float net_pay;

    printf(" Enter basic pay: ");
    scanf("%f", &basic_pay);

    medical_allowance = 0.15 * basic_pay;
    conveyance_allowance = 0.20 * basic_pay;
    house_rent = 0.45 * basic_pay;

    gross_pay = basic_pay + medical_allowance + conveyance_allowance + house_rent;
    gp_deduction = 0.07 * gross_pay;
    net_pay = gross_pay - gp_deduction;

    printf("\n Medical Allowance = %.2f\n", medical_allowance);
    printf(" Conveyance Allowance = %.2f\n", conveyance_allowance);
    printf(" House Rent = %.2f\n", house_rent);

    printf(" Gross Pay = %.2f \n", gross_pay);
    printf(" GP Deduction = %.2f\n", gp_deduction);
    printf(" Net Pay = %.2f\n", net_pay);

    getch();
}
