#include<stdio.h>
int main(){
    int num,original,reverse=0,reminder;
    printf("Enter a number: ");
    scanf("%d",num);
    original=num;
    do
    {
        /* code */ reminder=num%10;
        reverse=reverse*10+reminder;
        num/=10;
    } while (num!=0);
    if (original==reverse)
    {
        /* code */ printf("The number is a palindrome"); 
        // palindrome is a number that reads the same forward and backward. Eg: 12231= 13221
    }
    else
    printf("The nuber is not a palindrome");
    
}