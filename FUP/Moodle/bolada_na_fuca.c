#include <stdio.h>

int main(){
    char saque = ' ';
    int forca = 0, potencia = 0;
    scanf(" %c", &saque);
    scanf("%d", &forca);

    if(saque == 'b'){
        potencia = ((forca * 20) - 80) / 10;
        if(potencia < 150){
            puts("Fraco, nem passou");
        }else if((potencia >= 150) && (potencia < 180)){
            puts("Perfeito");
        }else if((potencia >= 180) && (potencia < 210)){
            puts("Satisfeito");
        }else{
            puts("Muito forte, bola fora");
        }
    }else if(saque == 'c'){
        potencia = ((forca * 18) - 80) / 10;
        if(potencia < 150){
            puts("Fraco, nem passou");
        }else if((potencia >= 150) && (potencia < 180)){
            puts("Perfeito");
        }else if((potencia >= 180) && (potencia < 210)){
            puts("Satisfeito");
        }else{
            puts("Muito forte, bola fora");
        }
    }else{
        puts("Tipo de saque invalido, tente novamente");
    }

    return 0;
}