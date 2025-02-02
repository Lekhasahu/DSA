#include<stdio.h>
void fibonacci(int n)
{
    int a=0,b=1,next;
    printf("Fibonacci series: %d %d",a,b);
    for(int i=0;i<n;i++)
    {
        next=a+b;
        printf(" %d",next);
        a=b;
        b=next;
        printf("\t");
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Enter a positive integer");
    }
    else
    {
        fibonacci(n);
    }
}