#include <stdio.h>

int main(){
    int jogador_1 = 0, jogador_2 = 0;
    scanf("%d %d", &jogador_1, &jogador_2);

    if(jogador_1 == jogador_2){
        puts("empate");
    }
    return 0;
}