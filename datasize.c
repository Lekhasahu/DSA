#include<stdio.h>
int main(){
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("size of int: %zu bytes\n",sizeof(intType));
    printf("Size of float: %zu bytes\n",sizeof(doubleType));
    printf("Size of double: %zu bytes\n",sizeof(doubleType));
    printf("size of char: %zu byte\n",sizeof(charType));
    return 0;
}