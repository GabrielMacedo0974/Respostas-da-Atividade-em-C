#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    float centimetros , polegadas;

    printf("Coloque uma medida em centimetros para ser convertida em polegadas: ");
        scanf("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("%.2f centimetros é igual a %.2f polegadas\n", centimetros, polegadas);

     return 0;



}