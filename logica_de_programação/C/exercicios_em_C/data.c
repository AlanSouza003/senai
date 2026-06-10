#include <stdio.h>

int main()
{
    int c, dia, mes, ano;
    int dia_a, mes_a, ano_a;
    
    for (c = 1; c <= 2; c++) {
        
        printf("Digite a data %i (dd/mm/aaaa): ", c);
        scanf("%d/%d/%d", &dia, &mes, &ano);
        
        if (c == 1) {
            dia_a = dia;
            mes_a = mes;
            ano_a = ano;
        } if (mes == 2 && dia > 29) {
            printf("O mês de Fevereiro so vai até a data 28 e 29 quando o ano é bissexto.\n"); 
            break;
        } 
        
        if (c == 2) {
            if (ano > ano_a) {
                printf("\nA data mais recente é %02d/%02d/%d\n", dia, mes, ano);
            } else if (ano_a > ano) {
                printf("\nA data mais recente é %02d/%02d/%d\n", dia_a, mes_a, ano_a);
            } else if (mes > mes_a) {
                printf("\nA data mais recente é %02d/%02d/%d\n", dia, mes, ano);
            } else if (mes_a > mes) {
                printf("\nA data mais recente é %02d/%02d/%d\n", dia_a, mes_a, ano_a);
            } else if (dia > dia_a) {
                printf("\nA data mais recente é %02d/%02d/%d\n", dia, mes, ano);
            } else if (dia_a > dia) {
                printf("\nA data mais recente é %02d/%02d/%d\n", dia_a, mes_a, ano_a);
            } else {
                printf("\nAs datas são iguais.\n");
            }
        }
    } 
    
    return 0;
}
