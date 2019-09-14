#include <stdio.h>

int main(){
    int num_inf = 0, num_sup = 0, soma = 0;
    scanf("%d %d", &num_inf, &num_sup);

    for(int i = num_inf; i <= num_sup; i++){
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}