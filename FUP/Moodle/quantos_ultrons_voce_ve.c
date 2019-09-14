#include <stdio.h>

int main(){
    int num_x = 0, num_n = 0, aux = 0;
    scanf("%d %d", &num_x, &num_n);

    for(int i = 0 ; i < num_n ; i++){
        int n = 0;
        scanf("%d", &n);
        if(num_x == n) aux++;
    }
    printf("%d\n", aux);



    return 0;
}