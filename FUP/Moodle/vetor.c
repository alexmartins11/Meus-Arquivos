#include <stdio.h>

int main(){
    int competidores = 0;
    scanf("%d", &competidores);
    int aux = 0, menor = 1000, jogador = 0;
    for(int i = 0;i < competidores;i++){
        int arrem1 = 0, arrem2 = 0;
        scanf("%d %d", &arrem1, &arrem2);
        if(arrem1 < 10 && arrem2 < 10){

        }
        else {
            arrem1 -= 10;
            arrem2 -= 10;
        }
        aux = arrem1 + arrem2;

        if(aux < menor){
            jogador = 1;
        }

    }
    
    printf("%d\n", jogador);
    
    
    return 0;
}
