#include <stdio.h>

int main(){
    int num_inf = 0, num_sup = 0;
    scanf("%d %d", &num_inf, &num_sup);
    printf("[");
    for(int i = num_inf, j = num_sup; i <= num_sup && j >= num_inf ;i++, j--){
        
        printf(" %d %d", i, j);
                
    }
    printf(" ]\n");
    
    return 0;
}