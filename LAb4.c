#include<stdio.h>

int main()
{
    int a;
    printf("Enter a NUM:");
    scanf("%d",&a);

    if(a%7==0){
         printf("The num is divisible by 7");
    }
    else{
        printf("The num is not divisible by 7");
    }
    return 0;
}
