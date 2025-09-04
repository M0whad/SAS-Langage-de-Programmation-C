// #include <stdio.h>

// int main(){
//     int digit_seen[10] = 0 ;
//     int digit;
//     long n;

//     printf("Entrez un nombre: ");
//     scanf("ld", &n);

//     while(n > 0) {
//         for(int i = 0; i < 10 ; i++) {
//         if digit_seen[i] > 1) {
//         if (digit_seen[digit])
        
//         digit_seen [digit];
//            break;
//         digit_seen[digit];
//         n /= 10;
//     }
//      if (n  > 0)
//     printf("Des chiffres sont repetes.\n");
//     else
//     printf ("Aucun chiffre repete.\n");
//     return 0;
// }
// }
#include <stdio.h>

int main(void) {
   while(1){
     int calcule[10] = {0}; 
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        calcule[digit]++;   
        n /= 10;
    }

    int repet = 0;
    printf("Chiffres répétés : ");
    for (int i = 0; i < 10; i++) {
        if (calcule[i] > 1) {
            printf("%d ", i);
            repet = 1;
        }
    }
    return 0;
}
