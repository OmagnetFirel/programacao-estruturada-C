#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

bool isCharacter(char c) {
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
        return true;
    }
    printf("Nao e Caractere");
    return false;
}

bool isLetter(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("Caractere e uma letra");
        return true;
    }
    printf("Caractere e um Algarismo");
    return false;
}

bool isVoewel(char c){
    if((c == 'a'  || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') || ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )){
        printf("E Vogal");
        return true;
    }
    printf("E uma Consoante");
    return false;
}

bool isAlpha(char c){
    if(c >= 'A' && c <= 'Z'){
        printf("E Maiuscula");
        return true;
    }else{
        printf("E Minuscula");
        return false;
    }
}

int main(){
    char caractere;
    bool isCharactere, eLetra, eVogal, eAlpha;
    printf("Digite um Caractere: ");
    caractere = getchar();
    isCharactere = isCharacter(caractere);
    if(isCharactere == true){
        printf("Caractere Valido\n");
        eLetra = isLetter(caractere);
        if(eLetra == true){
            printf("\n");
            isVoewel(caractere);
            printf("\n");
            isAlpha(caractere);
            printf("\n");
        }        
    }
}