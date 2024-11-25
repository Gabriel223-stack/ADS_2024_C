#include <stdio.h>


int main() 
{//OBJETIVO DO CÓDIGO SOMAR OS NÚMEROS QUE SÃO INSERIDOS NOS VETORES DE ARMAZENAMENTO
        int vetorA[10];
        int i;
        int x = 0;
            for (i=0;i<10;i++)
            {
                printf("Digite o %d elemento do vetor: \n", i);
                scanf("%d", &vetorA[i]);
                x += vetorA[i];
            }
        printf("Resultado: %d.\n", x);
        return 0;
}