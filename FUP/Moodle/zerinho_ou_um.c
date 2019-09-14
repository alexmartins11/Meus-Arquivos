#include <stdio.h>

int main(){
    int jog_1 = 0, jog_2 = 0, jog_3 = 0;
    scanf("%d %d %d", &jog_1, &jog_2, &jog_3);

    if((jog_1 == 0 && jog_2 == 0 && jog_3 == 0) || (jog_1 == 1 && jog_2 == 1 && jog_3 == 1)){
        puts("empate");
    }else if ((jog_1 == 0 && jog_2 == 1 && jog_3 == 1) || (jog_1 == 1 && jog_2 == 0 && jog_3 == 0)){
        puts("jog1");
    }else if ((jog_1 == 1 && jog_2 == 0 && jog_3 == 1) || (jog_1 == 0 && jog_2 == 1 && jog_3 == 0)){
        puts("jog2");
    }else {
        puts("jog3");
    }



    return 0;
}