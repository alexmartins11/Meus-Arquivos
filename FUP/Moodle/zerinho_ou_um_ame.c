#include <stdio.h>

int main(){
    int jog_1 = 0, jog_2 = 0, jog_3 = 0, jog_4 = 0, soma = 0, resultado = 0;
    scanf("%d %d %d %d", &jog_1, &jog_2, &jog_3, &jog_4);

    soma = jog_1 + jog_2 + jog_3 + jog_4;
    resultado = ((soma - 1) % 4) + 1;
    if(soma == 0){
        puts("nenhum");
    }else if(resultado == 1){
        puts("jog1");
    }else if(resultado == 2){
        puts("jog2");
    }else if(resultado == 3){
        puts("jog3");
    }else{
        puts("jog4");
    }



    return 0;
}