#include<stdio.h>

int main()
{
    int x,y,p,r,a;

    printf("the one side of rectangle: ");
    scanf("%d", &x);
    printf("the other side of rectangle: ");
    scanf("%d", &y);

    r=x+y ;
    p=2*r ;
    a=x*y ;

    printf("Perimeter of a rectangle:%d", p);
    printf("\n Area of a rectangle:%d", a);
    return 0;

}
