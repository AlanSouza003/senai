#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];

    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);

    printf("A última letra da sua palavra é: '%c'\n", palavra[strlen(palavra)-2]);
    return 0;
}