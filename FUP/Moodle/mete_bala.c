#include <stdio.h>
#include <math.h>


int main(){
    float x_a = 0, y_a = 0;
    float x_b = 0, y_b = 0;
    float distancia = 0;

    scanf("%f %f", &x_a, &y_a);
    scanf("%f %f", &x_b, &y_b);

    distancia = ((x_b - x_a) * (x_b - x_a)) + ((y_b - y_a) * (y_b - y_a));

    printf("%.2f", sqrt(distancia));


    return 0;
}