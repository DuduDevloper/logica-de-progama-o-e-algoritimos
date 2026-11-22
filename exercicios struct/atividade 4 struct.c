#include <stdio.h>

#define MAX_PRODUTOS 10
#define MAX_VENDAS 20

struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int estoque;
    float faturamento;
};

struct Venda {
    int codigoProduto;
    int quantidade;
    float valorTotal;
};

int main() {
    struct Produto produtos[MAX_PRODUTOS];
    struct Venda vendas[MAX_VENDAS];

    int totalProdutos, totalVendas;
    int i, j, encontrado;
    float faturamentoTotal = 0;
    int maiorFaturamento = 0;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &totalProdutos);

    if (totalProdutos > 10 || totalProdutos <= 0) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for (i = 0; i < totalProdutos; i++) {
        printf("\n----------------- PRODUTO %d ----------------\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].estoque);

        produtos[i].faturamento = 0;
    }

    printf("\nQuantas vendas deseja registrar? ");
    scanf("%d", &totalVendas);

    if (totalVendas > 20 || totalVendas < 0) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for (i = 0; i < totalVendas; i++) {
        printf("\n---------------- VENDA %d ----------------\n", i + 1);

        printf("Codigo do produto: ");
        scanf("%d", &vendas[i].codigoProduto);

        encontrado = -1;

        for (j = 0; j < totalProdutos; j++) {
            if (produtos[j].codigo == vendas[i].codigoProduto) {
                encontrado = j;
                break;
            }
        }

        if (encontrado == -1) {
            printf("Produto nao encontrado!\n");
            vendas[i].quantidade = 0;
            vendas[i].valorTotal = 0;
        } else {
            printf("Quantidade vendida: ");
            scanf("%d", &vendas[i].quantidade);

            if (vendas[i].quantidade <= 0 ||
                vendas[i].quantidade > produtos[encontrado].estoque) {

                printf("Quantidade invalida ou estoque insuficiente!\n");
                vendas[i].quantidade = 0;
                vendas[i].valorTotal = 0;

            } else {
                vendas[i].valorTotal =
                    produtos[encontrado].preco * vendas[i].quantidade;

                produtos[encontrado].estoque -= vendas[i].quantidade;

                produtos[encontrado].faturamento +=
                    vendas[i].valorTotal;

                faturamentoTotal += vendas[i].valorTotal;
            }
        }
    }

    printf("\n---------------- RELATORIO DE VENDAS ----------------\n");

    for (i = 0; i < totalProdutos; i++) {
        printf("\nProduto: %s\n", produtos[i].nome);
        printf("Estoque restante: %d\n", produtos[i].estoque);
        printf("Faturamento: R$ %.2f\n", produtos[i].faturamento);
    }

    for (i = 0; i < totalProdutos; i++) {
        if (produtos[i].faturamento >
            produtos[maiorFaturamento].faturamento) {
            maiorFaturamento = i;
        }
    }

    printf("\nFaturamento total: R$ %.2f\n", faturamentoTotal);

    printf("Produto com maior faturamento: %s\n",
           produtos[maiorFaturamento].nome);

    printf("Valor: R$ %.2f\n",
           produtos[maiorFaturamento].faturamento);

    return 0;
}
