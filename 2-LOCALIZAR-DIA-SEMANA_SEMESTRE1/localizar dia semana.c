//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//19/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

#include <stdio.h>

int main(void){
    int ano;
    int mes;
    int dia;
    int temp;
    int result;

    printf("Entre com o dia: ");
        scanf("%d" , &dia);
    printf("Entre com o mes: ");
        scanf("%d" , &mes);
    printf("Entre com o ano: ");
        scanf("%d" , &ano);

    if ((ano%4==0) && ((ano%400==0)||(ano%100!=0))){
        temp = (dia + (mes*2) + ((3*(mes+3))/5) + ano + (ano/4) - (ano/100) + (ano/400) + 2);
         result = temp%7;

         if(result == 0){
            printf("A data e em um Sabado");
         }
         if(result == 1){
            printf("A data e em um Domingo");
        }
        if(result == 2){
            printf("A data e em um Segunda");
        }
        if(result == 3){
            printf("A data e em um Terca");
        }
        if(result == 4){
            printf("A data e em um Quarta");
        }
        if(result == 5){
            printf("A data e em um Quinta");
        }
        if(result == 6){
            printf("A data e em um Sexta");
        }

        return 0;
    }
    else
         temp = (dia + (mes*2) + ((3*(mes+1))/5) + ano + (ano/4) - (ano/100) + (ano/400) + 2);
         result = temp%7;

         if(result == 0){
            printf("A data e em um Sabado");
         }
         if(result == 1){
            printf("A data e em um Domingo");
        }
        if(result == 2){
            printf("A data e em um Segunda");
        }
        if(result == 3){
            printf("A data e em um Terca");
        }
        if(result == 4){
            printf("A data e em um Quarta");
        }
        if(result == 5){
            printf("A data e em um Quinta");
        }
        if(result == 6){
            printf("A data e em um Sexta");
        }

        return 0;
    
}