#include <stdio.h>

int main() {
    int num, cont = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cont++;
        }
    }
    printf("O valor %i possui %d divisores.\n", num, cont);
    return 0;
}