#include <string.h>
#include <stdio.h>

int numInfinitos(int numero){
    if(numero == 1) return 0;
    else if(numero == 2) return 1;
    else return numInfinitos(numero-1) + numInfinitos(numero-2);
}



int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O valor do n-esimo termo(%d) eh: %d\n", numero, numInfinitos(numero));

}