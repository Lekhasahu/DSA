#include<stdio.h>
int main(){
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if ((y%100==0 && y%400==0)||(y%100!=0 && y%4 ==0))
    {
        /* code */printf("The year %d is a leap year",y);
    }else
    {
        printf("the year %d isn't a leap year",y);
    }
    
}