#include<stdio.h>
int main()
{
    int amount,denomination;
    int count;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    denomination=2000;
    printf("denominations: \n");
    do
    {
        count=amount/denomination;
        if (count != 0)
        {
            printf("%d x %d\n",count);
        }
        amount %= denomination;
        switch (denomination)
        {
        case 2000: denomination = 500; break;
            case 500: denomination = 200; break;
            case 100: denomination = 50; break;
            case 50:denomination = 20; break;
            case 20 : denomination = 10; break;
            case 10: denomination = 5; break;
            case 5: denomination = 2; break;
            case 2: denomination = 1; break;

        default:
        denomination = 0;
           break;
        }
        
    } while (denomination>0);
    
}