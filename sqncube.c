#include<stdio.h>
int sq(int a)
{
    int b;
    b=a*a;
    return b;
}    
int cube(int a){   
    int c;
    c=a*a*a;
    return c;
}
int main(){
    int x,y,z;
    printf("enter any number: ");
    scanf("%d",&x);
    y=sq(x);
    z=cube(x);
    printf("sq:%d\n",y);
    printf("cube:%d",z);
}

        