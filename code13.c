#include<stdio.h>
int main(){
 int a;
 printf("Enter the number:");
 scanf("%d",&a);
 if (a>0)
 {
    printf("\n%d is a postive number",a);
 }
 if (a<0)
 {
    /* code */ printf("\n%d is a negative number",a);
 }
 else if (a==0)
 {
    /* code */ printf("%d neither a positive nor negative",a);
 }
 
    
}