#include<stdio.h>
#include<math.h>
int main()
{
    int num,originalNum,remainder,result=0,n=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    
    originalNum=num;
    do
    {
        /* code */ originalNum/=10;
        ++n;
    } while (originalNum!=0);
    originalNum=num;
    do
    {
        /* code */ remainder=originalNum%10;
        result+=pow(remainder,n);
        originalNum/=10;
    } while (originalNum!=0);
    if (result==num)
    {
        /* code */ printf("%d is an armstrong number",num);
    }
    else{
    printf("%d isn't an armstrong number",num);    
    }


}