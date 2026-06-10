#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Digite o 1º valor: ");
    scanf("%i", &n1);
    
    printf("Digite o 2º valor: ");
    scanf("%i", &n2);
    
    if (n1 % n2 == 0) {
        printf("%i é multiplo de %i\n", n1, n2);
    } else{
        printf("%i não é multiplo de %i\n", n1, n2);
    }
    
    return 0;
}