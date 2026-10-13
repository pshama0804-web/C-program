#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter any two numbers");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("interchanged values are a=%d b=%d",a,b);
    return 0;
}