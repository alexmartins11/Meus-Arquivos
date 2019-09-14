#include <stdio.h>
#include <math.h>

int main(){
   
    float lado_1 = 0, lado_2 = 0, lado_3 = 0, p = 0, area = 0;

    scanf("%f %f %f", &lado_1, &lado_2, &lado_3);

    p = (lado_1 + lado_2 + lado_3) / 2;
    area = p*(p - lado_1) * (p - lado_2) * (p - lado_3);
    area = sqrt(area);

    printf("%.2f\n", area);

    return 0;
}