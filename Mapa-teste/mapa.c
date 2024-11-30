#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct Candidato { 
    int numero; //CORRETO
    char nome[50]; //CORRETO
    int votos; //CORRETO
};

// VERIFICADOR DE VOTOS: ENTRADA DE DADOS
int votar(struct Candidato candidatos[], int totalCandidatos){
    int voto;
    printf("Digite o numero do candidato (1 a 99): ");
    scanf("%d", &voto);

    //int encontrado = 0; 
    for (int i = 0; i < totalCandidatos; i++){
        printf("Verificando candidato: %s com numero %d\n", candidatos[i].nome, candidatos[i].numero); //PARA TESTAR O RETORNO SE HOUVER ERRO
        if(candidatos[i].numero == voto){ // SE O NUMERO DO VOTO FOR IGUAL AO DO CANDIDATO
            candidatos[i].votos++; // VAI CONTAR OS VOTOS PARA O CANDIDATO
            //encontrado = 1;
            printf("Voto computado para %s!\n", candidatos[i].nome);
            return 1;
        }
    }
    // if(encontrado) ESTAVA ERRADO POR CONTA DE QUE NÃO FAZ SENTIDO TER IF 'ENCONTRADO' PARA O CANDIDATO NÃO VOTADO, POIS É FALSO
        printf("Numero de candidato invalido!\n");
        return 0;
}

// TOTAL DE VOTOS POR CANDIDATO
void apurarVotos(struct Candidato candidatos[], int totalCandidatos){
    printf("\nResultado da apuracao de votos:\n");
    for (int i = 0; i < totalCandidatos; i++){ //PROVAVEL ERRO NO 1, JÁ QUE O LAÇO COMEÇA POR ZERO E NÃO 1. RETIRADO =NA LÓGICA
        printf("%s (Numero %d): %d votos\n", candidatos[i].nome, candidatos[i].numero, candidatos[i].votos);
    }
}

// TIRAR O PERCENTUAL DE VOTOS POR CANDIDATO
void percentualVotos(struct Candidato candidatos[], int totalCandidatos, int totalVotos){
    if(totalVotos == 0){ //QUANDO VALOR FOR IGUAL A 0 VAI RETORNAR VERDADEIRO
        printf("Nenhum voto computado ainda.\n");
        return;
    }
    printf("\nPercentual de votos: \n");
    for (int i = 0; i < totalCandidatos; i++){
        float percentual = ((float)candidatos[i].votos / totalVotos) * 100; // CORRIGIDO O CALCULO PARA DIVIDIR PELO POR CANDIDATO E MULTIPLICAR E TIRAR PORCENTAGEM
        printf("%s: %.2f%% dos votos\n", candidatos[i].nome, percentual); // AQUI PEGA A VARIAVEL PRA ESCREVE QUE ð? S PARA CHAR O NOME, E F PARA FLOAT O PERCENTUAL
    }
}

int main() {
    setlocale(LC_ALL, "Potuguese_Brazil");
    struct Candidato candidatos[3] = {{10, "Joao da Padaria", 0}, {20, "Maria da Farmacia", 0}, {30, "Joao do Gas", 0}};
    int opcao;
    int totalVotos = 0;
    int totalCandidatos = 3;

    do{
        printf("\nMenu de opcoes:\n");
        printf("\n1. Votar\n");
        printf("\n2. Apurar\n");
        printf("\n3. Emitir percentual de votos\n");
        printf("\n4. Sair\n");
        printf("\nEscolha uma opcao:\n");
        scanf("%d", &opcao);

        switch (opcao){ //NO SWITCH ESTAVA FALTANDO O BREAK
        case 1:
            totalVotos += votar(candidatos, totalCandidatos); //CHAMEI A FUNCAO VOTAR PARA CAIR DENTRO DE TOTALVOTOS
            break;
        case 2:
            apurarVotos(candidatos, totalCandidatos);
            break;
        case 3:
            percentualVotos(candidatos, totalCandidatos, totalVotos);
            break;
        case 4:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalido!\n");
        }
    } while (opcao != 4);
    return 0;
}