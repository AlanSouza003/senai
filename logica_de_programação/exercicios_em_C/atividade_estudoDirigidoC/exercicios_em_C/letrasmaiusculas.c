#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[100];
    int i;

    printf("Digite uma frase/palavra: ");
    fgets(frase, 100, stdin);

    for (i = 0; frase[i]!='\0'; i++)
    {
        frase[i] = toupper(frase[i]);
    }
    
    printf("%s", frase);

    return 0;
}