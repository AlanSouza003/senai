#include <stdio.h>

int main()
{
    float l1, l2, l3, soma;
    
    printf("Digite o 1º lado: ");
    scanf("%f", &l1);
    
    printf("Digite o 2º lado: ");
    scanf("%f", &l2);
    
    printf("Digite o 3º lado: ");
    scanf("%f", &l3);
    
    soma = l1 + l2;
    
    if(soma > l3) {
       printf("Os lados acima formam um triângulo: ");
        if (l1 == l2 && l2 == l3 && l3 == l2) {
            printf("EQUILÁTERO\n");
        } else if (l1 == l2 || l2 == l3 || l3 == l1) {
            printf("ISÓSCELES\n");
        } else if (l1 != l2 && l2 != l3 && l3 != l2){
            printf("ESCALENO\n");
        } 
    }else {
        printf("Os lados acima não formam um triângulo.\n");
    } 
    
    
    
    return 0;
}