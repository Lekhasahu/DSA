#include<stdio.h>
int main()
{
    int num,alternatingSum=0,sign=1;
    printf("Enter an integer: ");
    scanf("%d",&num);
    int originalNum=num;
    if (num<0)
    {
        num=-num;
    }
    do
    {
        int lastDigit = num%10;
        alternatingSum += sign*lastDigit;
        sign = -sign;
        num/=10;
    } while (num!=0);
    if (alternatingSum%11==0)
    {
        printf("The number %d is divisible by 11\n",originalNum);
    }
    else{
        printf("The number %d is not divisible by 11",originalNum);
    }
    
    
    


}