#include <stdio.h>
//MATRIZES
int main(){
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) { //NO MOMENTO QUE FOR SATISFEITO A INSTRUÇÃO ABAIXO, IRÁ RETORNAR PRA CÁ, PRA SATISFAZER AS TRÊS LINHAS
        for (int j = 0; j < 3; j++) { //VAI COMEÇAR PRIMEIRO, CHEGOU ATÉ O 4, PULA PRIMEIRA INSTRUÇÃO PARA PULAR UMA LINHA
            printf("%d", A[i][j]); //IMPRIMINDO
        }
        printf("\n"); //PULA LINHA QUANDO AC CONTAGEM ESTÁ SATISFEITA
    }
}
