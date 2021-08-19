#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void isPar(int a){
    if(a%2 == 0){
        printf("O numero %d e par.\n", a);
    }
    else{
        printf("O numero %d e impar.\n", a);
    }
}


void isDivisivel(int n, int d){
    if(n % d == 0){
        printf("%d e divisivel por %d\n", n, d);
    }else if(n % d != 0){
        printf("%d nao e divisivel por %d\n", n, d);
    }
}



int main(){
    int numero1, numero2;
    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);
    isPar(numero1);
    isPar(numero2);
    isDivisivel(numero1,numero2);

}