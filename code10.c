#include<stdio.h>
int main()
{
    int num1, num2, lcm, fact=1;
    printf("Enter 2 numbers\n");
    scanf("%d%d",num1,num2);
    lcm=(num1>num2)?num1:num2; //ternary operator, the return value will be stored inside the variable lcm
    while (fact)
    {
         if(lcm % num1 ==0 && lcm %num2 ==0)
        {
            printf("LCM of %d and %d is %d\n",num1,num2,lcm);
            fact=0;
        }
        lcm++;
    }
    return 0;
    
}