#include<stdio.h>
int main(){
    int a,b,c,d,e,avg;
    printf("enter marks of 5 subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    if(avg<30)
    {
        printf("fail");
    }
else if(avg>=30 && avg<45)
{
    printf("third div");
}
else if(avg>=45 && avg<60)
{
    printf("second div");
}
else if(avg>=60 && avg<75)
{
    printf("first div");
}
else
{
    printf("hons");
}
return 0;
}