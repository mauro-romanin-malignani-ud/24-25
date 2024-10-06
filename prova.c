#include <stdio.h>
#include <math.h>

int main(){
    float x;

    float delta = 4;
    x = sqrt(delta);
    printf("Funziona %f\n", x);
    return 0;
}

/*
Avvio della compilazione...
/usr/bin/gcc -fdiagnostics-color=always -g /workspaces/4SER.24-25/prova.c -o /workspaces/4SER.24-25/prova
/usr/bin/ld: /tmp/cc4JZsbO.o: in function `main':
/workspaces/4SER.24-25/prova.c:8: undefined reference to `sqrt'
collect2: error: ld returned 1 exit status

*/

//    /usr/bin/gcc -fdiagnostics-color=always -g /workspaces/4SER.24-25/prova.c -o /workspaces/4SER.24-25/prova -lm