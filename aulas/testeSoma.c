#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b);

int main(){
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma(a, b);
}

void soma(int a, int b){
    printf("A resposta e: %d + %d = %d\n", a, b, a + b);
}