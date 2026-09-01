#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

	
// Questao 1

	int A;
	int B;
	int C;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	
	printf("Digite o valor de C: ");
	scanf("%d", &C);
	
	if(A + B > C){
		printf("A soma de A+B e maior que o valor de C");
		}
		else if(A + B < C){
			printf("A soma de A+B e menor que o valor de C");
		}
			
	
	return 0;
}
