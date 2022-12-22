#include<stdio.h>
#include<math.h>

int main(){
    for (double i = -1; i<=1; i+=0.1){
        printf("%.4lf %.4lf %.4lf %.4lf\n", i, cube(i), absolute(i), sin(i));
    }
    return 0;
}

int cube(double a){
    return a*a*a;
}

int absolute(double a){
    if (a>=0)
        return a;
    return (-1)*a;
}