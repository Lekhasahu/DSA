#include<stdio.h>
int main()
{
    int month,year,dayInmonth,startday,days[30];
    int day[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter month(1-12):");
    scanf("%d",&month);
    printf("Enter year: ");
    scanf("%d",&year);
    if (year%4==0&&(year%100!=0||year%400==0))
    {
        /* code */days[1]=29;
    }
    dayInmonth=days[month-1];
    printf("Enter the starting day(0 for sunday, 1 for monday.....):");
    scanf("%d",&startday);
    printf("\n Sun Mon Tue Wed Thu Fri Sat\n");
    for (int i = 0; i < startday; i++)
    {
        /* code */printf(" ");
    }
    for (int day = 1; day<=dayInmonth; day++)
    {
        /* code */printf("%d",day);
    if ((day+startday)%7==0)
    {
        /* code */ printf("\n");
    }
    }
    printf("\n");
    
    
    
}