#include<stdio.h>
int main()
{
    int num,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    do
    {
        sum=0;
        while (num!=0)
        {
            /* code */ sum+=num%10;
            num/=10;
        } 
        num=sum;
        
    } while (num>=10);
    printf("Generetic root:%d",sum);


}