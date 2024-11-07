#include<stdio.h>
int main()
{
    int month,year,daysinMonth,StartDay;
    int daysInMonths[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int day=1,totaldays=0;
    do
    {
        /* code */ printf("Enter month(1-12): ");
        scanf("%d",&month);
    } while (month<1||month>12);
    printf("Enter year: ");
    scanf("%d",&year);
    if (year%4==0&&(year%100!=0||year%400==0))
    {
        /* code */ daysInMonths[1]=29;
    }
    for (int m=1;m<month; m++)
    {
        /* code */ totaldays+=daysInMonths[m-1];
    }
    StartDay=totaldays%7;
    daysinMonth=daysInMonths[month-1];
    printf("\n   sun  mon  tue wed  thu  fri sat\n");
    for (int i = 0; i < StartDay; i++)
    {
        /* code */ printf(" ");
    } 
    do
    {
        printf("%5d",day);
        if ((day+StartDay)%7==0)
        {
            /* code */ printf("\n");
        } day++;
        
        /* code */
    } while (day<=daysinMonth);
    printf("\n");
    
    
    
    
}