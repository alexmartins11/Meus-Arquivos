#include <stdio.h>

int main(){
    int vetor[5], menor = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    menor = vetor[0];
    for(int i = 0; i < 5; i++){        
        if(menor > vetor[i]) menor = vetor[i];
    }
    printf("%d\n", menor);


    return 0;
}