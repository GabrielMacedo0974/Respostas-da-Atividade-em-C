#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	
	printf("Coloque o primeiro Número: ");
		scanf("%d", &x);
		
	printf("Coloque o segundo número: ");
		scanf("%d", &y);
	
	if (x == y) {
		printf("Os números são iguais ");
	} 
	
	if (x != y){ 
	printf("Os números são diferentes ");
	}
	
	return 0;
}