#include <stdio.h>

int main(){
    int numero = 0;
    scanf("%d", &numero);
    
    if(numero > 0) puts("positivo");
    else if(numero == 0) puts("nulo");
    else puts("negativo");



    return 0;
}