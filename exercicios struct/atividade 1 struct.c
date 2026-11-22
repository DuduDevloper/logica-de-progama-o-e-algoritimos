#include <stdio.h> 


struct Aluno{
	char nome[50];
	int matricula;
	float nota1;
	float nota2;
	float media;
};

void mediaAluno(struct Aluno *a) {
    float soma = a->nota1 + a->nota2;
    a->media = soma / 2.0;
}

#define TOTAL 10
void cadastrar (struct Aluno alunos[], int i){
    
    if(i == TOTAL){
        printf("MEMORIA CHEIA\n");
        return;
    }
    
    
     printf("\n---------------- Aluno %d ----------------\n", i + 1); 
        printf("Nome: ");
		scanf(" %50[^\n]", alunos[i].nome);
        printf("Matricula: "); 
        scanf("%d", &alunos[i].matricula); 
        printf("Nota 1: "); 
        scanf("%f", &alunos[i].nota1); 
        printf("Nota 2: "); 
        scanf("%f", &alunos[i].nota2); 
        
        mediaAluno(&alunos[i]);
        printf("Media do aluno: %.2f\n", alunos[i].media);
        
        if(alunos[i].media >= 6){
            printf("Aprovado!");
        }else{
            printf("Reprovado!");
        }
        
}

void exibirMenorMaiorMedia(struct Aluno alunos[], int total) {
    if (total <= 0) {
        printf("0 alunos cadastrados!\n");
        return;
    }

    struct Aluno *menor = &alunos[0];
    struct Aluno *maior = &alunos[0];

    for (int i = 1; i < total; i++) {
        if (alunos[i].media < menor->media) {
            menor = &alunos[i];
        }
        if (alunos[i].media > maior->media) {
            maior = &alunos[i];
        }
    }

    printf("\nAluno com a menor media:\n");
    printf("Nome: %s\n", menor->nome);
    printf("Media: %.2f\n", menor->media);

    printf("\nAluno com a maior media:\n");
    printf("Nome: %s\n", maior->nome);
    printf("Media: %.2f\n", maior->media);
}

float calcularMediaGeral(struct Aluno alunos[], int total) {
    if (total <= 0) {
        return 0.0;
    }

    float soma = 0.0;
    for (int i = 0; i < total; i++) {
        soma += alunos[i].media;
    }
    return soma / total;
}

int contarAcimaMediaGeral(struct Aluno alunos[], int total, float mediaGeral) {
    int count = 0;
    for (int i = 0; i < total; i++) {
        if (alunos[i].media > mediaGeral) {
            count++;
        }
    }
    return count;
}

int main(void){
	struct Aluno alunos[TOTAL]; 
	
	for (int i = 0; i < TOTAL; i++) { 
	    cadastrar(alunos,i);
    } 

    exibirMenorMaiorMedia(alunos, TOTAL);
    float mediaGeral = calcularMediaGeral(alunos, TOTAL);
    printf("\nMeedia geral turma: %.2f\n", mediaGeral);

    int acimaMediaGeral = contarAcimaMediaGeral(alunos, TOTAL, mediaGeral);
    printf("Numero de alunos acima da media geral: %d\n", acimaMediaGeral); 











	return 0;
}
