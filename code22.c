#include<stdio.h>
int main()
{
    int d,m,y,flag=1,leap=0;
    printf("Enter a date DD/MM/YYYY= ");
    scanf("%d%d%d",&d,&m,&y);
    if (y%100!=0&&y%4==0||y%400==0)
    leap=1;
    if(y<1850||y>2050||m<1||m>12||d<1||d>31)
    flag=0;
    else if (m==2)
    {
        /* code */if(d==30||d==31||(d==29&&!leap))
        flag=0;
    }
    else if (m==4||m==6||m==9||m==11)
    {
        /* code */if(d==31)
        flag=0;
    }
    if (flag==0)
    {
        /* code */printf("Not a valid date");
    }else{
        printf("valid date");
    }
    
    
    
}