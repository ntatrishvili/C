#include<stdio.h>
 
int main() {
    int n;
    n=1;
    for (int i=10; i>=2; i--){
        n=n*i;
    }
    printf("10! is %d",n);
    return 0;
}
