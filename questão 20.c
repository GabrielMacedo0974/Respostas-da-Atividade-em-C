#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, z, aux;
	
	printf("digite 3 número para que sejam colocados em ordem crescente.\n");
	printf("Coloque o primeiro Número: ");
		scanf("%d", &x);
		
	printf("Coloque o segundo número: ");
		scanf("%d", &y);
	
	printf("Coloque o terceito número: ");
		scanf("%d", &z);
		
	if (x>y){
	aux = x;
	x = y;
	y = aux;
	}
	
	if (x>z) {
	aux = x;
	x = z;
	z = aux;
	}
	
	if (y>z) {
	aux = y;
	y = z;
	z = aux;
	}
	
	printf("Ordem Crescente: %d %d %d",x ,y ,z);
	
	return 0;
}