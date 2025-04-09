#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b = 1;
    printf("Digite um numero para calcular o fatorial:\n");
    scanf("%i", &a);
    while (a>0){
        b = b * a;
        a--;
    }
    printf("Fatorial eh:%i\n", b);
    scanf("%c");
    return 0;
}
