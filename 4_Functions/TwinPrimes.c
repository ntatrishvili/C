#include<stdio.h>

int main(){
    int count = 0, i = 2;
    int prev, next;
    while(count<60){
        prev = i;
        next = searchNextPrime(i);
        if (areTwins(i, next)==1){
            count++;
        }
        i = next;
    }
    printf("(%d, %d) are the 60th twin primes\n", prev, next);
    if(contains5(prev) || contains5(next))
        printf("at least one of them contains 5!");
    else 
        printf("your prime numbers do not contain 5!");
    return 0;
}

int areTwins(int a, int b){
    if((a-b) <= 2 && (b-a) <= 2)
        return 1;
    return 0;
}

int searchNextPrime(int a){
    int n = a+1;
    while(1<2){
        if(isPrime(n) == 1)
            return n;
        n++;
    }
    return 0;
}

int isPrime(int a){
    for(int i=2; i*i<=a; i++){
        if (a%i==0){
            return 0;
        }
    }
    return 1;
}

int contains5(int a){
    while(a>0){
        if(a%10 == 5){
            return 1;
        }
        a /=10;
    }
    return 0;
}