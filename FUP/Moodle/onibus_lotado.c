#include <stdio.h>

int main(){
    int capacidade = 0, aux = 0;
    scanf("%d", &capacidade);

    for(int i = 0; i <= (capacidade * 2); i++){
        int movimentacao = 0;
        scanf("%d", &movimentacao);
        aux += movimentacao;
        if(aux == 0){
            puts("vazio");
        }else if(aux < capacidade){
            puts("ainda cabe");
        }else if (aux < (capacidade * 2)){
            puts("lotado");
        }else{
            puts("hora de partir");
            return 0;
        }
        
    }




    return 0;
}