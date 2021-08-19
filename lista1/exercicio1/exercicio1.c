// feito por victor dia 21/07/2021;
#include <stdio.h>
#include <stdlib.h>

void escrevaNome(char*);

int main(){
    char* nome;

    nome = (char*) malloc(sizeof(char));

    printf("Digite seu nome: ");
    gets(nome);

    escrevaNome(nome);

    free(nome);
}

void escrevaNome(char* nome){
    printf("Seu nome e: %s", nome);
}