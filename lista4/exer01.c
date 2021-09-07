#include <stdio.h>
#include <stdlib.h>

int calculaTeto(int n){
    int piso = n;
    if(piso == n){
        piso = piso + 1;
    }
    else{
        while(piso > n){
            piso = piso + 0.1;
        }
    }
       
    printf("o teto eh: %d\n", piso);
}

float calculaPiso(float n){
    int piso = n;
    if(piso == n){
        piso = piso - 1;
    }
    else{
        while(piso > n){
            piso = piso - 0.1;
        }
    }
       
    printf("o piso eh: %d\n", piso);
}

int main(void){
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);
    
    
    calculaTeto(numero);
    calculaPiso(numero);
}