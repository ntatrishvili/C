#include <stdio.h>

int main()
{
    int n, n1 = 0, n2 = 1;
    
    scanf("%d", &n);
    
    if( n == 1){
        printf("0");
        return 0;
    }
    
    for(int i = 2; i < n; i++){
        n2 = n1+n2;
        n1 = n2 - n1;
    }
    
    printf("%d", n2);
    return 0;
}
