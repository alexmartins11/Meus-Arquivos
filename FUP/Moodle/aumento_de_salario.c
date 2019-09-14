#include <stdio.h>


int main(){
    float salario = 0;
    scanf("%f", &salario);

    if(salario <= 1000){
        printf("%.2f", (salario * 1.2));
    }else if(salario <= 1500){
        printf("%.2f", (salario * 1.15));
    }else if(salario == 2000){
        printf("%.2f", (salario * 1.1));
    }else{
        printf("%.2f", (salario * 1.05));
    }
    





    return 0;
}