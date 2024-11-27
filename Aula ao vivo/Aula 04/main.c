#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* SUB ROTINA*/

int idadeGlobal; //VARIÁVEL A NIVEL DE ESCOPO GLOBAL

void escreverOlaMundo(){
    printf("Ola mundo!\n"); //SAIDA DA CHAMADA
}

int lerIdade(){
    printf("Digite sua idade\n");
    //VARIÁVEL LOCAL
    int idade;
    fflush(stdin);
    scanf("%d", &idade);
    return idade; //FUNÇÃO PORQUE RETORNA UM VALOR DO TIPO INTEIRO
}

void escreverNomeNaTela(char nome[]){
    printf("O nome da pessoa e %s\n", nome);
}

int somar(int valor1, int valor2) {
    int resultado = valor1 + valor2; //PASSAGEM DE VALOR POR VALOR
    return resultado;
}

float convPesoParaGrama(float peso){
    peso = peso * 1000;
    return peso; 
}

float convPesoParaGramaPorReferencia(float *peso){
    *peso = *peso * 1000;
    return *peso;
}


int main() {

    setlocale(LC_ALL, "");

    //escreverOlaMundo(); //FUNÇÃO CHAMADO

    //int i = lerIdade(); //RECEBE O RETURN DO VALOR IDADE
    //printf("A idade lida foi %d\n", i);

    //char n[100] = {"Rogerio"};
    //escreverNomeNaTela(n); 

    //int v1 = 10;
    //int v2 = 15;
    //int resultado = somar(v1, v2);

    //printf("A soma e %d\n", resultado);

    float pes = 10.0;
    float res = convPesoParaGrama(pes);

    printf("Meu peso e %f e meu resultado e %f\n", pes, res);

    float res2 = convPesoParaGramaPorReferencia(&pes);
    printf("Meu peso e %f e meu resultado e %f\n", pes, res2);

    return 0;
}