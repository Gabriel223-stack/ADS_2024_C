#include <stdio.h>
#include <locale.h>

/*POR VALOR
float convPeso(float q){ //POR VALOR. RECEBEU O VALOR QUILO QUE É 10. PARAMETRO FORMAL
    float g = q * 1000;
    return g;
}

int main(){
    float quilo = 10;
    float pes = convPeso(quilo); //PASSEI 10 PRA DENTRO DE CONVPESO, E Q VAI RECEBER 10 LÁ ENCIMA. PARAMETRO REAL
    printf("Gramas: %2f.", pes);
}
*/

float convPeso(float * q){ //POR REFERÊNCIA
    q = q * 1000;
}

int main(){
    float quilo = 10;
    convPeso(&quilo); //PASSEI 10 PRA DENTRO DE CONVPESO, E Q VAI RECEBER 10 LÁ ENCIMA. PARAMETRO REAL
    printf("Gramas: %f.", quilo);
}