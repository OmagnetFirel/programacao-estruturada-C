#include <stdio.h>
#include <stdlib.h>

int theGreaterOfTwo(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int theGreaterOfThree(int greater, int c){
    return theGreaterOfTwo(greater, c); 
}


int main(){
    int a, b, greater2,greater3, c;


    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);
    printf("Insira o terceiro numero: ");
    scanf("%d", &c);
    greater2 = theGreaterOfTwo(a, b);
    greater3 = theGreaterOfThree(greater2, c);
    printf("O maior numero entre os 3 inseridos e: %d \n", greater3);

}