#include<stdio.h>
int main(){
    float da,hra,grosssalary;
    int basic;
    printf("enter basic salary");
    scanf("%d",&basic);
    da=basic*0.1;
    hra=basic*0.2;
    grosssalary=basic+da+hra;
    printf("gross salary %.2f",grosssalary);
    return 0;
}