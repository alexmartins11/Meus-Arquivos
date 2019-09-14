#include <stdio.h>

int main(){
    int hora = 0, minuto = 0;
    int nova_hora = 0;
    scanf("%d %d", &hora, &minuto);

    if(hora > 12){
        nova_hora = hora - 12;
        printf("%02d:%02d PM\n", nova_hora, minuto);
    }else{
        printf("%02d:%02d AM\n", hora, minuto);
    }

    return 0;
}