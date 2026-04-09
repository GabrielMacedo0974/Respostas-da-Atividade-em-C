#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, opcao;
    float resultado;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);
    
   printf("\nescolha a operacao:\n");
   printf("1 - soma\n");
   printf("2 - subtracao\n");
   printf("3 - multi\n");
   printf("4 - div\n");
   scanf("%d", &opcao);
   
    switch(opcao) { 
        case 1:
        resultado = n1 + n2;
        printf("resultado da soma: %.2f\n", resultado);
        break;
        
         case 2:
        resultado = n1 - n2;
        printf("resultado da subtração: %.2f\n", resultado);
        break;
    
        case 3:
        resultado = n1 * n2;
        printf("resultado da Multiplicação: %.2f\n", resultado);
        break;
    
        case 4:
        resultado = n1 / n2;
        printf("resultado da Divisão: %.2f\n", resultado);
        break;
        
        default:
            printf("opcao invalida. \n");
    }
    return 0;
}