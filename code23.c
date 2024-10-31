#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age<18)
    {
        /* code */printf("You aren't eligible for voting");
    }
    else
    {
        printf("You are eligible for voting");
    }    
}