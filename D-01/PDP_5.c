#include <stdio.h>
int main(){
    int x;
    printf("-- 3x5+2x4–5x3–x2+7x–6 --\n");
    printf("Entrer une valeur positif pour x \n");
    scanf("%d", &x);
     int oper;
     oper= 3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+(7*x)-6;
    printf("La valeur du polynome est : %d", &oper);
    return 0;
}