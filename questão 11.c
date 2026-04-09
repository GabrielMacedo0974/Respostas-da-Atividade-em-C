#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "PORTUGUESE");

	float compra, valor;
	int trocoCentavos;
	
	printf("coloque o valor da compra do produto: ");
		scanf("%f", &valor);
	
	printf("coloque o valor dado ao caixa: ");
		scanf("%f", &compra);
		
	trocoCentavos = (compra - valor)*100;
		
	printf("\n troco = R$ %.2f\n\n", trocoCentavos / 100.0);
	
	int n100 = trocoCentavos / 10000;
		trocoCentavos %= 10000;
	
	int n50 = trocoCentavos / 5000;
		trocoCentavos %= 5000;
	
	int n20 = trocoCentavos / 2000;
		trocoCentavos %= 2000;

	int n10 = trocoCentavos / 1000;
		trocoCentavos %= 1000;
	
	int n5 = trocoCentavos / 500;
		trocoCentavos %= 500;
	
	int n2 = trocoCentavos / 200;
		trocoCentavos %= 200;
	
	int m1 = trocoCentavos / 100;
		trocoCentavos %= 100;
	
	int m50 = trocoCentavos / 50;
		trocoCentavos %= 50;
	
	int m25 = trocoCentavos / 250;
		trocoCentavos %= 250;
	
	int m10 = trocoCentavos / 10;
		trocoCentavos %= 10;
	
	int m5 = trocoCentavos / 5;
		trocoCentavos %= 5;
	
	int m1cent = trocoCentavos;
	
	printf("Notas: \n");
	printf("100 = %d\n", n100);
	printf("50 = %d\n", n50);
	printf("20 = %d\n", n20);
	printf("10 = %d\n", n10);
	printf("5 = %d\n", n5);
	
	printf("\nMoedas:\n");
	printf("1 real = %d\n", m1);
	printf("50 cent = %d\n", m50);
	printf("25 cent = %d\n", m25);
	printf("10 cent = %d\n", m10);
	printf("5 cent = %d\n", m5);
	printf("1 cenr = %d\n", m1cent);
	
	return 0;
}