#include <stdio.h>

int main(){
    float velocidade = 0, tempo = 0, consumo = 0;

    float desempenho = 0;
    scanf("%f %f %f", &velocidade, &tempo, &consumo);
    
    
    desempenho = (velocidade * (tempo / 60))  / consumo;
    
    printf("%.2f\n", desempenho);
    
    
    
    
    
    return 0;
}