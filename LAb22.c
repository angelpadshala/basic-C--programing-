#include<stdio.h>

int main()
{
    float net, gross, dis;

    printf("Enter the gross salary:");
    scanf("%f",&gross);

    dis=0.1*gross;
    net = gross-dis;

    printf("The net salary is:%f",net);
    return 0;
}
