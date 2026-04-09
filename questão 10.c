#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
setlocale(LC_ALL, "PORTUGUESE");

	int saque;
	
	printf("quantidade de cedulas que serão sacadas")
		scanf("%d",&saque);
	
	if (valor <=0){
		printf("valor invalido!\n")
		return 0;
	}
	
	if (valor % 2 !=0){
		printf("valor invalido!\n")
		return 0;
	}
	
	if (valor <=0){
		printf("Sem moedas\n")
		printf("não é possivel sacar um valor impar.\n")
		return 0;
	}
	
	int n100 = valor / 100;
	valor %= 100
	
	int n50 = valor / 50;
	valor %= 50	
	
	int n20 = valor / 20;
	valor %= 20
	
	int n10 = valor / 10;
	valor %= 10
	
	int n5 = valor / 5;
	valor %= 5
	
	int n2 = valor / 2;
	valor %= 2
	
	printf("\nNotas entregues: \n")
	printf("100 = %d\n", n100)
	printf("50 = %d\n", n50)
	printf("20 = %d\n", n20)
	printf("10 = %d\n", n10)
	printf("5 = %d\n", n5)
	printf("2 = %d\n", n2)
	
	
	return 0;
}