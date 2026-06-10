#include <stdio.h>

int main() {
    int inicio, final;

    printf("Inicio: ");
    scanf("%d", &inicio);

    printf("Final: ");
    scanf("%d", &final);

    for (int i = inicio; i >= final; i--) {
        printf("%d -> ", i);
    }
    printf("FIM\n");
    return 0;
}