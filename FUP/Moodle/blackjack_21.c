#include <stdio.h>

int main(){
    int tam = 0;
    scanf("%d", &tam);
    int ass = 0, mao = 0; 
    for(int i = 0; i < tam ; i++){
        int carta = 0;
        scanf("%d", &carta);
        if(carta == 1){
            ass++;
            mao += 11;
        }else if(carta >= 10){
            carta = 10;
            mao += carta;
        }else {
            mao += carta;
        }if(mao > 21 && ass > 0){
            ass --;
            mao -= 10;
        }
    }
    printf("%d\n", mao);


    return 0;
}