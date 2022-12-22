#include<stdio.h>
#include <math.h>
 
int main() {
    float a;
    float b;
    float c;
    float D;
    float x1;
    float x2;
    printf("input your a coefficient for the quadratic formula: ");
    scanf("%f", &a);
    printf("input your b coefficient for the quadratic formula: ");
    scanf("%f", &b);
    printf("input your c coefficient for the quadratic formula: ");
    scanf("%f", &c);
    printf("Your equation is %fx^2+%fx+%f=0\n",a,b,c);
    D = b*b-4*a*c;
    if (D>=0)
        D = sqrt(D);
    else{
        printf("There are no real solutions to your equation!");
        return 0;
    }
    x1 = ((-1)*b - D) / (2*a);
    x2 = ((-1)*b + D) / (2*a); 
    printf("The solutions are %f and %f", x1, x2);
    return 0;
}