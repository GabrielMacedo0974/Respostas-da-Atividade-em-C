#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, z;
	
	printf("Coloque o primeiro Número: ");
		scanf("%d", &x);
		
	printf("Coloque o segundo número: ");
		scanf("%d", &y);
	
	printf("Coloque o terceito número: ");
		scanf("%d", &z);
		
	if ((x>y)&&(x>z)) {
		printf("Este foi o maior numero colocado: %d",x);
	} 
	
	if ((y>x)&&(y>z)) {
		printf("Este foi o maior numero colocado: %d",y);
	} 
	if ((z>y)&&(z>x)) {
		printf("Este foi o maior numero colocado: %d",z);
	} 
	
	return 0;
}