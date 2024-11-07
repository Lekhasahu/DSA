#include<stdio.h>
int main()
{
    int rem,num,temp,rev=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while (temp>0)
    {
        temp=temp%10;
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("Reversed number is %d\n",rev);
    if (num==rev)
    {
        printf("The number %d is a palindrome",num);
    }
    else
    printf("The number is not a palindrome");
    return 0;
    
}


