#include <stdio.h>
 
void pretty_nums(int n) {
    if (n == 0)
        return;
    pretty_nums(n/1000);
    printf("%d ", n%1000);
}
 
int main(void) {
    pretty_nums(1672);
    return 0;
}