#include<stdio.h>
int inc(int *a){
    *a=*a+10;
    return *a;
}
int main(){
    int num, increment;
    printf("enter any number: ");
    scanf("%d",&num);
    inc(&num);
    printf("after increment=%d",num);
}
