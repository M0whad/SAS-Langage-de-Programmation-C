#include <stdio.h>

int main(void) {
    long n;
    int digit, count[10];

    while (1) {
        printf("Entrez un nombre (<= 0 pour quitter) : ");
        scanf("%ld", &n);
        if (n <= 0) {
            printf("Programme terminé.\n");
            break;
        }
        for (int i = 0; i < 10; i++)
            count[i] = 0;

        long temp = n;
        while (temp > 0) {
            digit = temp % 10;
            count[digit]++;
            temp /= 10;
        }
    int repet = 0;
        printf("Résultat pour %ld : ", n);
        for (int i = 0; i < 10; i++) {
            if (count[i] > 1) {
                if (!repet) {
                    printf("chiffres répétés → ");
                    repet = 1;
                }
                printf("%d ", i);
            }
        }

    return 0;
}
}