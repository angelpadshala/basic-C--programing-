#include<stdio.h>

int main()
{
    float r,d;

    printf("Enter the amount in Rs: ");
    scanf("%d",&r);

    d=r/48;

    printf("The amount in Dollars= %0.2f", d);
    return 0;
}
