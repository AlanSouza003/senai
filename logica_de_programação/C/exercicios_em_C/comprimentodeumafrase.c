#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    printf("O comprimento da frase digitada é: %d\n", strlen(frase)-1);
    return 0;
}