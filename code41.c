#include<stdio.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("Generetic root means addition of all the numbers and after addition if we get the sum= 2 or 3 digit\n");
    printf("number then it will again some all the numbers unti it get only one digit number\n");
    printf("Enter a number\n");
    scanf("%d",&num);
    temp=num;
    while (temp)
    {
        /* code */ rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
        if (temp==0)
        {
            /* code */ if(sum>9)
            {
                temp=sum;
                sum=0;
            }
        }
    }
    printf("Generetic root of %d is %d\n",num,sum);
    
}