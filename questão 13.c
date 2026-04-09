#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
setlocale(LC_ALL, "PORTUGUESE");

	float Carro, P1, P2, Final;

	printf("Digite aqui o preço inicial do carro para que seja dado o preço final: ");
	scanf("%f", &Carro);
	
	P1 = Carro*0.45 + Carro;
	P2 = P1*0.28 + P1;
	Final = P2;
	
	printf("O preço final do carro é de R$ %.2f\n", Final);
	
	
	return 0;
}