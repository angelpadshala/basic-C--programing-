#include<stdio.h>

int main()
{
    int maths,phy,chem,a,avg;
    printf("maths:");
    scanf("%d",&maths);
    printf("physics:");
    scanf("%d",&phy);
    printf("Chemistry:");
    scanf("%d",&chem);

    a=maths+phy+chem;
    printf("Total Marks:%d",a);
    avg=a/3;
    printf("Average Marks:%d",avg);

    if(avg>=70){
        printf("Distinction");
    }
    if(avg>=60){
        printf("First Class");
    }
    if(avg>=50){
        printf("Second Class");
    }
    if(avg>=35){
        printf("Third Class");
    }
    else if(avg<35 || maths<35 || phy<35 || chem<35){
        printf("\nThe student is fail");
    }
    else {
        printf("\nThe student is pass");
    }
}
