#include<stdio.h>
int main()
{
    int notes[8]={500,50,20,10,5,2,1};
    int amount,temp;
    printf("Enter the amount:");
    scanf("%d",&amount);
    temp=amount;
    for(int i=0;i<8;i++)
    {
        printf("\n%d note is %d",notes[i],temp/notes[i]);
        temp=temp%notes[i];
    }
}