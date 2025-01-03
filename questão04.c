#include <stdio.h>

int main(){
    float matriz[4][4];
    float valor;

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
          scanf("%f", &matriz[i][j]);
        }
    }
    printf("Digite um valor para buscar na matriz: ");
    scanf("%f", &valor);

        for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
          if(matriz[i][j] == valor){
            printf("M[%d][%d]: %.2f\n",i,j,matriz[i][j]);
          }
        }
    }

    printf("FIM DO PROGRAMA!");
    return 0;

}
