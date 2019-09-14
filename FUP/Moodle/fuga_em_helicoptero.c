#include <stdio.h>

int main(){
    int heli = 0, poli = 0, lad = 0, dir = 0;
    scanf("%d %d %d %d", &heli, &poli, &lad, &dir);

    if(dir == 1){
        for(;;lad++){
            if(lad == 16){
                lad = 0;
            }if(lad == poli){
                puts("N");
                break;
            }if(lad == heli){
                puts("S");
                break;
            }
        }
    }else{
        for(;;lad--){
            if(lad == -1){
                lad = 15;
            }if(lad == poli){
                puts("N");
                break;
            }if(lad == heli){
                puts("S");
                break;
            }
        }
    }



    return 0;
}