#include<stdio.h>
int main(){
    int a,b;
    printf("enter any two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the values after swapping are a=%d b=%d",a,b);
    return 0;
}