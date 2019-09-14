#include <stdio.h>

int main(){
    int capacidade = 0, alunos = 0, aux = 0;
    scanf("%d %d", &capacidade, &alunos);

    if(capacidade > alunos){
        puts("1");
    }else{
        aux = alunos / (capacidade - 1);
        if(alunos % (capacidade - 1) > 0) aux++;
        printf("%d\n", aux);
    }



    return 0;
}