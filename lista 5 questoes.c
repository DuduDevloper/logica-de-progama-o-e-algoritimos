#include <stdio.h>
#include <string.h>

#define TOTAL 4

struct Aluno {
	char nome[50];
	int matricula;	
	float nota1;
	float nota2;
	float media;

};

void mediaAluno(struct Aluno *a) {
	float soma = a->nota1 + a->nota2;
	a->media = soma/2.0;
}

void cadastrar (struct Aluno aluno1[], int i){
	
	if (i == TOTAL){
		printf("MEMORIA CHEIA\n");
		return;
	}
	
	printf("\n===========Aluno %d ===========\n", i + 1);
    printf("Insira o nome do aluno: ");
//    fgets(aluno1[i].nome, 50, stdin);
//    getchar();
	scanf(" %50[^\n]", aluno1[i].nome);
	
    printf("Insira a matricula do aluno: ");
    scanf("%d", &aluno1[i].matricula);
    
    printf("Insira a nota 1: ");
	scanf("%f", &aluno1[i].nota1);
	
	printf("Insira a nota 2: ");
	scanf("%f", &aluno1[i].nota2);
	
	mediaAluno(&aluno1[i]);
	printf("Media do aluno: %.2f\n", aluno1[i].media);
	
	if (aluno1[i].media >= 6){
		printf("APROVADO");
		} else{
		printf("REPROVADO");
		}

}

void mediaGeral(struct Aluno aluno1[], int i){
	
}


int main(){
	
	struct Aluno aluno1[TOTAL];
	
	for(int i = 0; i < TOTAL; i++){
	
	cadastrar(aluno1,i);
}
	
	return 0;
}






















// for(int i = 0; i < TOTAL; i++){
//	printf("\n===========Aluno %d ===========\n", i + 1);
//    printf("Insira o nome do aluno: ");
////    fgets(aluno1[i].nome, 50, stdin);
////    getchar();
//	scanf(" %50[^\n]", aluno1[i].nome);
//	
//    printf("Insira a matricula do aluno: ");
//    scanf("%d", &aluno1[i].matricula);
//    
//    printf("Insira a nota 1: ");
//	scanf("%f", &aluno1[i].nota1);
//	
//	printf("Insira a nota 2: ");
//	scanf("%f", &aluno1[i].nota2);
//	
//	MediaAluno(&aluno1[i]);
//	printf("Media do aluno: %.2f\n", aluno1[i].media);
//	
//	if (aluno1[i].media >= 6){
//		printf("APROVADO");
//		} else{
//			("REPROVADO");
//		}
//}

