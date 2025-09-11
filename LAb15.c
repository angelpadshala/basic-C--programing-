#include<stdio.h>

int main()
{
    float c,f;

    printf("Enter the temperature in f: ");
    scanf("%f", &f);

    c=0.56*(f-32);

    printf("the temperature in c:%f",c);
    return 0;
}
