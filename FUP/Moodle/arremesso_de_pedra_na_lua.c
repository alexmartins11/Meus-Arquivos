#include <stdio.h>

int main(){
    int comp = 0;
    scanf("%d", &comp);
    int melhor = 1000, jog = 0;
    for(int i = 0; i < comp ; i++){
        int arr_a = 0, arr_b = 0;
        scanf("%d %d", &arr_a, &arr_b);
        if(arr_a < 10 || arr_b < 10){
        }
        else{
            arr_a -= 10;
            arr_b -= 10;
            int aux = arr_a + arr_b;
            if(aux < melhor){
                jog = i;
            }

        }
    }
    printf("%d\n", jog);


    return 0;
}