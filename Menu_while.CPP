#include<stdio.h>
#include<stdlib.h>

int main(){
    int entrada = 0, total = 0;
    
    while(entrada >=0 && entrada <=2){
    printf("\nPosso anotar seu pedido?\n\n");
    printf("0: X-Burger - R$12\n");
    printf("1: Batata - R$8\n");
    printf("2: Refrigerante - R$6\n");
    printf("Entrada:");
    scanf("%i", &entrada);
    if(entrada == 0){
        total = total + 12;
    }else if(entrada == 1){
        total = total + 8;
    }else if(entrada == 2){
        total = total + 6;
    }
        
    }
    
    printf("Preco total: R$%i,00", total);
    
    scanf("%c");
    return(0);
}