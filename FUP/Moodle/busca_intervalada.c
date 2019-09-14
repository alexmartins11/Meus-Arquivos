#include <stdio.h>

int main(){
    int qtd = 0, lim_inf = 0, lim_sup = 0, aux = 0;
    scanf("%d %d %d", &qtd, &lim_inf, &lim_sup);
    for(int i = 0 ; i < qtd ; i++){
        int num = 0;
        scanf("%d", &num);
        if(num >= lim_inf && num <= lim_sup) aux++;
    }
    printf("%d\n", aux);



    return 0;
}