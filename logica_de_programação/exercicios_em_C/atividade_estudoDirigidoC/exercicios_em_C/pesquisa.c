#include <stdio.h>

int main() {
    int idade, opiniao, soma_idade = 0;
    int otimo = 0, bom = 0, regular = 0, pessimo = 0;
    for (int i = 0; i < 10; i++) {

        printf("Idade: ");
        scanf("%d", &idade);
        printf("---------------\n");
        printf("%iº Opinião:\n", i+1);
        printf("[1] OTIMO\n"
        "[2] BOM\n"
        "[3] REGULAR\n"
        "[4] PESSIMO\n"
        "Digite sua opção: ");
        scanf("%d", &opiniao);
        printf("---------------\n");

        soma_idade += idade;

        if (opiniao == 1) otimo++;
        else if (opiniao == 2) bom++;
        else if (opiniao == 3) regular++;
        else if (opiniao == 4) pessimo++;
    }

    printf("RESULTADO\n");
    printf("---------------\n");
    printf("Media: %.2f\n", soma_idade / 10.0);
    printf("ÒTIMO: %d\nBOM: %d\nREGULAR: %d\nPÉSSIMO: %d\n", otimo, bom, regular, pessimo);
    return 0;
}