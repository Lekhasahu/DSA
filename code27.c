#include<stdio.h>
int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;
    note500=note100=note50=note20=note10=note5=note1=0;
    printf("Enterr amount:");
    scanf("%d",amount);
    if(amount>=500)
    {
        note500=amount/500;
        amount-=note500*500;
    }
    if (amount>=100)
    {
        /* code */note100=amount/100;
        amount-=note100*100;
    }
     if (amount>=50)
    {
        /* code */note50=amount/50;
        amount-=note50*50;
    }
     if (amount>=20)
    {
        /* code */note20=amount/20;
        amount-=note20*20;
    }
     if (amount>=10)
    {
        /* code */note10=amount/10;
        amount-=note10*10;
    }
     if (amount>=5)
    {
        /* code */note5=amount/5;
        amount-=note5*5;
    }
     if (amount>=2)
    {
        /* code */note2=amount/2;
        amount-=note2*2;
    }
     if (amount>=1)
    {
        /* code */note1=amount;
        // amount-=note1*1;
    }
    printf("Total number of notes: \n");
    printf("500 = %d\n",note500);
    printf("100= %d\n",note100);
    printf("50 = %d\n",note50);
    printf("20 = %d\n",note20);
    printf("10= %d\n",note10);
    printf("5= %d\n",note5);
    printf("2 = %d\n",note2);
    printf("1= %d",note1);
    }