#include<stdio.h>

int main(){
    int height;
    int width;
    int i, j;
    printf("input the height and width: ");
    scanf("%d %d", &height,&width);
    //first line
    printf("+");
    for (int i = 0; i < width; i++){
        printf("-");
    }
    printf("+\n");
    //body
    i=height;
    while(i>0){
        j = width;
        printf("|");
        while(j>0){
            printf(".");
            j--;
        }
        printf("|\n");
        i--;
    }
    //lastline
    printf("+");
    for (int i = 0; i < width; i++){
        printf("-");
    }
    printf("+");
    return 0;
}