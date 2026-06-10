#include <stdio.h>

int main() {
    int num, soma = 0, cont = 0;
    while (soma <= 100) {

        printf("Digite um valor [para quando a soma for maior que 100]: ");
        scanf("%d", &num);

        soma += num;
        cont++;
    }
    printf("Quantidade: %d\nSoma total: %d\n", cont, soma);
    return 0;
}