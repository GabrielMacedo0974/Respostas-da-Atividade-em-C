#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Coloque um Numero e descubra se ele é positivo ou negativo: ");
		scanf("%d",&x );
	
	if (x % 2 == 0) {printf("o número é par");
	}
	
    if (x % 2 > 0) {printf("o número é impar");
	}
	
	return 0;
}