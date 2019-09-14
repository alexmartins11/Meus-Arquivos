#include <stdio.h>

int main(){
    int cesta = 0, bananas = 0, goiabas = 0, mangas = 0;
    int coletas = 0, total = 0;
    scanf("%d %d %d %d", &cesta, &bananas, &goiabas, &mangas);

    total = bananas + goiabas + mangas;
    coletas = total / cesta;
    
    if(total % cesta > 0){
        coletas++;
    }
    
    

    printf("%d\n", coletas);


    return 0;
}