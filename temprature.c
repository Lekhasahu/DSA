#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Enter temprature in celsius: ");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("celsius=%.2f,  fahrenheit=%2f ",celsius,fahrenheit);
    return 0;
}