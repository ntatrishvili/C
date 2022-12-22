#include<stdio.h>
 
int main() {
    double n,sum;
    sum=1;
    n=1;
    for (int i=1; i<=20; i++){
        n=n*i;
        sum += 1/n;
    }
    printf("e is approximately %lf",sum);
    return 0;
}
