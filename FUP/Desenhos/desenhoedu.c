
#define XPAINT_FULL   /*voce precisa desse define ANTES do include" */
#include <xpaint.h>

int main(){
    int largura = 800, altura = 500;
    /* cria um bitmap de 600x500 que irá salvar como figura_base.png*/
    x_open(largura, altura, "Carlos_Eduardo"); 
    /* escreve usando a font default na posicao x=50, y=30 */
    /* utilizando o mesmo formato do printf */
    x_write(50, 30, "Pintarei um circulo vermelho em %d %d", largura/2, altura/2);
    /* muda a cor do pincel para vermelho */
    x_set_color(X_COLOR_WHITE);
    x_fill_rect(0, 0, 900, 500);
    /* desenha um circulo preenchido com centro no meio da tela e raio 200 */
    x_set_color(X_COLOR_RED);
    x_fill_rect(370, 0, 60, 500);
    x_set_color(X_COLOR_RED);
    x_fill_rect(0, 225, 800, 60);
    /* salva no arquivo exemplo.png */
    x_save();
    /* libera os recursos alocados */
    x_close();
    return 0;
}