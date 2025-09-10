#include<stdio.h>

int main()
{
    int kg,gm;

    printf("enter a weight in kilogram:");
    scanf("%d", &kg);

    gm=kg*1000;

    printf("weight in gram=%d", gm);
    return 0;
}
