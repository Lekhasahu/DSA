#include<stdio.h>
int main()
{
    int n,first=0,second=1,next,i=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    do
    {
        /* code */ printf("%d",first);
        next=first+second;
        first=second;
        second=next;
        i++;
    } while (i<=n);
    printf("\n");
}