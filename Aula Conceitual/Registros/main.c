#include <stdio.h>
#include <stdlib.h>

// STRUCT AGRUPAM INFORMAÇÕES DE TIPOS

/* CONSIDERANDO UMA APLICAÇÃO DE CONTROLE DE ESTOQUE, CRIE UMA STRUCT PARA QUE POSSA ARMAZENAR AS SEGUINTES INFORMAÇÕES SOBRE UM PRODUTO 
    - CÓDIGO DO PRODUTO
    - NOME DO PRODUTO
    - QUANTIDADE DO PRODUTO EM ESTOQUE
    - VALOR PAGO PELO PRODUTO
    - VALOR UNITÁRIO PARA VENDA
*/

/*struct produto {
    int codigo;
    char nome[50];
    int quantidade;
    float valor_compra;
    float valor_venda;
};*/


struct produto{
    int cod;
    float preco;
    char descr[100];
};

/*
int main(){
    struct produto prod;

    prod.cod = 1;
    prod.preco = 14.56;
    strcpy(prod.descr, "limao");

    printf("%d - %f - %s \n", prod.cod, prod.preco, prod.descr);
}

*/

// COMBINANDO REGISTRO COM VETORES, CRIANDO UMA LISTA DE PRODUTOS:

int main() {
    struct produto lista[10];

    for (int i = 0; i < 10; i++) {
        lista[i].cod = i;

        printf("Digite o valor do produto %d: \n", i);
        scanf("%f", &lista[i].preco);
        fflush(stdin);

        printf("Digite a descricao do produto %d: \n", i);
        gets(lista[i].descr);
        fflush(stdin);
    }
}