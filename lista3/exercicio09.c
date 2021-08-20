#include <string.h>
#include <stdio.h>

char* qualMes(int mesNum){
    char* mes;
    if(mesNum < 1 || mesNum >12){
        mes = " ";
        return mes;
    }else if(mesNum == 1){
        mes = "Janeiro";
        return mes;
    }else if(mesNum == 2){
        mes = "Fevereiro";
        return mes;
    }else if(mesNum == 3){
        mes = "Marco";
        return mes;
    }else if(mesNum == 4){
        mes = "Abril";
        return mes;
    }else if(mesNum == 5){
        mes = "Maio";
        return mes;
    }else if(mesNum == 6){
        mes = "Junho";
        return mes;
    }else if(mesNum == 7){
        mes = "Julho";
        return mes;
    }else if(mesNum == 8){
        mes = "Agosto";
        return mes;
    }else if(mesNum == 9){
        mes = "Setembro";
        return mes;
    }else if(mesNum == 10){
        mes = "Outubro";
        return mes;
    }else if(mesNum == 11){
        mes = "Novembro";
        return mes;
    }else if(mesNum == 12){
        mes = "Dezembro";
        return mes;
    }
}


int main(){
    int mesNum;
    printf("Digite um numero de 1 a 12: ");
    
    scanf("%d", &mesNum);
    printf("O mes eh: %s", qualMes(mesNum));
}