#include<stdio.h>

int main()
{
    float gm;
    float kg;

    printf("Enter a weight in grams: ");
    scanf("%f",&gm);

    kg=gm/1000;

    printf("weight in kilogram:%2f",kg);
    return 0;
}
