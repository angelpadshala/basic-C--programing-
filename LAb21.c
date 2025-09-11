#include<stdio.h>

int main()
{
    float net,gross,allo,deduc;

    printf("Enter the gross salary:");
    scanf("%f",&gross);

    allo=0.1*gross;
    deduc=0.03*gross;
    net=gross+allo-deduc;

    printf("THe net salary is:%f",net);
    return 0;
}

