#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, z;
	
	printf("Coloque o primeiro lado da piramide: ");
		scanf("%d", &x);
		
	printf("Coloque o segundo lado da piramide: ");
		scanf("%d", &y);
	
	printf("Coloque o terceito lado da piramide: ");
		scanf("%d", &z);
		
	if ((x<y+z)&&(y<x+z)&&(z<x+y)) {
		printf("Temos um triangulo\n");

		if((x==y)&&(y==z)){
			printf("O triangulo é equilatero\n");
			
		} else 
		{
			if ((x!=y)&&(x!=z)&&(y!=z)){
			printf("O triangulo é escaleno\n");
		} else{
		if (printf("O triangulo é isosceles\n"));
	}
	}
	
	

	
	} else {
	printf("Não temos um triangulo\n");
	}
	printf("Sistema encerrado");
	return 0;
}