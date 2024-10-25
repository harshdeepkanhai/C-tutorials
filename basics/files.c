#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE * fpointer = fopen("employees.txt", "w"); // Use 'w' for write, 'a' for append, 'r' for read

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

    fclose(fpointer);
    return 0;
}