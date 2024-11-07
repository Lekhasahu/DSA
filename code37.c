#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    while (max%a!=0||max%b!=0) //if max is  perfectly divisible by a and b then the value is lcm 
    {
        /* code */max++;
    }
    printf("The LCM of %d and %d is %d",a,b,max);
    
}