#include <stdio.h>

int main(){
    int dia = 0, hora = 0, minuto = 0;
    scanf("%d %d %d", &dia, &hora, &minuto);

    if((dia >= 2) && (dia <= 6)){
        if((hora >= 8 && hora <= 11) || (hora >= 14 && hora <= 17) && (minuto >= 0 && minuto <= 59)){
            printf("SIM\n");
        }else printf("NAO\n");
    }else if(dia == 7){
        if((hora >= 8 && hora <= 11) && (minuto >= 0 && minuto <= 59)){
            printf("SIM\n");
        }else printf("NAO\n");
    }else printf("NAO\n");





    return 0;
}