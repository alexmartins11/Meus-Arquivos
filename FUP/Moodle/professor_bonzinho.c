#include <stdio.h>

int main(){
    float prova_1 = 0.0, prova_2 = 0.0, prova_3 = 0.0, trab = 0.0, media = 0.0;
    scanf("%f %f %f %f", &prova_1, &prova_2, &prova_3, &trab);

    if((prova_1 >= prova_2) && (prova_1 >= prova_3) && (prova_2 >= prova_3) || 
    (prova_2 >= prova_1)){
        media = (prova_1 + prova_2 + trab) / 3;
    }else if((prova_2 >= prova_3) && (prova_2 >= prova_1) && 
    (prova_3 >= prova_1) || (prova_3 >= prova_2)){
        media = (prova_2 + prova_3 + trab) / 3;
    }else if((prova_1 >= prova_2) && (prova_3 >= prova_2) && 
    (prova_3 >= prova_1) || (prova_1 >= prova_3)){
        media = (prova_1 + prova_3 + trab) / 3;
    }

    if(media >= 7.00){
        printf("Aprovado com %.1f\n", media);
    }else {
        printf("Final com %.1f\n", media);
    }


    return 0;
}