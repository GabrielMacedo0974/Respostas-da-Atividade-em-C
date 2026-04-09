#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x, y;
    printf("Digite o primeiro número inteiro: ");
    scanf("%i", &x);

    printf("Digite o segundo número inteiro: ");
    scanf( "%i", &y);

    int quociente = x / y;
    int resto = x % y;

    printf("Quociente: %i\n", quociente);
    printf("Resto: %i\n", resto);

    return 0;
}