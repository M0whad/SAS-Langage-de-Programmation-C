#include <stdio.h>

#define P 3.14
int main(){
   int r, volume;
   
    r = 10;
   volume =(4.0f/3.0f)*P*r*r*r;
   printf("Le volume du sphere est : %d", volume);
   return 0;
}
/*si on ecrit 4/3 au lieu de on trouve pas la meme resultat */