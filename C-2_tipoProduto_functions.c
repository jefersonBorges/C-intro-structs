#include <stdio.h>
#include <locale.h>
#include <string.h>

struct TipoProduto{
    int codigo;
    char descricao[60];
    float preco;
    char promocao;
};

struct TipoProduto leProduto(struct TipoProduto produto);
void imprimeProduto(struct TipoProduto produto);

int main(){
    setlocale(LC_ALL,"Portuguese");

    struct TipoProduto produto;
    produto=leProduto(produto);
    imprimeProduto(produto);

    return 0;
}

struct TipoProduto leProduto(struct TipoProduto produto){
    printf("\nDigite o código do produto:");
    scanf("%d", &produto.codigo);
    fflush(stdin);

    printf("\nDigite a descricao do produto:");
    scanf("%[^\n]", produto.descricao);
    fflush(stdin);

    printf("\nDigite o preco do produto:");
    scanf("%f", &produto.preco);
    fflush(stdin);

    printf("\nProduto em promoção:");
    scanf("%c", &produto.promocao);
    fflush(stdin);

    return produto;
};

void imprimeProduto(struct TipoProduto produto){
    printf("Produto Selecionado:\n");
    printf("Código: %d\n", produto.codigo);
    printf("Descrição: %s\n", produto.descricao);
    printf("Preço: %6.2f\n", produto.preco);
    printf("Promoção: %c\n", produto.promocao);
}