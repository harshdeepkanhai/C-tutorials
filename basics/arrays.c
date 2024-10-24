#include <stdio.h>
#include <stdlib.h>

int main() {
    int luckyNumbers1[10]; // fixed array size initialization
    int luckyNumbers[] = {4, 98, 15, 63, 42, 600};
    luckyNumbers[1] = 200;
    luckyNumbers1[1] = 7;
    printf("%d\n", luckyNumbers1[1]);
    printf("%d\n", luckyNumbers1[0]);
    printf("%d\n", luckyNumbers[0]);
    printf("%d\n", luckyNumbers[1]);
    printf("%d\n", luckyNumbers[2]);

    return 0;
}