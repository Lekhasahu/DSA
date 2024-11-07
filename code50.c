#include<stdio.h>
int main()
{
    int num,reverse=0,reminder;
    printf("Enter a number: ");
    scanf("%d",&num);
    do
    {
        /* code */ reminder=num%10;
        reverse=reverse*10+reminder;
        num/=10;
    } while (num!=0);

    printf("Reversed Number: %d",reverse);
    
}