// feito por victor dia 21/07/2021;
#include <stdio.h>
#include <stdlib.h>

void nomeSobrenome(char*, char*);

int main(){
    char* nome;
    char* sobrenome;

    nome = (char*)malloc(sizeof(char));
    sobrenome = (char*)malloc(sizeof(char));

    printf("Digite o nome da pessoa: ");
    gets(nome);
    printf("Digite o sobrenome da pessoa: ");
    gets(sobrenome);


    nomeSobrenome(nome,sobrenome);

    free(nome);
    free(sobrenome);

}

void nomeSobrenome(char* nome, char*sobrenome){
    printf("%s, %s",sobrenome,nome);
}