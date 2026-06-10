#include <stdio.h>

int main() {
    float cidadeA = 80000;
    float cidadeB = 200000;
    int anos = 0;
    while (cidadeA <= cidadeB) {
        cidadeA += cidadeA * 0.03;
        cidadeB += cidadeB * 0.015;
        anos++;
    }
    printf("A cidade A ultrapassará a cidade B em %d anos.\n", anos);
    return 0;
}