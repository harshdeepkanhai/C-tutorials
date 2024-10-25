#include <stdio.h>
#include <stdlib.h>

int main() {

    int age = 30;
    int * pAge = &age;
    double gpa = 3.5;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;


    printf("age's memory address: %p\n", &age);  // %p for pointer

    return 0;
    
}