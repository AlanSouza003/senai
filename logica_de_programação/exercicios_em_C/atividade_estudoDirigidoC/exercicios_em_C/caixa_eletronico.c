#include <stdio.h>

int main() {
    float preco, soma, media;
    int c = 0;

    do {
        printf("Digite o preço: R$");
        scanf("%f", &preco);
        if (preco == 0) break;
        soma += preco;
        c++;
    } while (preco != 0);
    printf("Total das compras foi: R$%.2f\nA quantidade foi de: %i Produtos\n"
        "A média dos produtos foi: R$%.2f\n", soma, c, soma/c);
}