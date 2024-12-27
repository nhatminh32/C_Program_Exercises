#include <stdio.h>
#include <math.h>

int main(){
    unsigned int C;
    scanf("%d", &C);
    double F;
    F = (1.0 * C * 9 / 5) + 32; // C must be turn to real number before the calculation begin.
    printf("%.2lf", F);

}