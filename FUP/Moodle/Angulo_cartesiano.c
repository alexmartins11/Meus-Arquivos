#include <stdio.h>

int main(){
    int angulo = 0, posicao = 0;
    scanf("%d", &angulo);

    if(angulo >= 0){
        posicao = angulo % 360;
        printf("%d\n", posicao);
    }   
    if (angulo < 0){
        posicao = (angulo % 360);
        posicao += 360;
        if(posicao == 360)
            posicao = 0;
            printf("%d\n", posicao);
            
    }
 


    return 0;
}