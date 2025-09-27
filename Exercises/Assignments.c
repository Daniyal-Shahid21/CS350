#include <stdio.h>

int main (){
    printf("%d\n", 10);
    return 1;
}

/*
Reminders about C:
     - You need int main if you want to perform some operations
    
     This is how you can isolate the asm code of c file
     - gcc -c Assignments.c -o Assignments.o
     - objdump -d Assignments.o > main.asm
*/