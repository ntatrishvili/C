#include<stdio.h>
 
int main() {
    double pi;
    int n;
    printf("input n: ");
    scanf("%d", &n);
    pi=0;
    for (int i=1; i<2*n; i+=2)
    {
        if (i%4 == 1)
            pi += 1/(double)i;
        else
            pi -= 1/(double)i;
    }
    pi *= 4;
    printf("pi is approximately %lf",pi);
    return 0;
}
