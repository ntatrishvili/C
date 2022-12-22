#include<stdio.h>
#include<math.h>

typedef struct Circle { double xCenter, yCenter, radius; } Circle;

double get_distance_between_centers(Circle c1, Circle c2){
    return sqrt((c1.xCenter-c2.xCenter)*(c1.xCenter-c2.xCenter)+(c1.yCenter-c2.yCenter)*(c1.yCenter-c2.yCenter));
}

int are_overlapping(Circle c1, Circle c2){
    if((c1.radius+c2.radius) > get_distance_between_centers(c1,c2))
        return 1;
    return 0;
}

Circle create_circle(){
    Circle c;
    printf("Please insert the coordinates of the center in the following way: x y r\n");
    scanf("%lf %lf %lf", &c.xCenter, &c.yCenter, &c.radius);
    return c;
}


int main(){
    Circle c1,c2;
    c1 = create_circle(); 
    c2 = create_circle();
    printf(are_overlapping(c1,c2) ? "These circles are overlapping!" : "These circles are not overlapping!\n");
    return 0;
}