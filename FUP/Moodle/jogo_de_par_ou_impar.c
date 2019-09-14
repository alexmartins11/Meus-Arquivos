#include <stdio.h>

int main(){
    int P = 0, num1 = 0, num2 = 0, resultado = 0;
    scanf("%d %d %d", &P, &num1, &num2);

    if(P == 0){
        resultado = (num1 + num2) % 2;
        if(resultado == 0){
            puts("0");
        }else puts("1");
    }else{
        resultado = (num1 + num2) % 2;
        if(resultado == 0){
            puts("1");
        }else puts("0");
    }

    return 0;
}