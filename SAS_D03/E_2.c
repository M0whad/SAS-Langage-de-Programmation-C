#include <stdio.h>

int main(void) {
    int count[10] = {0};  
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

    
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    
    printf("Tableau des occurrences des chiffres :\n");
    for (int i = 0; i < 10; i++) {
        printf("Chiffre %d : %d fois\n", i, count[i]);
    }

    return 0;
}