#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

bool isCharacter(char c) {
    bool verify = false;
    ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) ? verify=true : printf("%c nao e um caracter valido\n", c);
    return verify;
}

bool isLetter(char c){
    bool verify = false;
    ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? verify = true : printf("%c e um algarismo\n", c);
    return verify;
}

bool isVoewel(char c){
    bool verify = false;
    ((c == 'a'  || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') || ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )) ? printf("%c e uma vogal\n", c , verify=true) : printf("%c e uma consoante\n", c);
    return verify; 
}

bool isAlpha(char c){
    bool verify = false;
    (c >= 'A' && c <= 'Z') ? printf("%c e uma letra maiuscula\n", c, verify=true) : printf("%c e uma letra minuscula\n", c);
    return verify;
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
            printf("%c e uma letra\n", caractere);
            eVogal = isVoewel(caractere);
            eAlpha = isAlpha(caractere);
        }        
    }
}