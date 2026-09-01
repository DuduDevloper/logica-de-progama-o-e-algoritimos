#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

	
// Questao 2 

	char nome[10];
	int sexo;
	float estado_civil;
	float tempo;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Insira seu sexo:\n1=masculino\n2=feminino:\n");
	scanf("%d", &sexo);
	
	printf("Insira seu estado civil:\n1=Casado\n2=Viuvo\n3=Solteiro:\n");
	scanf("%f", &estado_civil);
	
	if(sexo == 2 && estado_civil == 1){
		printf("Insira o tempo de casamento em anos: ");
		scanf("%f", &tempo);
	}

			
	
	return 0;
}
