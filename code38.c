#include<stdio.h>
int main()
{
    int n,reverse=0,reminder,original;
    printf("Enter an integer: ");
    scanf("%d",&n);
    original=n;
    while (n!=0)
    {
        reminder=n%10;
        reverse=reverse*10+reminder;
        n/=10;
    }
    if (original%10==0)
    {
        /* code */printf("Reversed number = %d",reverse);
        while (original%10 == 0)
        {
            /* code */ printf("0");
            original /= 10;
        }
        else
            printf("Reversed number = %d",reverse);
        
    }
    
    
}