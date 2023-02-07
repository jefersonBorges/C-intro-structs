#include <stdio.h>

int main(){

    struct TipoProduto{
        int codigo;
        char descricao[41];
        float preco;
        char promocao;
    };

    struct TipoProduto produto;

    printf("Digite o código do produto:");
    scanf("%d", &produto.codigo);
    fflush(stdin);

    printf("Digite a descricao do produto:");
    scanf("%c", &produto.descricao);
    fflush(stdin);

    printf("Digite o preco do produto:");
    scanf("%f", &produto.preco);
    fflush(stdin);

    printf("Produto em promoção:");
    scanf("%c", &produto.promocao);
    fflush(stdin);

    printf("Código: %d \tDescrição: %c \tPreço: %.2f \tPromoção: %c", produto.codigo, produto.descricao, produto.preco, produto.promocao);

    return 0;
}
