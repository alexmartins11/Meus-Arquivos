#define XPAINT_FULL
#include <xpaint.h>
#include <stdio.h>

int main(){
    int largura = 600, altura = 500;
    int cordx = 0, cordy = 0;
    scanf("%d %d", &cordx, &cordy);
    for(int i = 0;i <= 20;i += 10){
        x_open(largura, altura, "figura_base");
        x_write(50, 30, "pintarei um circulo vermelho em %d %d", largura/2, altura/2);
        x_set_color(X_COLOR_RED);
        x_fill_circle (cordx, cordy, 100);
        x_save();
    }
    x_save();
    x_close();
    return 0;
}