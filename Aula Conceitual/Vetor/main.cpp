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
				printf("Parab�ns voc� passou!\n");
			} else {
				printf("Voc� n�o passou!\n");
			}
	} 
	*/
	
	/* TESTE DO EXERC�CIO
	int numero;
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	printf("O resultado �: %d\n", numero);
	*/
	
	/* TESTE DE IDENTIFICAR N�MEROS IMPARES E PARES
	int n; 
	printf("Digite um n�mero: ");
	scanf("%d", &n);
		if(n % 2 == 0) {
			printf("O n�mero � par.\n");
		} else {
			printf("O n�mero � impar.\n");
		}
	*/
	
	int i, n;
	printf("Digite um n�mero: ");
	scanf("%d", &n);
		while(n > 0) {
			printf("%d\n", n);
			n--;
		}
	
	return 0;
}
