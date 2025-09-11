 #include<stdio.h>

 int main()
 {
     float a,p,r;

     printf("enter the radius of a circle: ");
     scanf("%f", &r);

     p=22/7;
     a=p*r*r;

     printf("Area of a circle:%f", a);
     return 0;
 }
