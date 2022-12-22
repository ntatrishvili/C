#include <stdio.h>
 
int main(void) {
    int arr[10] = {25, 69, 54, 8, 77, 6, 29, 10, 3, 98};
    int minIndex = 0;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]<arr[minIndex]){
            minIndex = i; 
        }
        printf("[%d]=%d ", i, arr[i]);
    }
    printf("The Least: %d", arr[minIndex]);
    for(int i = 0; i < 10; i++){
        if(i == minIndex){
            printf("%d[MIN] ", arr[minIndex]);
        }
        else{
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
