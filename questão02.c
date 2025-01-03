#include <stdio.h>

int main(){
    int opcao = 1, voto, qtdVotosGumercindo = 0, qtdVotosTeodoro = 0, qtdVotosBrancos = 0, qtdVotosNulos = 0, qtdTotalVotos = 0;

    printf("BEM-VINDO(A) AS ELEICOES DEMOCRATICAS\n");
    while(opcao == 1){
        printf("1- Voto em Gumercindo\n2- Voto em Teodoro\n0- Voto branco\nqualquer outro numero - Voto nulo\nResposta: ");
        scanf("%d", &voto);

        switch(voto){
            case 0: qtdVotosBrancos++;
            break;
            case 1: qtdVotosGumercindo++;
            break;
            case 2: qtdVotosTeodoro++;
            break;
            default: qtdVotosNulos++;
            break;
        }

        printf("Deseja entrar com o proximo voto?\n1 -Sim\n0- Nao\nResposta: ");
        scanf("%d", &opcao);
    }
    qtdTotalVotos = qtdVotosBrancos+qtdVotosGumercindo+qtdVotosNulos+qtdVotosTeodoro;
    printf("VOTOS EM GUMERCINDO: %d (%d)\n",qtdVotosGumercindo, (qtdVotosGumercindo*100)/qtdTotalVotos);
    printf("VOTOS EM TEODORO: %d (%d)\n",qtdVotosTeodoro, (qtdVotosTeodoro*100)/qtdTotalVotos);
    printf("VOTOS EM BRANCO: %d (%d)\n",qtdVotosBrancos, (qtdVotosBrancos*100)/qtdTotalVotos);
    printf("VOTOS EM NULOS: %d (%d)\n",qtdVotosNulos, (qtdVotosNulos*100)/qtdTotalVotos);
    return 0;

}
