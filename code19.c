#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf(" %d is greater",a);
    }else{
        printf("%d is greater",b);
    }
}