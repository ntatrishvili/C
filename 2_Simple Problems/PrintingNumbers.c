#include<stdio.h>

//with while loop
/*
int main() {
    int i;
    i=1;
    while (i <= 20){
        printf("%d\n",i);
        i++;
    }
    return 0;
}/*

//with for loop
int main() {
    for (int i = 1; i <= 20; i++){
        printf("%d\n",i);
    }
    return 0;
}

//read in numbers
/*
int main() {
    int lower;
    int upper;
    int i;
    printf("Input the lower bound: ");
    scanf("%d",&lower);
    printf("Input the upper bound: ");
    scanf("%d",&upper);
    i = lower;
    while (i <= upper){
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/

//reversed
int main() {
    int lower;
    int upper;
    printf("Input the lower bound: ");
    scanf("%d",&lower);
    printf("Input the upper bound: ");
    scanf("%d",&upper);
    for (int i = upper; i >= lower; i--){
        printf("%d\n", i);
    }
    return 0;
}
