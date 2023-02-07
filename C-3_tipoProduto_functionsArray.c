#include <stdio.h>
#include <locale.h>
#include <string.h>
#define TAM 5

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

    struct TipoProduto produto[TAM];

    for(int i = 0; i < TAM; i++){
        produto[i]=leProduto(produto[i]);
        imprimeProduto(produto[i]);
    }
    return 0;
};

struct TipoProduto leProduto(struct TipoProduto produto){
    printf("\nDigite o codigo do produto:");
    scanf("%d", &produto.codigo);
    fflush(stdin);

    printf("\nDigite a descricao do produto:");
    scanf("%[^\n]", produto.descricao);
    fflush(stdin);

    printf("\nDigite o preco do produto:");
    scanf("%f", &produto.preco);
    fflush(stdin);

    printf("\nProduto em promocao:");
    scanf("%c", &produto.promocao);
    fflush(stdin);

    return produto;
};

void imprimeProduto(struct TipoProduto produto){
    printf("Produto Selecionado:\n");
    printf("Codigo: %d\n", produto.codigo);
    printf("Descricaoo: %s\n", produto.descricao);
    printf("Preco: %6.2f\n", produto.preco);
    printf("Promocao: %c\n", produto.promocao);
};