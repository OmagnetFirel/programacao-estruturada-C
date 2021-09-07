#include <stdlib.h>
#include <stdio.h>

int calculaCedula(int valor, int *nota500, int *nota100, int *nota50, int *nota10, int *nota5, int *nota1){

    *nota500 = valor/500;
    valor = valor%500;

    *nota100 = valor/100;
    valor = valor%100;

    *nota50 = valor/50;
    valor = valor%50;

    *nota10 = valor/10;
    valor = valor%10;

    *nota5 = valor/5;
    valor = valor%5;

    *nota1 = valor;
    


}


int main(){
    int valorProduto;
    int nota500, nota100, nota50, nota10, nota5, nota1; 

    printf("Digite o valor do produto: ");
    scanf("%d", &valorProduto);

    calculaCedula(valorProduto,&nota500,&nota100,&nota50,&nota10,&nota5,&nota1);

    printf("Para pagar o produto sera necessario: \n");
    if(nota500 > 0){
            printf("%d Notas de X$500\n", nota500);
    }
    if(nota100 > 0){
        printf("%d Notas de X$100\n", nota100);
    }
    if(nota50 > 0){
        printf("%d Notas de X$50\n", nota50);
    }
    if(nota10 > 0){
        printf("%d Notas de X$10\n", nota10);
    }
    if(nota5 > 0){
        printf("%d Notas de X$5\n", nota5);
    }
    if(nota1 > 0){
        printf("%d Notas de X$1\n", nota1);
    }

}