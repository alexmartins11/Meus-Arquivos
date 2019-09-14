#include <stdio.h>

int main(){
    int num = 0;
    scanf("%d", &num);
    for( int i = 1; (i * i) <= num ; i++){
        if((i * i) == num){
            puts("sim");
            return 0;
        }
    }
    puts("nao");


    return 0;
}