#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Coloque um Número : ");
		scanf("%d",&x );
	
	if (x < 1) {
		x= x* -1;
	}
	
	printf("Valor: %d",x);
	
	return 0;
}