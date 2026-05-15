#include <stdio.h>

int main()
{
    char opcao;
    
    printf("[M] MATUTINO\n"
    "[V] VESPERTINO\n"
    "[N] NOTURNO\n");
    
    printf("Escolha uma das opções acima: ");
    scanf("%s", &opcao);
    
    if (opcao == 'M') {
        
        printf("Bom dia!\n");
        
    } else if (opcao == 'V') {
        
        printf("Boa tarde!\n");
        
    } else if (opcao == 'N') {
        
        printf("Boa noite!\n");
    } else {
        printf("OPÇÃO INVALIDA!\n");
    }
    
    return 0;
}