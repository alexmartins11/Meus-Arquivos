#include <stdio.h>

int main(){
    int nota_1 = 0, nota_2 = 0, nota_final = 0, media = 0, media_final = 0;
    scanf("%d %d", &nota_1, &nota_2);
    media = (nota_1 + nota_2) / 2;

    if((media >= 4) & (media < 7)){
        scanf("%d", &nota_final);
        media_final = (nota_final + media) / 2;
        if(media_final >= 5){
            puts("aprovado na final");
        }else puts("reprovado na final");
    }else if(media < 4){
        puts("reprovado");
    }else if(media >= 7){
        puts("aprovado");
    }else puts("reprovado");




    return 0;
}