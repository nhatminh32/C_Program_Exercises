#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d", &x);
    /*  Version 1  */
    long long A = 1ll*pow(x, 3) + 3ll*pow(x, 2) + x + 1;
    
    /*
        Version 2:
        long long A = (long long)*pow(x, 3) + (long long)3*pow(x, 2) + x + 1;
    */
    printf("%lld", A);
}
