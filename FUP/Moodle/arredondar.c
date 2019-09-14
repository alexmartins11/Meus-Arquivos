#include <stdio.h>
#include <math.h>

int main(){
    float num = 0;
    char ope = ' ';
    scanf(" %c", &ope);
    scanf("%f", &num);

    if(ope == 'c'){
        num = ceil(num);
    }else if(ope == 'r'){
        num = round(num);
    }else{
        num = floor(num);
    }
    printf("%d\n", (int)num);


    return 0;
}