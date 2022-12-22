#include <stdio.h>
 
void printInBase(int n, int b){
    if(n == 0)
        return;
    printInBase(n/b, b);
    printf("%d", n%b);
}
 
int main(void) {
    printInBase(60, 2);
    return 0;
}