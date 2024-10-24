#include <stdio.h>
#include <stdlib.h>

int main() {
    const int FAV_NUM = 5;
    printf("%d\n", FAV_NUM);
    FAV_NUM= 8; // Gives error
    printf("%d", FAV_NUM);
    return 0;
}