#include<stdio.h>
int sum(int *a, int *b){
    int *p;
    *p=*a+*b;
    return *p;
}
int pro(int *a, int *b){
    int *q;
    *q=*a*(*b);
    return *q;
}
int main(){
    int x,y,c,d;
    printf("enter any two number: ");
    scanf("%d%d",&x,&y);
    c=sum(&x,&y);
    d=pro(&x,&y);
    printf("sum=%d\n",c);
    printf("product=%d\n",d);
}