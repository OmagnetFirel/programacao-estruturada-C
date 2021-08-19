#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somar(int, int);
int subtrair(int, int);
int potencializar(int, int);


int main() {
    int a,b,soma,subtracao, potencia;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    soma = somar(a,b);
    subtracao = subtrair(a,b);
    potencia = potencializar(a,b);
    printf("A soma dos dois numeros e: %d\n", soma);
    printf("A subtracao dos dois numeros e: %d\n",subtracao);
    printf("A potencia do primeiro numero e: %d\n",potencia);



    return 0;
}

int somar(int a, int b){
    int resultado;
    resultado = a + b;
    return  resultado;
}
int subtrair(int a, int b){
    int resultado;
    resultado = a - b;
    return resultado;
}

int potencializar(int a, int b){
    int resultado;
    resultado = pow(a,b);
    return resultado;
}