/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int leidade (){
int i;
    printf ("Digite a idade (0 a 110)\n");
    scanf ("%d", &i);
    while (i < 0 || i > 110){
        printf ("Digite novamente\n");
        scanf ("%d", &i);
    }
    return i;
}
int main() {
    int id1, id2;
    id1 = leidade();
    id2 = leidade();
    
    printf ("dif = " "%d", id1 - id2);
    return 0;
}

