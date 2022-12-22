#include <stdio.h>
 
int main()
{
    int x;
    int y;
    int sum;
    int product;
    int difference;
    float division;
    int remainder;
    x = 17;
    y = 4;
    printf("x=%d\ny=%d\n",x,y);
    sum = x + y;
    printf("sum=%d\n",sum);
    product = x * y;
    printf("product=%d\n",product);
    difference = x - y;
    printf("difference=%d\n",difference);
    division = (float)x / (float)y;
    printf("division=%f\n",division);
    remainder = x - (x / y) * y ;
    printf("remainder of division=%d\n",remainder);
    return 0;
}