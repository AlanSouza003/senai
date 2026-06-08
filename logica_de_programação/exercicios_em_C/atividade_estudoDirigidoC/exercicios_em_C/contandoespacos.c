#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char texto[100];
    int i, cont = 0;

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    for(i=0; texto[i]!= '\0'; i++){
        if(texto[i] == ' ') cont ++;
    }

    printf("O texto contém: %d espaços.\n", cont);
    return 0;
}