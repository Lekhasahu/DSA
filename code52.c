#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if (num<0)
    {
        num=-num;
    }
    do
    {
        num/=10;
        count++;
    } while (num!=0);
    printf("Number of digits: %d",count);
    
}