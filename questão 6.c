#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

    float raio, area, pi;

    printf("Digite o valor do raio do círculo: ");
        scanf("%f", &raio);

    pi = 3.14159;
    area = pi * raio * raio;

    printf("%.2f resulta numa área do círculo é: %.2f\n", raio, area);

    return 0;
}