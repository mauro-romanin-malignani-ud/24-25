/* UD4.LAB3R - array */

/* Inclusione delle librerie */
#include <stdio.h>

/* Dichiarazione delle costanti */
#define MAX_DATI 10

/* Dichiarazioni dei prototipi delle funzioni */
void stampa_array();


/* Dichiarazione variabili globali */
int dati[MAX_DATI] = {0, 1, 2, 8, 4, 5, 6, 7, 3, 9};


void main(){
    stampa_array();
    printf("\n\nProgramma Terminato");
}




/* Implementazione delle funzioni */
void stampa_array(){
    for (int index = 0; index < MAX_DATI; index++){
        printf("%2d", dati[index]);
    }    
}