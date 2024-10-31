#include<stdio.h>
int main(){
    int a,b,c,perimeter;
    printf("Enter the sides of traingle  ");
    scanf("%d%d%d",&a,&b,&c);
    perimeter=a+b+c;
    if (perimeter!=0&& a>0,b>0,c>0)
    {
        /* code */printf("This is a valid traingle");
    }
    else
    printf("invalid");
}