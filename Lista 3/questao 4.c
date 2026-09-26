#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

	int n1; int n2; int n3; int media;
	
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	media = (n1 + n2 + n3)/3;
	
	printf("Media final: %d",media);
	
	return 0;
}
