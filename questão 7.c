#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

const float pi = 3.14159;
    float h, r, v, a;

printf("digite o valor do raio (use . para decimal): ");
        scanf("%f", &r);

printf("digite o valor da altura (use . para decimal): ");
        scanf("%f", &h);

    v = pi * r * r * h;
    a = 2 * pi * r * (h + r);

//printf("r=%.2f - \nh=%.2f \na=%.2f - nv=%.2f",r,h,a,v);

printf("O volume do cilindro é: %.2f\n", v);

        return 0;
}