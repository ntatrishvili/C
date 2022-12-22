#include<stdio.h>
#include <math.h>
 
int main() {
    float x1;
    float y1;
    float x2;
    float y2;
    float len;
    printf("Enter the x coordinate of your first point: ");
    scanf("%f", &x1);
    printf("Enter the y coordinate of your first point: ");
    scanf("%f", &y1);
    printf("Enter the x coordinate of your second point: ");
    scanf("%f", &x2);
    printf("Enter the y coordinate of your second point: ");
    scanf("%f", &y2);
    len = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("the length of the line is: %f", len);
    return 0;
}