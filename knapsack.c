#include<stdio.h>
// n =7, capacity = 15
void knapsack(int n,float weight[],float profit[], float capacity)
{
    float x[20], tp=0; // total profit
    int i,j,u;
    u=capacity;
    for(i=0;i<n;i++)
    x[i]=0.0;
    for ( i = 0; i < n; i++)
    {
        if(weight[i] > u)
        break;
        else{
            x[i] = 1.0; // Tp = total profit
            tp = tp + profit[i]; //if tp = 6
            u = u - weight[i];// 15-4=11
        }
    }
    if(i<n)
    x[i]=u/weight[i];
    
    tp = tp+(x[i]*profit[i]);
    printf("\n The result vector is:");
    for(i=0;i<n;i++)
    printf("%f\t",x[i]);
    printf("\n Maximum profit is: %f",tp);
}

int main()
{
    float weight[20],profit[20],capacity;
    int num,i,j;
    float ratio[20],temp;

    printf("\n Enter the number of ofjects: ");
    scanf("%d",&num);
    printf("\n enter the weights and profit of each object:");
    for(i=0;i<num;i++){
        scanf("%f %f ",&weight[i],&profit[i]);
    }
    printf("\n enter the capcacity of knapsack: ");
    scanf("%d",&capacity);
    for(i=0;i<num;i++){
        ratio[i]= profit[i]/weight[i]; // profit /weight ratio nikal rhe
    }
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++)
        // now we will swap all the elements
        {
            if(ratio[i]<ratio[j]){
               temp = ratio[j];
               ratio[j] = ratio[i];
               ratio[i] = temp;

               temp = weight[j];
               weight[j] = weight[i];
               weight[i] = temp;

               temp = profit[j];
               profit[j] = profit[i];
               profit[i] = temp;
            }
        }
    } // call the main function
    knapsack(num, weight, profit, capacity);
    return 0;
}