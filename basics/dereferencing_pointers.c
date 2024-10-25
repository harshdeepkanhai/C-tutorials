#include <stdio.h>
#include <stdlib.h>

int main() {

    int age = 30;
    int * pAge = &age;

    printf("%d\n", *pAge);  // %p for pointer // Use * to fetch/dereference a pointer
    printf("%d\n", *&*&age); 
    return 0;
    
}