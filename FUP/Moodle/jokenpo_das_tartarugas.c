#include <stdio.h>

int main(){
    char jog_1 = ' ', jog_2 = ' ';
    scanf(" %c %c", &jog_1, &jog_2);

    if((jog_1 == 'P' && jog_2 == 'P') || (jog_1 == 'R' && jog_2 == 'R')
    || (jog_1 == 'S' && jog_2 == 'S')){
        puts("empate");
    }else if((jog_1 == 'P' && jog_2 == 'S') || (jog_1 == 'R' && jog_2 == 'S')
    || (jog_1 == 'S' && jog_2 == 'P') || (jog_1 == 'P' && jog_2 == 'R')){
        puts("jog1");
    }else{
        puts("jog2");
    }

    return 0;
}