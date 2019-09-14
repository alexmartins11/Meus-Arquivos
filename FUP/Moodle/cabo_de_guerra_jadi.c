#include <stdio.h>
int main(){
    int qtd = 0, aux_1 = 0, aux_2 = 0;
    scanf("%d", &qtd);

    for(int i = 0 ; i < (qtd/2) ; i++){
        int n = 0;
        scanf("%d", &n);
        aux_1 += n;
    }
    for(int i = 0; i < (qtd/2) ; i++){
        int n = 0;
        scanf("%d", &n);
        aux_2 += n;
    }
    if(aux_1 == aux_2) puts("Empate");
    else if(aux_1 > aux_2) puts("Jedi");
    else puts("Sith");



    return 0;
}