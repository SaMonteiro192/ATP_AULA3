#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int a = 0, b = 1, next;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número não negativo.\n");
        return 1;
    }

    printf("Sequência de Fibonacci até %d:\n", n);

   
    printf("%d", a);

    while (b <= n) {
        printf(", %d", b);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
