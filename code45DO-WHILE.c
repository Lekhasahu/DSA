#include<stdio.h>
int main()
{
    int n,a,r,s=0;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    a=n;
    do
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
        /* code */
    } while (n>0);
    printf("The reversed number of %d is  %d",a,s);    
}