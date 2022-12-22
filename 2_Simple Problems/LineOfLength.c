#include<stdio.h>

int main() {
    int len;
    printf("please input the desired length of the line: ");
    scanf("%d",&len);
    printf("+");
    for (int i = 0; i < len; i++){
        printf("-");
    }
    printf("+");
    return 0;
}

//pseudo code:
/*
1 len <- input
2 +
3 i <- 0
4 if i >= len jump to 8
5 -
6 i <- i+1
7 jump to 4
8 +
*/