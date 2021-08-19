#include <stdlib.h>
#include <stdio.h>

//criae uma funcao que retorne o modulo do valor

int modulo(int a){
    if(a >= 0){
        printf("O valor absoluto(modulo) do numero digitado e: %d \n", a);
    }
    else{
        printf("O valor absoluto(modulo) do numero digitado e: %d \n", (a*-1));
    }
}

int main(){
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);
    modulo(a);
}