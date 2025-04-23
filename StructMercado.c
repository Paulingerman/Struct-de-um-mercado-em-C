#include <stdio.h>

#define MAXPRODUTOS 10
#define TAMNOME 50
#define TAMSEGMENTO 30

typedef struct {
    char nome[TAMNOME];
    char segmento[TAMSEGMENTO];
    int quantidade;
} Produto;

int main() {
    Produto produtos[MAXPRODUTOS];
    
    printf("Cadastro de Produtos - Gerencia de Estoque do Super Mercado\n\n");
    
    for (int i = 0; i < MAXPRODUTOS; i++) {
        printf("Produto %d:\n", i+1);
        printf("Nome: ");
        fgets(produtos[i].nome, TAMNOME, stdin);
        // Remove newline
        size_t len = 0;
        while (produtos[i].nome[len] != '\0') {
            if (produtos[i].nome[len] == '\n') {
                produtos[i].nome[len] = '\0';
                break;
            }
            len++;
        }
        
        printf("Segmento (limpeza, comida, etc): ");
        printf("Categorias de Produto Disponíveis:\n");
        printf("-> limpeza\n");
        printf("-> comida\n");
        printf("-> bebida\n");
        printf("-> higiene\n");
        printf("-> cosmeticos\n");
        printf("-> eletronicos\n");
        printf("-> roupas\n");
        printf("-> brinquedos\n");
        printf("Escolha uma das opcoes acima e digite o segmento desejado:\n");
        fgets(produtos[i].segmento, TAMSEGMENTO, stdin);
        len = 0;
        while (produtos[i].segmento[len] != '\0') {
            if (produtos[i].segmento[len] == '\n') {
                produtos[i].segmento[len] = '\0';
                break;
            }
            len++;
        }
        
        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);
        getchar(); // Captura o '\n' deixado pelo scanf
        
        printf("\n");
    }
    
    // Gera o relatório
    printf("\nRelatorio de Estoque:\n");
    printf("===================================\n");
    for (int i = 0; i < MAXPRODUTOS; i++) {
        printf("Produto %d:\n", i+1);
        printf("Nome     : %s\n", produtos[i].nome);
        printf("Segmento : %s\n", produtos[i].segmento);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("-----------------------------------\n");
    }
    
    return 0;
}