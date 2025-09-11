#include<stdio.h>

int main()
{
    float net,gross,dis;

    printf("Enter the gross salary:");
    scanf("%f", &gross);

    if(gross>20000){
        dis=0.15*gross;
    }
    if(gross>10000){
        dis=0.10*gross;
    }
    else{
        dis=0.05*gross;
    }
    net=gross-dis;
    printf("The net salary:%f",net);
    return 0;

}
