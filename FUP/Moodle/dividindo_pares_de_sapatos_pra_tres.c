#include <stdio.h>

int main(){
    int num_a = 0, num_b = 0, soma = 0;
    scanf("%d %d", &num_a, &num_b);
    if(num_b >= num_a){
        for(int i = num_a; i <= num_b; i++){
            if((i % 2 == 0) && (i % 3 == 0)){
                soma += i;
            }
        }
        printf("%d\n", soma);
    }else printf("invalido\n");
    

    return 0;
}