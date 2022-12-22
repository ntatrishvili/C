#include<stdio.h>
#include<math.h>
//first N square numbers

int main() {
    int N;
    int num;
    printf("Please input N: ");
    scanf("%d",&N);
    printf("The first N square numbers are:\n");
    for(int i = 1; i < N; i++){
        num = i*i;
        printf("%d,",num);
    }
    num = N*N;
    printf("%d",num);
    return 0;
}
/*
//square numbers until N
int main() {
    int N;
    int sqrt_N;
    int num;
    printf("please input N: ");
    scanf("%d",&N);
    sqrt_N = sqrt(N);
    if ( N == sqrt_N * sqrt_N)
        sqrt_N--;
    for (int i = 1; i < sqrt_N; i++){
        num = i*i;
        printf("%d,",num);
    }
    num = sqrt_N * sqrt_N;
    printf("%d",num);
    return 0;
}

//Spheres
int main(){
    double r;
    r=0.1;
    for (double i = r; i <=1; i+=0.1){
        printf("%f\n",i*i*i);
    }
    return 0;
}*/