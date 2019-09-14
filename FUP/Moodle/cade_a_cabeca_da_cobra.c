#include <stdio.h>

int main(){
    int N = 0, X = 0, Y = 0, segundos = 0;
    char posicao = ' ';
    scanf("%d %d %d", &N, &X, &Y);
    scanf(" %c %d", &posicao, &segundos);
    
    if(posicao == 'U') Y -= segundos;
    if(posicao == 'D') Y += segundos;
    if(posicao == 'R') X += segundos;
    if(posicao == 'L') X -= segundos;

    X = X % N;
    Y = Y % N;
    
    if(X < 0) X += N;
    if(Y < 0) Y += N;

    printf("%d %d\n", X, Y);



    return 0;
}