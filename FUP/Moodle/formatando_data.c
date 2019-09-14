#include <stdio.h>

int main(){
    int hora = 0, minuto = 0, dia = 0, mes = 0, ano = 0;
    
    scanf("%d %d %d %d %d", &hora, &minuto, &dia, &mes, &ano);
    
    
    
    if(hora > 12 && hora < 23){
        printf("%02d:%02d %02d/%02d/%02d\n", (hora - 12), minuto, dia, mes, (ano % 100));
    }else if(hora == 24){
        printf("%02d:%02d %02d/%02d/%02d\n", (hora % 24), minuto, dia, mes, (ano % 100));
    }else{
        printf("%02d:%02d %02d/%02d/%02d\n", hora, minuto, dia, mes, (ano % 100));
    }
    
    
    
    
    
    return 0;
}