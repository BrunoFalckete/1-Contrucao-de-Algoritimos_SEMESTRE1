//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//04/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*2- ALGORITMO QUE LEIA 5 NUMEROS INTEIROS E APRESENTE O MAIOR E O MENOR DELES*/

#include <stdio.h>

    void main(){
        //DECLARACAO DA VARIAVEIS E DEFINICICAO DO VALOR INICIAL
        int numero;
        int maior = 0;
        int menor = 0;
        int contador2 = 0;
        //LACO DE REPETICAO QUE VAI ATE 5 POSICOES
        for (int contador = 0; contador <= 4; contador++){
            //ENTRADA DE VALORES
            printf("Entre com os numero: ");
                scanf("%d" , &numero);
            //CODICAO QUE DEFININE OS VALORES DAS VARIAVEIS MAIOR E MENOR ENTRANDO COM O VALOR INICIAL DO USUARIO
            if(contador2 == 0){
                maior = numero;
                menor = numero;
                //ATUALIZACAO DO CONTADOR PARA IR PARA A PROXIMA CONDICAO
                contador2++;
            }
            //CONDICAO DE COMPARACAO DO NUMERO DIGITADO E DO NUMERO QUE ESTA NA VARIAVEL, SE A CONDICAO FOR ATENDIDA SOBRESCREVE
            if(numero > maior){
                maior = numero;
            }
            //CONDICAO DE COMPARACAO DO NUMERO DIGITADO E DO NUMERO QUE ESTA NA VARIAVEL, SE A CONDICAO FOR ATENDIDA SOBRESCREVE
            if (numero < menor){
                menor = menor;
            }  
        }
        //APRESENTACAO DOS VALORES MAIOR E MENOR
        printf("O MAIOR numero e: %d e o MENOR e: %d" , maior , menor);
    }