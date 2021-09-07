#include <string.h>
#include <stdio.h>


int calculaFatorial(int n) {
    int fat = 1;
    if(n == 0) return 1;
    fat = n * calculaFatorial(n - 1);
    return fat;
}



int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O fatorial de %d e %d\n", numero, calculaFatorial(numero));

}