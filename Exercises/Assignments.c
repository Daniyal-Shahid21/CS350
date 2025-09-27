#include <stdio.h>

int main (){
    printf("%d\n", 0x7FFFFFFFU + 1);
}

/*
Reminders about C:
     - You need int main if you want to perform some operations
    
     This is how you can isolate the asm code of c file
     - gcc -c Assignments.c -o Assignments.o
     - objdump -d Assignments.o > main.asm

     Any relational expression or assignment of signed values and unsigned result in an unsigned comparison
        EX) (0xFFFFFF > -1U)
*/