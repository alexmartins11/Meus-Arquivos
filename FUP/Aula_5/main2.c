#include <stdio.h>

int main (){
    int hora1 = 0, minuto1 = 0, hora2 = 0, minuto2 = 0;
    int tempo1 = 0, tempo2 = 0, total = 0;
    int nova_hora = 0, novo_minuto = 0;
    
    puts("Digite a primeira hora e minuto :");
    scanf("%d %d", &hora1, &minuto1);
    puts("Digite a segunda Hora e minuto :");
    scanf ("%d %d", &hora2, &minuto2);

    tempo1 = hora1 * 60 + minuto1;
    tempo2 = hora2 * 60 + minuto2;

    total = tempo2 - tempo1;

    if(total < 0){
        total += 60 * 24;
    }
    
    printf("%02d:%02d\n", (total / 60), (total % 60));

    return 0;
}
