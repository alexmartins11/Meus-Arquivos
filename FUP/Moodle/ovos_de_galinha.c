#include <stdio.h>

int main(){
    int num_1 = 0, num_2 = 0, num_3 = 0, num_4 = 0;
    scanf("%d %d %d %d", &num_1, &num_2, &num_3, &num_4);

    if(num_1 >= num_2 && num_1 >= num_3 && num_1 >= num_4){
        printf("%d\n", num_1);
    }else if(num_2 >= num_1 && num_2 >= num_3 && num_2 >= num_4){
        printf("%d\n", num_2);
    }else if(num_3 >= num_1 && num_3 >= num_2 && num_3 >= num_4){
        printf("%d\n", num_3);
    }else{
        printf("%d\n", num_4);
    }
    return 0;
}