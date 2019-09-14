#include <stdio.h>

void compara(int comparador){
    long int num = 0, conta = 0, soma = 0;
    scanf("%ld", &num);
    if(num < 0) num = num * (-1);
    for(;num > 0;){
        conta = num % 10;
        if(conta == comparador) soma ++;
        num /= 10;
        
    }
    printf("%ld\n", soma);
}


int main(){
    int comparador = 0, resultado = 0;
    scanf("%d", &comparador);
    
    compara(comparador);
    
    
    return 0;
}