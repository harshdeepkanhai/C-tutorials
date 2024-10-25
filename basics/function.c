#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age);  // Prototyping

int main() {
    printf("Top\n");
    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Kanhai", 30);
    printf("Bottom\n");
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);
}