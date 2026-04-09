#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float comissao, salario;

    printf("Digite o valor ganho pelas vendas das comissões esse mês: ");
        scanf("%f", &comissao);

    printf("Digite a quantidade de dinheiro do salário : ");
        scanf("%f", &salario);

    salario = comissao * 0.15 + salario;

    printf("O salário total é de R$ %.2f\n", salario);

    return 0;
}