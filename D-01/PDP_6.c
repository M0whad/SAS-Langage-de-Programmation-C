#include <stdio.h>
int main(){
    int x;
    int oper;
    printf("--((((3x + 2)x-1)x+7)x-6");
    printf("entrer une valeur pour x: \n");
    scanf("%d", &x);

    oper = ((((3*x+2)*x - 5)*x-1)*x+7)*x-6;

    printf("Le resultat de cette operation est: %d", oper);
    return 0;
}

