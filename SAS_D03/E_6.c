#include <stdio.h>
#include <ctype.h>  

int main(void) {
    char message[100]; /
    int i;

    printf("Entrez votre message : ");
    fgets(message, sizeof(message), stdin); 

    printf("En B1FF-speak : ");

    for(i = 0; message[i] != '\0'; i++) {
        char c = toupper(message[i]); 


        switch(c) {
            case 'A': c = '4'; break;
            case 'B': c = '8'; break;
            case 'E': c = '3'; break;
            case 'I': c = '1'; break;
            case 'O': c = '0'; break;
            case 'S': c = '5'; break;
            default: break;
        }

        printf("%c", c);
    }

    printf("!!!!!!!!!!\n");

    return 0;
}
