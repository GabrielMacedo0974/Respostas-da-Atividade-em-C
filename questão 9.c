#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "PORTUGUESE");

	int x, y;
	
	
	printf("coloque o valor de x para que ele seja trocado pelo de y: ");
		scanf("%d", &x);
	
	printf("coloque o valor de y para que ele seja trocado pelo de x: ");
		scanf("%d", &y);
	
	printf("o valor de x agora e %d e o valor de y agora é %d", y, x);
	
	return 0;
}