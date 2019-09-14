#include <stdio.h>

int main(){
    char ope = ' ';
    int num1 = 0, num2 = 0;
    scanf("%d %d", &num1, &num2);
    scanf(" %c", &ope);

    if(ope == '+') printf("%d\n", (num1 + num2));
    else if(ope == '-') printf("%d\n", (num1 - num2));
    else if(ope == '*') printf("%d\n", (num1 * num2));
    else if(ope == '/') printf("%d\n", (num1 / num2));
    else puts("Operação invalida");


    return 0;
}