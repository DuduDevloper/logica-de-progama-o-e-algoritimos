#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

	
// Questao 4
	
	int A, B;
	float soma;
	float multiplicacao;
	
	printf("Insira o valor de A: ");
	scanf("%d", &A);
	
	printf("Insira o valor de B: ");
	scanf("%d", &B);
	
	soma = A + B;
	multiplicacao = A * B;
	if(A == B){
		soma = A + B;
		printf("Valor de A+B:%.2f", soma);
	}else if(A != B){
		multiplicacao = A * B;
		printf("\nValor de A*B:%.2f", multiplicacao);
	}



			
	
	return 0;
}
