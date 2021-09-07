#include <string.h>
#include <stdio.h>
#include <stdbool.h>


bool verificaPrimo(int numero){
    if(numero == 2 || numero == 3 || numero == 5 || numero == 7 || numero==11){
        return true;
    }else if(numero%2 == 0 || numero%3 == 0 || numero%5 == 0 || numero%7 == 0 || numero%11 == 0){
        return false;
    }else{
        return true;
    }
}

int main(){
    int numero;
    bool ehPrimo;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    ehPrimo = verificaPrimo(numero);
    
}