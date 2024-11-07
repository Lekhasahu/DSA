#include<stdio.h>
int main()
{
    int sp,cp,amount;
    //sp= selling price, cp=cost price
    printf("Enter the selling price then cost price  ");
    scanf("%d%d",&sp,&cp);
    if (sp>cp)
    {
        amount= sp-cp;
        /* code */ printf("Profit = %d",amount);
    }
    else if (cp>sp)
    {
        amount= cp-sp;
        /* code */printf("Loss = %d",amount);
    }
    else
    printf("No profit or loss");
    
    
}