#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int quantidade_maças;
    float preço, total;
    
    printf("Quantidade de Maças: ");
    scanf("%d", &quantidade_maças);

    if (quantidade_maças >= 12 ) {
        preço = 0.25;
    } else { 
        preço = 0.30;
    }
   
   total = quantidade_maças * preço;
   
   printf("preço de cada maça: %.2f\n", preço);
   printf("valor total: %.2f\n", total);
    return 0;
}