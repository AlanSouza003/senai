#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 200; i++) {
        printf("%i -> ", i);
        if (i % 2 == 0) {
            soma += i;
        }
    }
    printf("FIM");
    printf("\nA soma total dos números pares é: %d\n", soma);
    return 0;
}