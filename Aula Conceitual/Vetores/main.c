#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	setlocale(LC_ALL, "");
	/*
	float notas[4];
	int i;
	
	for(i = 0; i < 4; i ++) {
		printf("Digite a nota %d.\n", i+1);
		scanf("%f", &notas[i]);
			
			if(notas[i] >= 6) {
				printf("Parabéns você passou!\n");
			} else {
				printf("Você não passou!\n");
			}
	} 
	*/
	
	/* TESTE DO EXERCÍCIO
	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);
	printf("O resultado é: %d\n", numero);
	*/
	
	/* TESTE DE IDENTIFICAR NÚMEROS IMPARES E PARES
	int n; 
	printf("Digite um número: ");
	scanf("%d", &n);
		if(n % 2 == 0) {
			printf("O número é par.\n");
		} else {
			printf("O número é impar.\n");
		}
	*/
	
	int i, n;
	printf("Digite um número: ");
	scanf("%d", &n);
		while(n > 0) {
			printf("%d\n", n);
			n--;
		}
	
	return 0;
}
