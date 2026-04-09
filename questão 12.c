#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
setlocale(LC_ALL, "PORTUGUESE");

	float media1, media2, somaMedia, mediaDasMedias;
	
	media1 = (7 + 8 + 9) / 3.0;
	media2 = (4 + 5 + 6) / 3.0;

	somaMedia = media1 + media2;
	mediaDasMedias = somaMedia / 2;


	printf("Media 1 = %.2f\n", media1);
	printf("Media 2 = %.2f\n", media2);
	printf("Soma das Media = %.2f\n", somaMedia);
	printf("Media das medias = %.2f\n",mediaDasMedias);
	
	
	return 0;
}