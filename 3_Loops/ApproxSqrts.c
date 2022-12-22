#include <stdio.h>

int main()
{
    double n = 1;
    double delta = 0.1;
    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if((n + delta * j) * (n + delta * j) > 2){
                n += delta * (j-1);
                break;
            }
        }
        delta *= 0.1;
    }
    
    printf("%.10lf", n);
    return 0;
}
