#include <stdio.h>

int main(){
    int produto = 0, chute_1 = 0, chute_2 = 0, dif_1 = 0, dif_2 = 0;

    scanf("%d %d %d", &produto, &chute_1, &chute_2);
    dif_1 = produto - chute_1;
    dif_2 = produto - chute_2;

    
    if(dif_1 < 0) dif_1 = dif_1 *(-1);
    if(dif_2 < 0) dif_2 = dif_2 *(-1);

   // printf("%d %d", dif_1, dif_2);

    if(dif_1 > dif_2){
        puts("primeiro");
    }else if(dif_2 > dif_1){
        puts("segundo");
    }else{
        puts("empate");
    }

    return 0;
}