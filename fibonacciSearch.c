#include<stdio.h>
int min(int x,int y){
    return(x<y)?x:y;
}
int fibonaccisearch(int arr[], int x, int n)
{
    int a = 0;
    int b = 1;
    int c = a+b;
    while(c<n)
    {
        b=a;
        a=c;
        c=a+b;
    }
    int offset = -1;
    while(c>1)
    {
        int i = min(offset+b,n-1);
        if(arr[i]<x)
        {
            c=a;
            a=b;
            b=c-a;
            offset=i;
        }
        else if(arr[i] > x)
        {
            c=b;
            a=a-b;
            b=c-a;
        }
        else{
        return i;
    }
}
    if(a==1 && arr[offset-1] == x){
    return offset+1;
    }
    return -1;
}
//Driver code
int main()
{
    int arr[]={10,22,35,40,50,80,82,85};
    int x = 80;
    int n = sizeof(arr)/sizeof(arr[0]);
    int ind=fibonaccisearch(arr,x,n);
    if(ind>=0)
    printf("Element Found at Index: %d\n",ind);
    else
    printf("Element is not present\n");
    return 0;
}