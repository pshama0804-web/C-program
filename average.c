#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    float average=sum/3.0;
    printf("average of three number %.3f",average);
    return 0;
}