#include<stdio.h>
int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if (age>=18){
        printf("you are eligible to cast your vote");
    }
    else{
        printf("you are not eligible to cast your vote");
    }
return 0;
}