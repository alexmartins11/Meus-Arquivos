#include <stdio.h>

int main(){
    int lancador = 0, receptor = 0, defensor = 0;
    scanf("%d %d %d", &lancador, &receptor, &defensor);
    
    if((receptor > 50) && (lancador < receptor) && (receptor > defensor)){
        printf("S\n");
    }else{
        printf("N\n");
    }



    return 0;
}