#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%11==0)
    {
        /* code */printf("%d is divisible by 11",num);
    }
    else
    printf("not divisible by 11");
}