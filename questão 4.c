#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    int soma, mult;
    float div;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo número inteiro: ");
        scanf( "%d", &n2);
        
        soma = n1 + n2;
        div = (float) n1 / n2;
        mult = n1 * n2;

    printf("Soma: %d\n", soma);
    printf("Divisão: %f\n", div);
    printf("Multiplicação: %d\n", mult );

    return 0;
}