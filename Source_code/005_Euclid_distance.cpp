#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    double X = x2 - x1;
    double Y = y2 - y1;
    double d = sqrt((X*X) + (Y*Y));
    printf("%.2lf", d);
}