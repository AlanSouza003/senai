#include <stdio.h>
#include <string.h>

int main(){
    char frase[200];

    printf("Digite uma frase: ");
    fgets(frase, 200,stdin);

    frase[strcspn(frase, "\n")] = '\0';

    printf("A frase digitada foi: '%s'.\n",frase);
    return 0;
}