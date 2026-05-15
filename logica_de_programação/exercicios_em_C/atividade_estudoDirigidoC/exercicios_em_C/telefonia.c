#include <stdio.h>

int main() {
    int minutos;
    float total;
    printf("Quantos minutos: ");
    scanf("%d", &minutos);
    if (minutos <= 100) {
        total = minutos * 1.50;
        printf("O valor a ser cobrado com a tarifa normal é de R$%.2f\n", total);
    } else {
        total = (100 * 1.50) + ((minutos - 100) * 2.00);
        printf("O valor a ser cobrado com a adicional é de R$%.2f\n", total);
    }
    return 0;
}