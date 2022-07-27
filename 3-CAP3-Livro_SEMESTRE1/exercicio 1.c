//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//19/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*1 faça um algoritmo que leia um numero inteiro diferente de zero e diga se este é positivo ou negativo*/

#include <stdio.h>

void main(){

    //DECLARACAO DA VARIAVEL
    int numero;

    //ENTRADA DO VALOR DA VARIAVEL
    printf("Entre com um numero para verificacao diferente de 0: ");
        scanf("%d" , &numero);

            //VERIFICACAO SE A ENTRADA FOI FEITA CORRETA (DIFERENTE DE 0)
            //SE IGUAL A 0
            if(numero == 0){
                //SE NAO FOI, ENTRADA NOVAMENTE DO VALOR
                printf("Diferente de 0 !!!!!, Novo numero: ");
                    scanf("%d", &numero);
                //VERIFICACAO SE MAIOR QUE 0 -> POSITIVO    
                if(numero > 0){
                    printf("O numero e POSITIVO");
                //SE MENOR QUE 0 -> NEGATIVO    
                }else{
                    printf("O numero e NEGATIVO");
                }
            //SE A ENTRADA FOI FEITA CERTA    
            }else{
                //VERIFICACAO SE MAIOR QUE 0 -> POSITIVO  
                if(numero > 0){
                    printf("O numero e POSITIVO");
                //SE MENOR QUE 0 -> NEGATIVO  
                }else{
                    printf("O numero e NEGATIVO");
                }
            }
}