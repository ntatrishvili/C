#include<stdio.h>
 
int main() {
    int n,sum;
    sum=0;
    printf("input your number: ");
    scanf("%d", &n);
    for (int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n == sum){
        printf("%d is a perfect number",n);
    }
    else {
        printf("%d is not a perfect number because %d != %d",n, n, sum);
    }
    return 0;
}
