// feito por victor dia 21/07/2021;
#include <stdio.h>
#include <stdlib.h>

void cadastrarFuncionarios(char*, int, int,int,float,char);

int main(){
    char* nome;
    char posicao;
    int dia,mes,ano;
    float salario;

    nome = (char*)malloc(sizeof(char)*20);

    printf("Digite o nome do funcionario: ");
    gets(nome);
    printf("O funcionario e chefe de algum setor[S para sim / N para Nao]? ");
    posicao = getchar();
    printf("Digite o dia do seu nascimento: ");
    scanf("%d",&dia);
    printf("Digite o mes do seu nascimento: ");
    scanf("%d",&mes);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d",&ano);
    printf("Digite o salario do funcionario: ");
    scanf("%f",&salario);

    cadastrarFuncionarios(nome,dia,mes,ano,salario,posicao);

    free(nome);
}



void cadastrarFuncionarios(char* nome, int dia, int mes, int ano, float salario,char posicao){
    printf("\nNome do funcionario: %s\nData de nascimento:%d/%d/%d\nSalario: R$%.2f\nPosicao de chefe? %c\n",nome,dia,mes,ano,salario,posicao);
}