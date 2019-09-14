#define XPAINT_FULL   /*voce precisa desse define ANTES do include" */
#include <xpaint.h>

int main(){
    int largura = 600, altura = 500;
    /* cria um bitmap de 600x500 que irá salvar como figura_base.png*/
    x_open(largura, altura, "Alex_Martins"); 
    x_set_color(X_COLOR_WHITE);
    x_fill_rect(0, 0, 600, 500);
    /* escreve usando a font default na posicao x=50, y=30 */
    /* utilizando o mesmo formato do printf */
    //x_write(50, 30, "Pintarei um circulo vermelho em %d %d", largura/2, altura/2);
    /* muda a cor do pincel para vermelho */
    x_set_color(X_COLOR_BLUE);
    /* desenha um circulo preenchido com centro no meio da tela e raio 200 */
    x_fill_circle(largura/2, altura/2, 130);
    x_set_color(X_COLOR_BLUE);
    x_fill_circle(145, 200, 40);
    x_set_color(X_COLOR_BLUE);
    x_fill_circle(445, 200, 40);
    x_set_color(X_COLOR_WHITE);
    x_fill_circle(333, 213, 60);
    x_set_color(X_COLOR_WHITE);
    x_fill_circle(267, 207, 60);
    x_set_color(X_COLOR_WHITE);
    x_fill_circle(300, 310, 65);
    x_set_color(X_COLOR_RED);
    x_fill_circle(300, 310, 6);
    x_set_color(X_COLOR_RED);
    x_fill_ellipse(270, 200, 20, 35);
    x_set_color(X_COLOR_RED);
    x_fill_ellipse(310, 200, 20, 35);
    x_set_color(X_COLOR_RED);
    x_fill_circle(300, 280, 15);
    x_set_color(X_COLOR_WHITE);
    x_fill_circle(298, 272, 5);
    
    /* salva no arquivo exemplo.png */
    x_save();
    /* libera os recursos alocados */
    x_close();
    return 0;
}
