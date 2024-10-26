/* UD4.LAB3R - array */

/* Inclusione delle librerie */
#include <stdio.h>

/* Dichiarazione delle costanti */
#define MAX_DATI 10

/* Dichiarazioni dei prototipi delle funzioni */
void stampa_array();
int array_gia_ordinato();
void passata_singola();  


/* Dichiarazione variabili globali */
int dati[MAX_DATI] = {0, 1, 2, 8, 4, 5, 6, 7, 3, 9};


void main(){
    stampa_array();
    passata_singola();
    stampa_array();
    passata_singola();
    stampa_array();
    passata_singola();
    stampa_array();
    passata_singola();
    stampa_array();
    passata_singola();
    stampa_array();

    printf("\n\nProgramma Terminato");
}




/* Implementazione delle funzioni */
void stampa_array(){
    for (int index = 0; index < MAX_DATI; index++){
        printf("%2d", dati[index]);
    }
    printf("\n");    
}

void passata_singola(){
    for (int index = 0; index < MAX_DATI -1; index++){
        if( dati[index] > dati[index+1]){
            int temp = dati[index];
            dati[index] = dati[index+1];
            dati[index+1] = temp;
            printf(" ^");
        }else{
            printf("  ");
        }       
    } 
    printf("\n");    
}

int array_gia_ordinato(){
    // verifica tutte le posizioni dell'array (MAX -1) e restituisce 1 se sono già ordinate
    for (int index = 0; index < MAX_DATI -1; index++){
        if( dati[index] > dati[index+1]){           
            return 0; // Termino il ciclo e restituisco FALSO
        }
    } 
    return 1;   // Restituisco VERO
}