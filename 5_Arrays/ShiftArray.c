#include<stdio.h>

int main (){
    int arr[10] = {25, 69, 54, 8, 77, 6, 29, 10, 3, 98};
    for (int j = 0; j<10; j++){
        int first = arr[j];
        for (int i = 0; i<9; i++){
            printf("%d ", arr[i]);
            arr[i]=arr[(i+1)];
        }
        arr[9] = first;
        printf("\n");
    }
    return 0;
}