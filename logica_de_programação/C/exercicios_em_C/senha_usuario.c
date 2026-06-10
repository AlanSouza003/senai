#include <stdio.h>

int main()
{
    int senha;
    char usuario[50];
    
    printf("Seu usuário: ");
    scanf("%s", &usuario);
    
    printf("Digite sua senha: ");
    scanf("%i", &senha);
    
    if (senha == 1234) {
        printf("Olá %s, seu acesso foi liberado.\n", usuario);
    } else {
        printf("Acesso negado\n");
    }
    return 0;
}