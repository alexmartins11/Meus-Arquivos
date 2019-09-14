#include <stdio.h>

int main(){
    int hora = 0, minuto = 0, segundo = 0;
    scanf("%d %d %d", &hora, &minuto, &segundo);

    if(segundo >= 00 && segundo <= 58){
        segundo++;
        printf("%02d %02d %02d\n", hora, minuto, segundo);
    }else if(segundo == 59){
        segundo = 00;
        minuto++;
        
    }
    
    if(minuto == 60){
            minuto = 00;
            hora++;
    
    }
    if(hora == 24) hora = 00;

    printf("%02d %02d %02d\n", hora, minuto, segundo);

    return 0;
}