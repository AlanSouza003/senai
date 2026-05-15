#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("Digite seu peso: kg");
    scanf("%f", &peso);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc > 18.5 && imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc > 25.0 && imc < 40.0) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }
     
    return 0;
}