#include <stdio.h>

int main(){
    int soma = 0;
    for(int i = 1; i <= 100 ; i++){
        if(i % 2 == 1)
            soma = soma + i;
    }
    printf("%d\n", soma);

}