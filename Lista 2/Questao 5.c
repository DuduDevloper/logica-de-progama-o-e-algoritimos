#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

	// Questao 5
	
	float n;
	float multiplicacao;
	float multi;
	
	printf("Insira o Numero: ");
	scanf("%f", &n);
	
	if(n < 0){
		multiplicacao = n * 3;
		printf("Triplo do numero%.2f: ", multiplicacao);
	}else if(n>=0){
		multi = n * 2;
		printf("Dobro do numero%2.f:", multi);
	}
	
	return 0;
}
