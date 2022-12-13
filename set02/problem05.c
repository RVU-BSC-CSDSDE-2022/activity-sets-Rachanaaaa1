#include <stdio.h>
struct point
{
    float x_coordinate;
    float y_coordinate;
};
typedef struct point Point;

int main()
{
    Point p1,p2;
    p1.x_coordinate=2;
    p1.y_coordinate=0;
    p2.x_coordinate=7;
    p2.y_coordinate=0;
    return 0;
}