#include <stdio.h>


int main(){
    int comprimento_1 = 0, largura_1 = 0, comprimento_2 = 0, largura_2 = 0, area_1 = 0, area_2 = 0; 
    scanf("%d %d", &comprimento_1, &largura_1);
    scanf("%d %d", &comprimento_2, &largura_2);

    area_1 = comprimento_1 * largura_1;
    area_2 = comprimento_2 * largura_2;

    if(area_1 > area_2) printf("%d\n", area_1);
    else printf("%d\n", area_2);


    return 0;
}