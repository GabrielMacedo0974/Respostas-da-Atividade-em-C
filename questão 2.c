#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int number, antecessor, sucessor;

    printf("Digite o número : ");
    scanf("%d", &number);

    antecessor = number - 1;
    sucessor = number + 1;
    printf("antecessor: %d\n", antecessor);
    printf("sucessor: %d\n", sucessor);

    return 0;
}