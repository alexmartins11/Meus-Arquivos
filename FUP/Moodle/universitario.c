#include <stdio.h>

int main(){
    int num_n = 0, num_d = 0, num_a = 0;
    scanf("%d %d %d", &num_n, &num_d, &num_a);

    if(num_a == num_d){
        puts("0");
    }else if(num_a < num_d){
        printf("%d\n", (num_d - num_a));
    }else {
        printf("%d\n", ((num_n - num_a) + 1 + (num_d - 1)));
    }




    return 0;
}