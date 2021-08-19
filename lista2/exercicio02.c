#include <stdio.h>
#include <stdlib.h>

void soma(float,float,float,float,float* numerador,float* denominador);
void subtracao(float,float,float,float,float* numerador,float* denominador);
void multiplicacao(float,float,float,float,float* numerador,float* denominador);
void divisao(float,float,float,float,float* numerador, float* denominador);

int main(){
    float nx, dx;
    float ny,dy;
    float numerador;
    float denominador;
   
    printf("Digite o valor do numerador de X: ");
    scanf("%f", &nx);
    printf("Digite o valor do denominador de X: ");
    scanf("%f", &dx);

    printf("Digite o valor do numerador de Y: ");
    scanf("%f", &ny);
    printf("Digite o valor do denominador de Y: ");
    scanf("%f", &dy);

    soma(nx, dx, ny, dy, &numerador, &denominador);
    printf("O resultado da soma de %.f/%.f + %.f/%.f: %.f/%.f | ou | %.1f \n", nx,dx,ny,dy,numerador, denominador,(numerador/denominador));
    subtracao(nx, dx, ny, dy, &numerador, &denominador);
    printf("O resultado da subtracao de %.f/%.f - %.f/%.f: %.f/%.f | ou | %.1f  \n", nx,dx,ny,dy,numerador, denominador,(numerador/denominador));
    multiplicacao(nx, dx, ny, dy, &numerador, &denominador);
    printf("O resultado da multiplicacao de %.f/%.f * %.f/%.f: %.f/%.f | ou | %.1f \n", nx,dx,ny,dy,numerador, denominador,(numerador/denominador));
    divisao(nx, dx, ny, dy, &numerador, &denominador);
    printf("O resultado da divisao de %.f/%.f / %.f/%.f: %.f/%.f | ou | %.1f \n", nx,dx,ny,dy,numerador, denominador,(numerador/denominador));

}

void soma(float nx,float dx, float ny, float dy, float* numerador, float*denominador) {
    *numerador = nx * dy + ny * dx;
    *denominador = dx * dy;
}

void subtracao(float nx,float dx, float ny, float dy, float* numerador, float*denominador) {
    *numerador = nx * dy - ny * dx;
    *denominador = dx * dy;
}

void multiplicacao(float nx,float dx, float ny, float dy, float* numerador, float*denominador){
    *numerador = nx * ny;
    *denominador = dx * dy;
}

void divisao(float nx,float dx, float ny, float dy, float* numerador, float*denominador){
    *numerador = nx * dy;
    *denominador = dx * ny;
}