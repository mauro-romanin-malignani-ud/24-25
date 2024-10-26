#include <stdio.h>

void main(){
    int a = 60, b = 90;
    int MCD = a;

    while( !(a%MCD==0 && b%MCD==0) ){
        MCD--;
    }

    printf("Il MCD vale %d\n", MCD);
}