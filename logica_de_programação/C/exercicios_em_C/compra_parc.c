#include <stdio.h>
#include <math.h>

int main()
{
    float preco, juros, soma, preco_final;
    int parc;
    char produto[50];
    
    printf("LOJA PAGUE MAIS\n"
    " E LEVE MENOS\n");
    
    printf("Digite o nome do produto: ");
    scanf("%s", &produto);

    printf("Digite o valor: R$");
    scanf("%f", &preco);

    printf("De quantas vezes? [até 3x sem juros] ");
    scanf("%i", &parc);

    if (parc > 3) {
        juros =  preco * (0.02 * pow(1.02, 4)) / (pow(1.02, 4) - 1);
        printf("Sua compra ficou por %ix de %.2f com juros\n", parc, juros);
    } else {
        soma = preco / parc;
        printf("Sua compra ficou por %ix de %.2f sem juros\n", parc, soma);
    }
    return 0;
}