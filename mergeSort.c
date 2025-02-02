#include<stdio.h>
void merge(int *nums, int, left, int right, int *temp)
{
   if(left < right)
   {
    int mid = (left + right)/2;
    merge(arr, left, mid);
    merge(arr, mid+1, right);

    int n1 = mid-left + 1, n2 = right-mid;
    int leftArr[n1], rightArray[n2];

    for(int i=0; i<n1; i++) leftArr[i]=arr[left + i];
    for(int i=0; i<n2; i++) rightArray[i]=arr[mid + 1 + i];

    int i= 0, j = 0, k = left;
    while(i<n1 && j<n2)
    {
        if(leftArr[i] <= rightArray[j]) arr[k++] = leftArr[i++];
        else arr[k++] = rightArray[j++];
    }
    while (i < n1) arr[k++] = leftArr[i++];
    while (j < n2) arr[k++] = rightArray
    
   }
    
}
void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++) printf("%d",arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {3,54,112,6,5,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr , size);
    
    merge(arr,0,size-1);
    printf("Sorted array:");
    printArray(arr, size);
    return 0;
}