#include<stdio.h>
int main(){
    int a,b,c,big;
    printf("Enter the value of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        printf("a is big");
    }
    else if(a>b && a>c){
        printf("%d is the largest\n",a);
    }
    if(b>c && b>a)
    {
       printf("%d is the largest\n",b);
    }
    if(c>a && c>b){
        printf("%d is the largest",c);
    }
    return 0;
}