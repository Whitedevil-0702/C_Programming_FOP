#include <stdio.h>
int main() {
    float basic_pay, gross_pay,net_pay,HRA,TA,Tax;
    printf("Enter the basic pay: ");
    scanf("%f", &basic_pay);
    HRA = basic_pay*0.1;
    TA = basic_pay*0.05;
    Tax = basic_pay*0.2;
    gross_pay = basic_pay + HRA + TA;
    net_pay = gross_pay - Tax;
    printf("Gross Pay: %.2f\n", gross_pay);
    printf("Net Pay: %.2f\n", net_pay);
    return 0;
}