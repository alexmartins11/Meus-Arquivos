#include <stdio.h>

int main(){
    int profundidade = 0, salto = 0, recupera = 0, i = 0;
    scanf("%d %d %d", &profundidade, &salto, &recupera);

    while(i < profundidade){
        printf("%d ", i);
        i += salto;
        if(i < profundidade){
            printf("%d\n", i);
            i -= recupera;
        }
    }
    puts("saiu");

    return 0;
}