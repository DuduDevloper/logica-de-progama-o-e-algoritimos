#include <stdio.h>

#define MAX_PACIENTES 15
#define MAX_CONSULTAS 30

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Paciente {
    int codigo;
    char nome[50];
    int totalConsultas;
};

struct Consulta {
    struct Paciente paciente;
    struct Data data;
    char descricao[100];
};

int main() {
    struct Paciente pacientes[MAX_PACIENTES];
    struct Consulta consultas[MAX_CONSULTAS];

    int totalPacientes, totalConsultas;
    int i, j, encontrado;
    int maior = 0;
    int indiceMaior = 0;

    printf("Quantos pacientes deseja cadastrar? ");
    scanf("%d", &totalPacientes);

    if (totalPacientes > 15 || totalPacientes <= 0) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for (i = 0; i < totalPacientes; i++) {
        printf("\n---------------- PACIENTE %d ----------------\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &pacientes[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", pacientes[i].nome);

        pacientes[i].totalConsultas = 0;
    }

    printf("\nQuantas consultas deseja registrar? ");
    scanf("%d", &totalConsultas);

    if (totalConsultas > 30 || totalConsultas < 0) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for (i = 0; i < totalConsultas; i++) {
        printf("\n---------------- CONSULTA %d ----------------\n", i + 1);

        printf("Codigo do paciente: ");
        scanf("%d", &consultas[i].paciente.codigo);

        encontrado = -1;

        for (j = 0; j < totalPacientes; j++) {
            if (pacientes[j].codigo ==
                consultas[i].paciente.codigo) {
                encontrado = j;
                break;
            }
        }

        if (encontrado == -1) {
            printf("Paciente nao encontrado!\n");
            consultas[i].paciente.codigo = -1;
        } else {
            consultas[i].paciente = pacientes[encontrado];

            printf("Data da consulta (dia mes ano): ");
            scanf("%d %d %d",
                  &consultas[i].data.dia,
                  &consultas[i].data.mes,
                  &consultas[i].data.ano);

            printf("Descricao do atendimento: ");
            scanf(" %[^\n]", consultas[i].descricao);

            pacientes[encontrado].totalConsultas++;
        }
    }

    int codigoPesquisa;

    printf("\nInsira o codigo do paciente para pesquisar: ");
    scanf("%d", &codigoPesquisa);

    printf("\n---------------- CONSULTAS DO PACIENTE ----------------\n");

    for (i = 0; i < totalConsultas; i++) {
        if (consultas[i].paciente.codigo == codigoPesquisa) {
            printf("\nPaciente: %s\n",
                   consultas[i].paciente.nome);

            printf("Data: %02d/%02d/%d\n",
                   consultas[i].data.dia,
                   consultas[i].data.mes,
                   consultas[i].data.ano);

            printf("Descricao: %s\n",
                   consultas[i].descricao);
        }
    }

    struct Data dataPesquisa;

    printf("\nInsira uma data para pesquisar (dia mes ano): ");
    scanf("%d %d %d",
          &dataPesquisa.dia,
          &dataPesquisa.mes,
          &dataPesquisa.ano);

    printf("\n---------------- CONSULTAS DA DATA ----------------\n");

    for (i = 0; i < totalConsultas; i++) {
        if (consultas[i].data.dia == dataPesquisa.dia &&
            consultas[i].data.mes == dataPesquisa.mes &&
            consultas[i].data.ano == dataPesquisa.ano &&
            consultas[i].paciente.codigo != -1) {

            printf("\nPaciente: %s\n",
                   consultas[i].paciente.nome);

            printf("Descricao: %s\n",
                   consultas[i].descricao);
        }
    }

    printf("\n---------------- TOTAL DE CONSULTAS POR PACIENTE ----------------\n");

    for (i = 0; i < totalPacientes; i++) {
        printf("%s: %d consultas\n",
               pacientes[i].nome,
               pacientes[i].totalConsultas);

        if (pacientes[i].totalConsultas > maior) {
            maior = pacientes[i].totalConsultas;
            indiceMaior = i;
        }
    }

    printf("\nPaciente com mais atendimentos: %s\n",
           pacientes[indiceMaior].nome);

    printf("Total de consultas: %d\n", maior);

    return 0;
}
