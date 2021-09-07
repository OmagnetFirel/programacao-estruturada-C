//victor araujo mouza da silva
#include <stdio.h>
#include <stdlib.h>

void menorMaior(int num1,int num2){
    if(num1>num2){
        printf("Menor numero entre %d e %d eh: %d",num1,num2,num2);
        printf("Maior numero entre %d e %d eh: %d",num1,num2,num1);
    }
    else{
        printf("Menor numero entre %d e %d eh: %d",num1,num2,num1);
        printf("Maior numero entre %d e %d eh: %d",num1,num2,num2);
    }
}
int quantidadeDeDivisores(int numero){
    int contador=0;
    int i = 1;
    for(i=1;i<=numero;i++){
        if(numero%i==0){
            contador++;
        }
    }
    return contador;
}
int primo(int numero){
    if(numero == 2 || numero == 3 || numero == 5 || numero == 7 || numero==11){
        return 1;
    }else if(numero%2 == 0 || numero%3 == 0 || numero%5 == 0 || numero%7 == 0 || numero%11 == 0){
        return 0;
    }else{
        return 1;
    }
}
int menorDivisorPrimo(int numero){
    int i = 2;
    //verifica se e numero 1
    if(numero==1){
        return 1;
    }else{
        //loop buscando todos primos ate o numero
        for(i;i<=numero;i++){
            //verifica se e primo
            if(numero%i==0){
                if(primo(i)==1){
                    return i;
                }
            }
        }
    }
   
}
int mmc (int num1, int num2){
    int divisor, a, b;
    int resultado = 1;
    //quebra loop aq
    if ((num1 == 1) && (num2 == 1)){
        return resultado;
    }
    //loop para fazer mmc;
    while ((num1!=1) && (num2!=1)){
        //busca o menor divisor primo
        a = menorDivisorPrimo(num1);
        b = menorDivisorPrimo(num2);
        //verifica qual dos dois e menor
        if (a < b){
            divisor = a;
        }else if(a>b){
            divisor = b;
        }
        else{
            divisor = a;
        }
        //faz a conta do mmc de acordo com algoritmo
        if (num1 % divisor == 0){
            num1 = num1 / divisor;
        }
        if (num2 % divisor == 0){
            num2 = num2 / divisor;
        }
        resultado = resultado * divisor;
    }
    resultado = resultado * num1 * num2;
    return resultado;
}
int main(){
    int num1,num2,num1primo,num2primo;
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);
    menorMaior(num1,num2);
    printf("\n");
    printf("Quantidade de divisores de %d: %d",num1,quantidadeDeDivisores(num1));
    printf("\n");
    printf("Quantidade de divisores de %d: %d",num2,quantidadeDeDivisores(num2));
    printf("\n");
    num1primo = primo(num1);
    num2primo = primo(num2);
    
    printf("Menor divisor primo de %d: %d",num1,menorDivisorPrimo(num1));
    printf("\n");
    printf("Menor divisor primo de %d: %d",num2,menorDivisorPrimo(num2));
    printf("\n");
    printf("Menor multiplo comum entre %d e %d: %d",num1,num2,mmc(num1,num2));
}