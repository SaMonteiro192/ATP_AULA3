#include <stdio.h>
#include <stdlib.h>

int main() {
    int altura, i, j;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);

    if (altura <= 0) {
        printf("A altura deve ser um número positivo.\n");
        return 1;
    }

    for (i = 1; i <= altura; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
