#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num = 6;
    printf("%f", pow(num,3)); // gcc basics/numbers2.c -lm
    printf("%f", 5 + 4.5);
    printf("%f", sqrt(39));
    printf("%f", ceil(36.678));
    printf("%f", floor(36.678));
    return 0;
}