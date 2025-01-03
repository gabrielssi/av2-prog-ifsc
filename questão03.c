#include <stdio.h>

int main(){
    int vetor[10];
    int qtdPares = 0;
    for(int i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<10; i++){
        if(vetor[i]%2==0){
            qtdPares++;
        }
    }

    printf("PARES: %d", qtdPares);
    return 0;

}
