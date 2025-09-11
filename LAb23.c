#include<stdio.h>

int main()
{
    int maths,phy,chem,a,avg;

    printf("Maths:");
    scanf("%d",maths);
    printf("Physics:");
    scanf("%d",phy);
    printf("Chemistry:");
    scanf("%d",chem);

    a=maths+phy+chem;
    avg=a/3;

    printf("total of three sub:%d", a);
    printf("\n Average of Three sub:%d", avg);
    return 0;
}

