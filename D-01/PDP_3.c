#include <stdio.h>
 int main(){
    int val;
    printf("Entrer le montant en dollars: \n");
    scanf("%d",&val);
    float taxe = val * (0.05f);
    printf("Avec tax ajoutee : %d", &taxe);
    return 0;
 }
 