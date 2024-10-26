#include <stdio.h>

void main(){
    int a, b;
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    int mcm = a;

    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("mcm:%d\n",mcm);
    while( mcm%b > 0 ){
        mcm += a;
        printf("mcm:%d\n",mcm);
    }

    printf("Il mcm vale %d\n", mcm);


}