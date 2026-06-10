#include <stdio.h>

int main() {

    printf("1");

    for (int i = 2; i <= 30; i++) {
        if (i % 2 != 0) {
            printf("- %d", i);
        } else {
            printf("%d ", -i);
        }
    }
    printf("\n");
    return 0;
}