#include <stdio.h>

int main(){
    int num_a = 0, num_b = 0, num_c = 0, num_h = 0, num_l = 0, janela = 0;
    scanf("%d %d %d", &num_a, &num_b, &num_c);
    scanf("%d %d", &num_h, &num_l);
    
    if((num_a <= num_h && num_b <= num_l) || (num_b <= num_h && num_a <= num_l)){
        puts("S");
    }else if((num_a <= num_h && num_c <= num_l) || (num_c <= num_h && num_a <= num_l)){
        puts("S");
    }else if((num_b <= num_h && num_c <= num_l) || (num_c <= num_h && num_b <= num_l)){
        puts("S");
    }else{
        puts("N");
    }
    



    return 0;
}