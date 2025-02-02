#include<stdio.h>
int main()
{
    int i,n,j,a[20];
    printf("Enter the maximum number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n enter the element you wanna search:\n");
    scanf("%d",&j);

    // linear search
    for(i=0;i<n;i++){
    if(j == a[i])
    {
        printf("Searched element is found at %d index and the element is %d",i,a[i]);
        break;
    }
  else
    {
    printf("Searched element isn't found, please eneter a valid element");
    break;
    }
  }
}