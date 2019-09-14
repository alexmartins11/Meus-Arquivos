#define XPAINT_FULL   /*voce precisa desse define ANTES do include" */
#include <xpaint.h>

int main(){
    int largura = 600, altura = 500;
    
    /* cria um bitmap de 600x500 que irá salvar como figura_base.png*/
    x_open(largura, altura, "figura_base"); 
    
    x_set_color(X_COLOR_BLUE);
    /* desenha um retângulo preenchido */
    x_fill_rect(0, 30, 200, 500);
    /* salva no arquivo exemplo.png */

    x_set_color(X_COLOR_WHITE);
    x_fill_rect(200, 30, 200, 500);

    x_set_color(X_COLOR_RED);
    x_fill_rect(400, 30, 200, 500);

    x_set_color(X_COLOR_WHITE);
    x_write(140, 0, "FRANCA CHAMPION OF THE WORLD 2018");

    x_save();
    /* libera os recursos alocados */
    x_close();
    return 0;
}