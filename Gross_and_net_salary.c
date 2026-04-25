#include <stdio.h>
int main(){
    float basic_pay,hra,prof_tax,ta,gross_salary,net_salary;
    printf("Enter Basic Pay:");
    scanf("%f", & basic_pay);
    hra= 0.1*basic_pay;
    ta= .05*basic_pay;
    prof_tax= 0.02*basic_pay;
    net_salary= basic_pay-prof_tax;
    gross_salary=basic_pay+hra+ta;
    printf("Net Salary:%.2f\n" ,net_salary);
    printf("Gross Salary:%.2f" ,gross_salary);
    return 0;
}
