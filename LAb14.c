#include<stdio.h>

int main()
{
    float c,f;

    printf("the temperature in c: ");
    scanf("%f", &c);

    f=1.8*(c+32);

    printf("the temperature in F : %f", f);
    return 0;
}
