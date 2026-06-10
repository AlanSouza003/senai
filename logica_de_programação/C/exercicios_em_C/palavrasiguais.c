#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palavra0[100], palavra1[100];

    printf("Digite uma palavra: ");
    fgets(palavra0, 100, stdin);

    printf("Digite outra palavra: ");
    fgets(palavra1, 100, stdin);

    if(strcmp(palavra0, palavra1) == 0) {
        printf("As palavra são iguais!\n");
    } else{
        printf("As palavras são diferentes!\n");
    }
    return 0;
}