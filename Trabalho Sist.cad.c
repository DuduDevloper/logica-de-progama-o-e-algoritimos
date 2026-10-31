#include <stdio.h>
#include <string.h>

void menu();
void cadastrar(int aluno[], char nome[][15], int *total);
void consultar(int aluno[], char nome[][15], int total);
void listar(int aluno[], char nome[][15], int total);
void alterar(int aluno[], char nome[][15], int total);
void excluir(int aluno[], char nome[][15], int *total);

int main()
{
    int aluno[5];
    char nome[5][15];
    int opcao;
    int total = 0;

    do {
        menu();
        printf("\nSelecione uma opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {

            case 1:
                cadastrar(aluno, nome, &total);
                break;

            case 2:
                consultar(aluno, nome, total);
                break;

            case 3:
                listar(aluno, nome, total);
                break;

            case 4:
                alterar(aluno, nome, total);
                break;

            case 5:
                excluir(aluno, nome, &total);
                break;

            case 0:
                printf("\nSaindo do sistema...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
                break;
        }

    } while(opcao != 0);

    return 0;
}

void menu()
{
    printf("\n========== MENU ==========");
    printf("\nCadastro de Aluno: 1");
    printf("\nConsultar: 2");
    printf("\nListar: 3");
    printf("\nAlterar: 4");
    printf("\nExcluir: 5");
    printf("\nSair: 0");
    printf("\n==========================\n");
}

void cadastrar(int aluno[], char nome[][15], int *total)
{
    int opcaocadastro;
    int encontrado;
    int novo_codigo;

    printf("\n========== CADASTRO ==========\n");
    do {

        if (*total >= 5) {
            printf("\nNumero maximo de alunos atingido!\n");
            break;
        }

        printf("\nDigite o codigo: ");
        scanf("%d", &novo_codigo);
        encontrado = 0;

        for(int i = 0; i < *total; i++) {

            if(novo_codigo == aluno[i]) {
                encontrado = 1;
                break;
            }
        }
        if(encontrado == 1) {
            printf("\nEsse codigo ja esta cadastrado!\n");
        }
        
        else {
            aluno[*total] = novo_codigo;

            getchar();

            printf("Digite o nome: ");
            fgets(nome[*total], 15, stdin);
            nome[*total][strcspn(nome[*total], "\n")] = '\0';
            (*total)++;
            printf("\nAluno cadastrado com sucesso!\n");
        }

        printf("\nDeseja cadastrar outro aluno?");
        printf("\n1 - Sim | 0 - Nao\n");
        scanf("%d", &opcaocadastro);
        
    } while(opcaocadastro == 1);
}

void consultar(int aluno[], char nome[][15], int total)
{
    int consulta;
    int encontrado = 0;

    printf("\n========== CONSULTAR ==========\n");

    if(total == 0) {
        printf("Nada cadastrado!\n");
        return;
    }

    printf("Digite o codigo da busca: ");
    scanf("%d", &consulta);

    for(int i = 0; i < total; i++) {

        if(consulta == aluno[i]) {

            printf("\nCodigo do aluno: %d", aluno[i]);
            printf("\nNome do aluno: %s\n", nome[i]);

            encontrado = 1;
            break;
        }
    }

    if(encontrado == 0) {
        printf("\nRegistro nao encontrado.\n");
    }
}

void listar(int aluno[], char nome[][15], int total)
{
    printf("\n========== LISTA ==========\n");

    if(total == 0) {
        printf("Nada cadastrado!\n");
    }
    else {

        for(int i = 0; i < total; i++) {

            printf("\nCodigo do aluno: %d", aluno[i]);
            printf("\nNome do aluno: %s\n", nome[i]);
        }
    }
}

void alterar(int aluno[], char nome[][15], int total)
{
    int consulta;
    int novo_codigo;
    int encontrado = 0;
    int repetido = 0;

    printf("\n========== ALTERAR ==========\n");

    if(total == 0) {
        printf("Nada cadastrado!\n");
        return;
    }

    printf("Digite o codigo de busca: ");
    scanf("%d", &consulta);

    for(int i = 0; i < total; i++) {

        if(consulta == aluno[i]) {

            encontrado = 1;

            printf("\nDigite o novo codigo: ");
            scanf("%d", &novo_codigo);

            // Verifica se o novo codigo ja pertence a outro aluno
            for(int j = 0; j < total; j++) {

                if(novo_codigo == aluno[j] && j != i) {
                    repetido = 1;
                    break;
                }
            }

            if(repetido == 1) {

                printf("\nEsse codigo ja esta cadastrado!\n");

            }
            else {

                aluno[i] = novo_codigo;

                getchar();

                printf("Digite o novo nome: ");
                fgets(nome[i], 15, stdin);

                nome[i][strcspn(nome[i], "\n")] = '\0';

                printf("\nAluno alterado com sucesso!\n");
            }

            break;
        }
    }

    if(encontrado == 0) {
        printf("\nRegistro nao encontrado.\n");
    }
}

void excluir(int aluno[], char nome[][15], int *total)
{
    int consulta;
    int encontrado = 0;

    printf("\n========== EXCLUIR ==========\n");

    if(*total == 0) {
        printf("Nada cadastrado!\n");
        return;
    }
    printf("Digite o codigo de busca: ");
    scanf("%d", &consulta);

    for(int i = 0; i < *total; i++) {

        if(consulta == aluno[i]) {
            for(int j = i; j < *total - 1; j++) {

                aluno[j] = aluno[j + 1];
                strcpy(nome[j], nome[j + 1]);
            }
            (*total)--;

            encontrado = 1;
            printf("\nAluno excluido com sucesso!\n");
            break;
        }
    }

    if(encontrado == 0) {
        printf("\nRegistro nao encontrado.\n");
    }
}

