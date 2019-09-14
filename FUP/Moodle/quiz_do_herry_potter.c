#include <stdio.h>

int main(){
    char pergunta_1 = ' ', pergunta_2 = ' ', pergunta_3 = ' ', pergunta_4 = ' ';
    int aux = 0;
    scanf(" %c %c %c %c", &pergunta_1, &pergunta_2, &pergunta_3, &pergunta_4);

    if(pergunta_1 == 'd') aux++;
    if(pergunta_2 == 'a') aux++;
    if(pergunta_3 == 'c') aux++;
    if(pergunta_4 == 'd') aux++;

    if(aux == 0){
        puts("Nunca assistiu");
    }else if(aux == 1){
        puts("Ja ouvi falar");
    }else if(aux == 2){
        puts("Interessado no assunto");
    }else if(aux == 3){
        puts("Fa");
    }else{
        puts("super Fa");
    }





    return 0;
}