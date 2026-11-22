#include <stdio.h> 


struct Produto{
	char nome[50];
	int codigo;
	float preco;
	int quantidade;
};

#define TOTAL 15

void cadastrarProduto(struct Produto produtos[], int *totalProdutos){
    if(*totalProdutos == TOTAL){
        printf("LIMITE ATINGIDO\n");
        return;
    }
    
    printf("\n------------------- Produto %d -------------------\n", *totalProdutos + 1); 
    printf("Nome: "); 
    scanf(" %50[^\n]", produtos[*totalProdutos].nome); 
    printf("Codigo: "); 
    scanf("%d", &produtos[*totalProdutos].codigo); 
    printf("Preco: "); 
    scanf("%f", &produtos[*totalProdutos].preco); 
    printf("Quantidade: "); 
    scanf("%d", &produtos[*totalProdutos].quantidade); 
    
    (*totalProdutos)++;
}


void listarProdutos(struct Produto produtos[], int totalProdutos) {
    if (totalProdutos <= 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("\n------------------- Lista de Produtos -------------------\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Preco: %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("--------------------\n");
    }
}

void reporEstoque(struct Produto produtos[], int totalProdutos) {
    if (totalProdutos <= 0) {
        printf("Nenhum produto cadastrado\n");
        return;
    }

    int codigo, quantidade;
    printf("Insira o codigo do produto: ");
    scanf("%d", &codigo);
    
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Digite a quantidade a ser adicionada: ");
            scanf("%d", &quantidade);
            produtos[i].quantidade += quantidade;
            printf("Estoque atualizado: %d\n", produtos[i].quantidade);
            return;
        }
    }
    
    printf("Produto com codigo %d nao encontrado.\n", codigo);
}

void registarVenda(struct Produto produtos[], int totalProdutos) {
    if (totalProdutos <= 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    int codigo, quantidade;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Insira a quantidade vendida: ");
            scanf("%d", &quantidade);
            if (quantidade > produtos[i].quantidade) {
                printf("Quantidade insuficiente no estoque, valor atual: %d\n", produtos[i].quantidade);
            } else {
                produtos[i].quantidade -= quantidade;
                printf("Venda registrada quantidade atual: %d\n", produtos[i].quantidade);
            }
            return;
        }
    }
    
    printf("Produto com codigo %d nao encontrado\n", codigo);
}

void consultarProduto(struct Produto produtos[], int totalProdutos) {
    if (totalProdutos <= 0) {
        printf("Nenhum produto cadastrado\n");
        return;
    }

    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("\n------------------- Detalhes do Produto -------------------\n");
            printf("Nome: %s\n", produtos[i].nome);
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Preco: %.2f\n", produtos[i].preco);
            printf("Quantidade: %d\n", produtos[i].quantidade);
            return;
        }
    }
    
    printf("Produto com codigo %d nao encontrado\n", codigo);
}

void menu() {
    printf("\n------------------- Menu -------------------\n");
    printf("1. Cadastrar Produto\n");
    printf("2. Listar Produtos\n");
    printf("3. Repor Estoque\n");
    printf("4. Registrar Venda\n");
    printf("5. Consultar Produto\n");
    printf("6. Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    struct Produto produtos[TOTAL];
    int totalProdutos = 0;
    int opcao;

    do {
        menu();
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, &totalProdutos);
                break;
            case 2:
                listarProdutos(produtos, totalProdutos);
                break;
            case 3:
                reporEstoque(produtos, totalProdutos);
                break;
            case 4:
                registarVenda(produtos, totalProdutos);
                break;
            case 5:
                consultarProduto(produtos, totalProdutos);
                break;
            case 6:
                printf("Saindo do programa\n");
                break;
            default:
                printf("Tente novamente\n");
        }
    } while (opcao != 6);

    return 0;
}
