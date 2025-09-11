#include<stdio.h>

int main()
{
    float a,x,y,p;

    printf("enter base length:");
    scanf("%f", &x);
    printf("enter hight:");
    scanf("%f",&y);

    p=x*y;
    a=p/2;

    printf("The area of a Triangle:%f", a);
    return 0;

}
