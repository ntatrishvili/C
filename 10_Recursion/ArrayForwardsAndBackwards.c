#include <stdio.h>
 
void print_arr_back(int *arr, int size) {
    if (size == 0)
        return;
    print_arr_back(arr+1, size-1);
    printf("%d ", arr[0]);
}
 
 
void print_arr_forw(int *arr, int size) {
    if (size == 0)
        return;
    printf("%d ", arr[0]);
    print_arr_forw(arr+1, size-1);
}
 
 
int main(void) {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    print_arr_forw(arr, 10);
    printf("\n");
    print_arr_back(arr, 10);
    return 0;
}