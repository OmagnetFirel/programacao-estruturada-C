#include <stdlib.h>
#include <stdio.h>

float pontoMedio(float x1, float x2, float y1, float y2, float *xmp, float *ymp);

int main(){
    float x1, x2, y1, y2, ponto;
    float ym, xm;

    printf("Digite o valor de X1 do primeiro ponto: ");
    scanf("%f", &x1);
    printf("Digite o valor de Y1 do primeiro ponto: ");
    scanf("%f", &y1);
    printf("O primeiro ponto tem como cordenada o valor: %.f,%.f\n\n", x1, y1);

    printf("Digite o valor de X2 do segundo ponto: ");
    scanf("%f", &x2);
    printf("Digite o valor de Y2 do segundo ponto: ");
    scanf("%f", &y2);
    printf("O segundo ponto tem como cordenada o valor: %.f,%.f\n\n", x2, y2);

    pontoMedio(x1, x2, y1, y2, &xm, &ym);

    printf("O ponto medio entre os dois pontos tem cordenada o valor: %.1f, %.1f\n\n", xm, ym);
}

float pontoMedio(float x1, float x2, float y1, float y2, float *xmp, float *ymp){
    *xmp = (x1 + x2)/2;
    *ymp = (y1 + y2)/2;
}