#include<stdio.h>
int main()
{
    int i,n;
    int t1=0,t2=1,nexterm=0;
    printf("Fibonacci series is a series of numbers where each number is the sum of the two numbers that come before it");
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: %d %d",t1,t2);
    nexterm=t1+t2;
    while (nexterm<=n)
    {
        /* code */printf("%d",nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
    

}