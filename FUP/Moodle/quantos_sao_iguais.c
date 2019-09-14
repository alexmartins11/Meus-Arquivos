#include <stdio.h>

int main(){
    int num_1 = 0, num_2 = 0, num_3 = 0;
    scanf("%d %d %d", &num_1, &num_2, &num_3);

    if(num_1 == num_2 && num_2 == num_3){
        puts("3");
    }else if(num_1 == num_2 || num_1 == num_3 || num_2 == num_3){
        puts("2");
    }else{
        puts("0");
    }



    return 0;
}