#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    long long S = 1ll*a*(b + c) + 1ll*b*(a + c);
    printf("%lld", S);
}