#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Let us check whether the traingle is an equilateral,isoscale or scalane traingle\n");
    printf("Enter the sides of traingle ");
    scanf("%d%d%d",&a,&b,&c);
   
    
    if ( a==b&& b==c )
    {
        /* code */ printf("Equilateral traingle");
    }
    else if ( a==b || b==c || c==a)
    {
        printf("Isoscale traingle");
    }
    else 
    {
        /* code */printf("Scalane traingle");
    }
   
    
}