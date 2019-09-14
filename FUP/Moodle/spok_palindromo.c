#include <stdio.h>

int teste(int num){
    int aux = num;
    int palindromo = 0;
    int quebra = 0;
    for(;aux != 0;){
        quebra = aux % 10;
        aux = aux / 10;
        palindromo = palindromo * 10 + quebra;
    }
    
    if(palindromo == num){
        puts("1");
    }else {
        puts("0");
    }
}


int main(){
    int num = 0;
    scanf("%d", &num);
    int aux = num;
    int palindromo = 0;
    teste(num);
    
    
    
    
    return 0;
}