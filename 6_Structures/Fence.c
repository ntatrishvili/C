#include<stdio.h>
#include<math.h>

typedef struct {double x, y;} Point;

double dist(Point p1, Point p2){
    return sqrt(fabs(pow(p1.x-p2.x,2) - pow(p1.y-p2.y, 2)));
}

int equal(Point p1, Point p2){
    return p1.x == p2.x && p1.y == p2.y;
}

Point read(){
    Point p;
    printf("please insert the coordinates: \n");
    scanf("%lf %lf", &p.x, &p.y);
    return p;
    }

int main(){
    double sum=0;
    Point p = read();
    Point pStart = p;
    do{
      Point curr = read();
      sum += dist(p, curr);
      p=curr;
    }while(!equal(p,pStart));
    printf("The sum is %lf",sum);
    return 0;
}

