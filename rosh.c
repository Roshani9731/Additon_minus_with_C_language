#include<stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    int minus = a - b;
    printf("Minus of a and b is %d .",minus);
}