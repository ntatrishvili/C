#include<stdio.h>

int arithmetig_seq(int n, int start, int diff){
    if(n == 0)
        return start;
    return arithmetig_seq(n-1, start, diff) + diff;
}

int geometrig_seq(int n, int start, int coeff){
    if(n == 0)
        return start;
    return geometrig_seq(n-1, start, coeff) *coeff;
}

int main(){
    for(int i = 0; i < 10; i++){
        printf("%d  ", arithmetig_seq(i,5,2));
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d  ", geometrig_seq(i,5,2));
    }
    return 0;
}