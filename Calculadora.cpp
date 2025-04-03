#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, operacao, resultado;
    printf("Qual operacao deseja realizar?\n");
    printf("0 - Adicao\n");
    printf("1 - Subtracao\n");
    printf("2 - Multiplicacao\n");
    printf("3 - Divisao\n");
    scanf("%d", &operacao);
    
    printf("Agora digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    
    if(operacao == 0){
        resultado = a + b;
    }else if (operacao == 1){
        resultado = a - b;
    }else if (operacao ==2){
        resultado = a * b;
    }else if (operacao ==3){
        resultado = a/b;
    }printf("O resultado eh:\n %d", resultado);
    
    scanf("%c");
    return(0);
}