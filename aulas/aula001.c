#include <stdio.h>
#include <stdlib.h>

//cria a função
void consolidado(char*, char,int,float, float);

int main(){
    char* nome;
    char sexo;
    int idade;
    float peso,altura;

    //variaveis tipo char* tem que ter essa merda
    nome = (char*)malloc(sizeof(char)*120);

    //gets faz a leitura de texto;
    printf("Digite o nome: ");
    gets(nome);
    //getchar faz a leitura de caracteres;
    printf("Digite o sexo[M ou F]: ");
    sexo = getchar();

    //scanf(tipoVariavel , variavelArmazenada) faz a leitura de numeros;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o peso[Em Quilos]: ");
    scanf("%f", &peso);
    printf("Digite a altura[Em Metros]: ");
    scanf("%f", &altura);

    //aqui chamamos a função   
    consolidado(nome, sexo, idade, peso, altura);

    //variaves tipo char* tem que ter essa merda
    free(nome);
}

//aqui define o que a função faz
void consolidado(char *n, char s, int i, float p, float a){
    //%s = string;
    //%c = 1 caractere;
    //%d = inteiro/decimal;
    //%f = float;
    printf("%s, sexo %c, possui %d anos, pesa %.2f quilos e mede %.2f metros.\n", n, s, i, p, a);
}