#include <stdio.h>

int main(void) {
    int a[10];
    int i;
    int N = (int)(sizeof(a) / sizeof (a[0]));
    
    printf("Entrer %d nombres : ", N);
    for (i = 0; i < N; i++)
    scanf("%d", &a[i]);

    printf("Dans l'ordre inverse :");
    for (i = N - 1; i >= 0; i--)
       printf("%d", a[i]);
       
     
       return 0;
}