#include <stdio.h>

int dati[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void main(){
    int a = 5;
    int b = 6;

    printf("a:%d\n", a);
    int * addr_a = &a;
    printf("%d\n", addr_a);
    int * addr_b = &b;
    printf("%d\n", addr_b);

    addr_b --;
    printf("%d\n", addr_b);

    *addr_b = 9;
    printf("a:%d\n", a);

    /*
    int a0 = dati[0];
    int a1 = dati[1];

    printf("%d\n", a0);
    printf("%d\n", a1);

    int * addr0 = &dati[0];
    printf("addr0:%d\n", addr0);  
    addr0 ++;
    printf("addr0:%d\n", addr0);  

    int v = *addr0;
    printf("*:%d\n", v);

    */

}