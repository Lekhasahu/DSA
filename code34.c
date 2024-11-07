#include<stdio.h>
int main()
{
    int number,count=0,result=0,mul=1,cnt,rem;
    printf("please enter a number  ");
    scanf("%d",&number);
    int q=number;
    while (q!=0)
    {
        /* code */ q=q/10;
        count++;
    }
    cnt=count;
    q=number;
    while (q!=0)
    {
        /* code */rem=q%10;
        while (cnt!=0)
        {
            /* code */ mul=mul+rem;
            cnt--;
        }
        result=result+mul;
        cnt=count;
        q=q/10;
        mul=1;
        
    }
    if (result==number)
    
    {
        /* code */printf("%d is an armstrong number",number);
    }
    else
    printf("%d is not an armstrong number",number);
    
    
    
}