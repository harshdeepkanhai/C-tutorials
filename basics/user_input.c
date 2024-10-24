#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20];
    char grade;
    int age;
    double gpa;

    printf("Enter your name: ");
    scanf("%s", name);  // Pointer is not needed for string

    //  Use fgets to fetch string as scanf strips after a space
    fgets(name, 20, stdin);

    printf("Enter your age: ");
    scanf("%d", &age);  // Pointer

    printf("Enter your gpa: ");
    scanf("%lf", &gpa);  // Pointer
    
    printf("Enter your grade: ");
    scanf(" %c", &grade);  // Pointer a space is needed else printf feeds the next character

    printf("Your name is %s", name);
    printf("You are %d years old", age);
    printf("Your gpa is %f", gpa);
    printf("Your grade is %c", grade);
    
    return 0;
}