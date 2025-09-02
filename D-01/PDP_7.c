#include <stdio.h>
int main(){
    int montant;
    printf("Entrer un montant en dollars :");
    scanf("%d", &montant);
     
   int twenty = montant / 20;
   montant = montant % 20;
   int ten = montant / 10;
   montant = montant % 10;
   int five = montant / 5;
   montant = montant % 5;
   int one = montant / 1;
   montant = montant % 1;

   printf("Billets de 20$: %d", &twenty);
   printf ("Billets de 10$: %d", &ten);
   printf("Billets de 5$: %d", &five);
   printf("Billets de 1$:%d", &one);

   return 0;
}