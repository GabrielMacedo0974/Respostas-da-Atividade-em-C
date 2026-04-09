#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x, y;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &x);
    printf("Digite o segundo numero inteiro: ");
    scanf( "%d", &y);

    printf("Soma: %d\n", x + y);

    return 0;
}