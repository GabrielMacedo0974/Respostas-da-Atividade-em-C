#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Coloque um Numero e descubra se ele é positivo ou negativo: ");
		scanf("%d",&x );
	
	if (x>0) {printf("o número é positivo");
	}
	
    if (x<0) {printf("o número é negativo");
	}
	
	if (x==0) {printf("o número é nulo");
	
	}
	
	return 0;
}