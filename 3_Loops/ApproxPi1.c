#include<stdio.h>
 
int main() {
    double num, denom,pi, n;
    num = 1;
    denom = 1;
    printf("input n: ");
    scanf("%lf", &n);
    pi=1;
    for (double i=2; i<=2*n; i+=2)
    {
        num = i*i;
        denom = (i+1) * (i-1);
        pi *= num/denom;
    }
    pi *= 2;
    printf("pi is approximately %lf",pi);
    return 0;
}
