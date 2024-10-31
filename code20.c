#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        /* code */printf("%d is greatest",a);
    }else if (b>a && b>c)
    {
        /* code */printf("%d is greatest",b);
    }else if (c>a && c>b)
    {
        /* code */printf("%d is greatest",c);
    }
    
    
    
}