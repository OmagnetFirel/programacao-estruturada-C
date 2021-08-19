#include <stdio.h>
#include <stdlib.h>

int imc(float peso, float altura){

    float res = peso / (altura * altura);
    if(res < 25.0){
        return 0;
    }else if(res >= 25.0 && res < 30.0){
        return 1;
    }else if(res >= 30.0 && res < 35.0){
        return 2;
    }else if(res >= 35.0 && res <= 40.0){
        return 3;
    }else if(res > 40.0){
        return 4;
    }
}


int main(){
    float peso, altura;
    int resultado;
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura (com casa decimal '.') : ");
    scanf("%f", &altura);
    resultado = imc(peso, altura);
    if(resultado == 0){
        printf("Voce esta na categoria 'ausente'.\n");
    }else if(resultado == 1){
        printf("Voce esta na categoria 'sobrepeso'.\n");
    }else if(resultado == 2){
        printf("Voce esta na categoria 'obesidade I'.\n");
    }else if(resultado == 3){
        printf("Voce esta na categoria 'obesidade II'.\n");
    }else if(resultado == 4){
        printf("Voce esta na categoria 'obesidade morbida'.\n");
    }
}