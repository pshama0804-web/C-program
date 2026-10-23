#include<stdio.h>
int main(){
    int n, prime=1, i;
    printf("enter any number");
    scanf("%d",&n);
    if(n<=1)
    {
     prime=0;
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                prime=0;
            }
        }

    }
    if(prime==0)
    {
    printf("not prime");
    }
    else
    {
        printf("prime");
    }
    return 0;
}