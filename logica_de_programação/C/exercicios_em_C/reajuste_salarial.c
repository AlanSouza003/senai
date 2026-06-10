#include <stdio.h>

int main()
{
    float sal, nsal;
    
    printf("Digite seu salário: R$");
    scanf("%f", &sal);
    
    if (sal <= 1500) {
        nsal = sal + (sal * 15) / 100;
        printf("Seu antigo salário era R$%.2f\n", sal);
        printf("Seu novo salário com aumento de 15% é: R$%.2f\n", nsal);
    } else if (sal >= 1501 && sal == 3000) {
        nsal = sal + (sal * 10) / 100;
        printf("Seu antigo salário era R$%.2f\n", sal);
        printf("Seu novo salário com aumento de 10% é: R$%.2f\n", nsal);
    } else {
        nsal = sal + (sal * 5) / 100;
        printf("Seu antigo salário era R$%.2f\n", sal);
        printf("Seu novo salário com aumento de 5% é: R$%.2f\n", nsal);
    }
    return 0;
}