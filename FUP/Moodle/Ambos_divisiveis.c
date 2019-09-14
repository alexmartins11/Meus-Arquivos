#include <stdio.h>


int main(){
    int num1 = 0, num2 = 0;
    scanf("%d %d", &num1, &num2);

    if((num1 % 3 == 0) || (num2 % 5 == 0)){
        puts("sim");
    }else puts("nao");




    return 0;
}