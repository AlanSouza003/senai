#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];

    printf("Digite uma frase: ");
    fgets(palavra, 100, stdin);

    printf("A primeira letra da palavra escrita acima é: %c\n", palavra[0]);
    return 0;
}