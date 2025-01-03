#include <stdio.h>

int main(){
    float tempInicial, tempFinal, variacao, tempFah;

    printf("CONVERSOR DE TEMPERATURA DE CELSIUS PARA FAHRENHEIT\n");
    printf("Digite a temperatura inicial em Celsius: ");
    scanf("%f", &tempInicial);
    printf("Digite a temperatura final em Celsius: ");
    scanf("%f", &tempFinal);
    printf("Digite a variacao da temperatura: ");
    scanf("%f", &variacao);

    printf("tc\ttF\n");

    float contador = tempInicial;
    for(float i = tempInicial; i <= tempFinal; i += variacao){
        tempFah = (contador * (9.0 / 5.0)) + 32;
        printf("%.2f\t%.2f\n", contador, tempFah);
        contador += variacao;
    }

    return 0;
}
