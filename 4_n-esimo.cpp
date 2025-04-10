#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número positivo.\n");
        return 1;
    }

    printf("Sequência de Fibonacci até o %dº termo:\n", n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
