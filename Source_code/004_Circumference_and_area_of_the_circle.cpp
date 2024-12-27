#include <stdio.h>
#include <math.h>

int main(){
    unsigned short R;
    scanf("%hd", &R);

    double S = 3.14*pow(R,2);
    double C = 3.14*2*R;
    
    printf("%.4lf %.4lf", C, S);
}