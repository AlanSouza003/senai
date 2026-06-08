#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char original[100], copia[100];
    int i;

    printf("O que busca? ");
    fgets(original, 100, stdin);

    strcpy(copia, original);

    for(i=0; copia[i]!= '\0'; i++){
        copia[i] = toupper(copia[i]);
    }

    printf("Esse é o original: %sEssa é a copia: %s", 
    original, copia);
    return 0;
}