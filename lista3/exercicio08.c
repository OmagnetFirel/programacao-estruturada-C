#include <stdlib.h>
#include <stdio.h>

int calculator(int numero1, int numero2, char operacao){
    int resultado;
    if(operacao == '+'){
        resultado = numero1 + numero2;
        return resultado;
    }else if(operacao == '-'){
        resultado = numero1 - numero2;
        return resultado;
    }else if((operacao == '*') || (operacao == 'X') || (operacao == 'x')){
        resultado = numero1 * numero2;
        return resultado;
    }else if((operacao == '/') || (operacao == ':')){
        resultado = numero1 / numero2;
        return resultado;
    }
}



int main(){
    int numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite a operacao\n['+','-','*','x','X','/',':'] : ");
    scanf(" %c", &operacao);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    
    resultado = calculator(numero1, numero2, operacao);
    printf("O resultado e: %d", resultado);
   
}