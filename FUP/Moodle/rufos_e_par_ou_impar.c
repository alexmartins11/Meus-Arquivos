#include <stdio.h>

int main(){
    char op = ' ';
    int num_1 = 0, num_2 = 0;

    scanf(" %c %d %d", &op, &num_1, &num_2);

    if(op == 'p'){
        if((num_1 + num_2) % 2 == 0){
            puts("Venceu");
        }else puts("Perdeu");
    }if (op == 'i'){
        if((num_1 + num_2) % 2 == 1){
            puts("Venceu");
        }else puts("Perdeu");
    }
    
    

    return 0;
}