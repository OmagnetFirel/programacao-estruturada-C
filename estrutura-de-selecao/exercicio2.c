#include <string.h>
#include <stdio.h>
#include <math.h>

int calculaPotencia(int base, int expoente){
    if(expoente < 0){
        return pow(base, (expoente)*(-1));
    }
    return pow(base, expoente);
}



int main(){
    int base, expoente;
    printf("Digite um numero: ");
    scanf("%d", &base);
    printf("Digite a potencia: ");
    scanf("%d", &expoente);
    calculaPotencia(base, expoente);
    printf("%d elevado a %d eh igual a %d", base, expoente, calculaPotencia(base, expoente));
}