#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> //MANIPULAÇÃO DE STRINGS

struct Produto{
	int codigo;
	char nome[100];
	float precoCusto;
	float precoVenda;
	int qtd;
};


int main() {
	
	setlocale(LC_ALL, "");
	
	/* EXEMPLO VETORES 
	int valor = 1;
	valor = 2;
	
	int valores[5]; //5 posições
	
	valores[0] = 10;
	valores[1] = 5;
	valores[2] = 15;
	valores[3] = 20;
	valores[4] = 30;*/
	
	
	/* EXEMPLO NOTA ALUNO 
	int qtd;
	printf("Digite a quantidade de alunos\n");
	scanf("%d", &qtd);
	
	float notas[qtd];
	
	int i;
	for (i = 0; i < qtd; i++){
		printf("Digite a nota do aluno %d\n", (i+1));
		fflush(stdin);
		scanf("%f", &notas[i]);
	}
	
	for (i = 0; i < qtd; i++) {
		printf("Nota do aluno %d foi %f\n", (i+1), notas[i]);
	}
	
	*/
	
	/* UTILIZANDO STRINGS
	char nome[10] = {"Rogerio"};
	strcpy(nome, "Joao");
	printf("O meu nome é %s", nome);
	
	
	char nome[10];
	printf("Digite o seu nome");
	fflush(stdin);
	//scanf("%s", &nome); não ler a partir de um espaço
	gets(nome); //Fazer a leitura que possui espaço
	
	printf("O nome digitado foi %s", nome);
	*/
	
	//float precos[5][3];
	
	/*  REGISTROS
	struct Produto p1;
	
	p1.codigo = 10;
	p1.precoCusto = 10.0;
	p1.precoVenda = 15.0;
	p1.qtd = 10;
	
	printf("O código do meu produto é %d\n", p1.codigo);
	*/
	
	struct Produto produtos[2];
	
	int i;
	for(i = 0; i < 2; i++){
		printf("Cadastrando o produto %d\n", (i+1));
		printf("Digite o codigo do produto\n");
		fflush(stdin);
		scanf("%d", &produtos[i].codigo);
		printf("Digite o nome do produto\n");
		fflush(stdin);
		gets(produtos[i].nome);
		printf("Digite o preco de custo\n");
		fflush(stdin);
		scanf("%f", &produtos[i].precoCusto);
		printf("Digite o preco de venda\n");
		fflush(stdin);
		scanf("%f", &produtos[i].precoVenda);
		printf("Digite a quantidade em estoque\n");
		fflush(stdin);
		scanf("%d", &produtos[i].qtd);
	}
	
	printf("Produtos cadastrados\n");
	for(i = 0; i < 2; i++){
		printf("Nome do produto %d: %s\n", (i+1), produtos[i].nome);
	}
	
	return 0;
}
