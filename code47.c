#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter a postive integer: ");
    scanf("%d",&n);

    do
    {
        /* code */ sum+=i;
        i++;
    } while (i<=n);

    printf("sum of natural numbers: %d",sum);
    
}