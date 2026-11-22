#include <stdio.h>

#define MAX_FUNCIONARIOS 8

struct Funcionario {
    int codigo;
    char nome[50];
    char cargo[50];
    float salariobase;
    float horasextras;
    float valorHora;
    float valorHoraExtra;
    float salariobruto;
    float desconto;
    float salarioliquido;
};

int main() {
    struct Funcionario funcionarios[MAX_FUNCIONARIOS];
    int total, i;
    float maiorSalario = 0;
    float totalFolha = 0;
    int indiceMaior = 0;

    printf("Quantos funcionarios deseja cadastrar? ");
    scanf("%d", &total);

    if (total > 8 || total <= 0) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for (i = 0; i < total; i++) {
        printf("\n------------------ FUNCIONARIO %d ------------------\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &funcionarios[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", funcionarios[i].nome);

        printf("Cargo: ");
        scanf(" %[^\n]", funcionarios[i].cargo);

        printf("Salario base: ");
        scanf("%f", &funcionarios[i].salariobase);

        printf("Quantidade de horas extras: ");
        scanf("%f", &funcionarios[i].horasextras);

        funcionarios[i].valorHora = funcionarios[i].salariobase / 160;

        funcionarios[i].valorHoraExtra =
            funcionarios[i].valorHora * 1.5;

        funcionarios[i].salariobruto =
            funcionarios[i].salariobase +
            (funcionarios[i].valorHoraExtra * funcionarios[i].horasextras);

        funcionarios[i].desconto =
            funcionarios[i].salariobruto * 0.10;

        funcionarios[i].salarioliquido =
            funcionarios[i].salariobruto - funcionarios[i].desconto;

        totalFolha += funcionarios[i].salarioliquido;

        if (i == 0 || funcionarios[i].salarioliquido > maiorSalario) {
            maiorSalario = funcionarios[i].salarioliquido;
            indiceMaior = i;
        }
    }

    printf("\n------------------ FOLHA DE PAGAMENTO ------------------\n");

    for (i = 0; i < total; i++) {
        printf("\nCodigo: %d\n", funcionarios[i].codigo);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Salario base: R$ %.2f\n", funcionarios[i].salariobase);
        printf("Salario bruto: R$ %.2f\n", funcionarios[i].salariobruto);
        printf("Desconto: R$ %.2f\n", funcionarios[i].desconto);
        printf("Salario liquido: R$ %.2f\n", funcionarios[i].salarioliquido);
    }

    printf("\nMaior salario liquido: %s\n",
           funcionarios[indiceMaior].nome);
    printf("Valor: R$ %.2f\n", maiorSalario);

    printf("Custo total da folha: R$ %.2f\n", totalFolha);

    return 0;
}
