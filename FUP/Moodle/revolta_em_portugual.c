#include <stdio.h>

int main(){
    int num = 0, par = 0, impar = 0;
    scanf("%d", &num);
    for(int i = 0; i < num ; i++){
        int n = 0;
        scanf("%d", &n);
        if(n % 2 == 0) par += n;
        if(n % 2 == 1) impar += n;
    }
    if(par > impar) puts("rebeldes");
    else if(impar > par) puts("soldados");
    else puts("empate");




    return 0;
}