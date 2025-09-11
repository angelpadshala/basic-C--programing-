#include<stdio.h>

int main()
{
    int x,p,a;

    printf("length of square x: ");
    scanf("%d", &x);

    p=4*x;
    a=x*x;

    printf("Perimeter of a square:%d", p);
    printf("\n Area of a square:%d", a);
    return 0;
}
