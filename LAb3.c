#include<stdio.h>

int main()
{
    float net,gross,allo,deduc;

    printf("Enter the gross salary:");
    scanf("%f", &gross);

    if(gross<10000){
        allo=0.1*gross;   //10%
        deduc=0.03*gross;   //3%
    }
    if(gross>5000){
        allo=0.07*gross;  //7%
        deduc=0.02*gross;   //2%
    }
    net=gross+allo-deduc;
    printf("The net salary is:%f",net);
    return 0;
}
