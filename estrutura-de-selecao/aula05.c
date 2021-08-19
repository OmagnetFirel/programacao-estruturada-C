#include <stdio.h>
#include <stdlib.h>

int isTriangle(int lado1, int lado2, int lado3){
    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
        if(lado1 == lado2 && lado2 == lado3){
            //equilatero
            return 3;
        }else if(lado1 == lado2 && lado2 != lado3){
            //isoceles
            return 2;
        }else if(lado1 != lado2 && lado2 != lado3){
            //escaleno
            return 1;
        }
    }else{
        //não e triangulo
        return 0;  
    }
}




int main(){
    int lado1,lado2,lado3, triangulo;
    printf("Digite o primeiro lado 1: ");
    scanf("%d",&lado1);
    printf("Digite o segundo lado 2: ");
    scanf("%d",&lado2);
    printf("Digite o terceiro lado 3: ");
    scanf("%d",&lado3);
    triangulo = isTriangle(lado1,lado2,lado3);

    if(triangulo == 0){
        printf("Nao e um triangulo");
    }else if(triangulo == 1){
        printf("E um triangulo escaleno");
    }else if(triangulo == 2){
        printf("E um triangulo isoceles");
    }else if(triangulo == 3){
        printf("E um triangulo equilatero");
    }
}