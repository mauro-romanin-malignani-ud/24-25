/* UD4.LAB2R.c */
#include <stdio.h>
#include <math.h>

//gcc test.c -o test -lm
/*
FIX:    undefined reference to `sqrt'
        collect2: error: ld returned 1 exit status

Se si utilizza la libreria <math.h> il link non include la libreria e bisogna aggiungere l'argomento -lm al compilatore gcc    

Nella cartella .vscode, editare il file task.json e nel task relativo al 
    "command": "/usr/bin/gcc"
aggiungere fra gli "args" la voce "-lm"

/usr/bin/gcc -fdiagnostics-color=always -g /workspaces/4SER.24-25/UD4.LAB2R/UD4.LAB2R.c -o /workspaces/4SER.24-25/UD4.LAB2R/UD4.LAB2R -lm

./UD4.LAB2R/UD4.LAB2R

*/



void main(){
    printf("UD4.LAB2R\n");

    float a = 4;
    float b = sqrt(a);

    printf("b:%f\n",b);
}