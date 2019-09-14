#include <stdio.h>

int main(){
    float alcool = 0, gasolina = 0, rend_alcool = 0, rend_gasolina = 0;
    scanf("%f %f %f %f", &alcool, &gasolina, &rend_alcool, &rend_gasolina);
    float alc = alcool / rend_alcool;
    float gas = gasolina / rend_gasolina;

    if(alc < gas){
        puts("A");
    }else{
        puts("G");
    }
    return 0;
}