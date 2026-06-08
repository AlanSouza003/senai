#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char texto[100];
    int i, cont = 0;

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    for(i=0; texto[i]!= '\0'; i++){
        if (texto[i] == 'a' || texto[i] == 'e' ||
            texto[i] == 'i' || texto[i] == 'o' ||
            texto[i] == 'u' || texto[i] == 'A' ||
            texto[i] == 'E' || texto[i] == 'I' ||
            texto[i] == 'O' || texto[i] == 'U'){
                cont ++;
            }
    }

    printf("O texto contém: %d vogais\n", cont);
    return 0;
}