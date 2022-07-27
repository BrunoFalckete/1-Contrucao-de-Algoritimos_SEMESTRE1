//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//27/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*2- ALGORITMO QUE MOSTRE TODOS OS NUMEROS IMPARES ENTRE 1 E -1 MILHAO*/

#include <stdio.h>

    void main(){
        //DECLARACAO DAS VARIAVEIS
        int numero;
        int result;
        //ESCREVENDO NA TELA O ENUNCIADO
    	printf("Numero IMPARES de 1 ate -1.000.000\n");
        //DEFININDO O VALOR DA VARIAVEL
        numero = -1000000;
        //LACO DE REPETICAO PARA IR DO VALOR INICIAL ATE O FINAL
        while(numero <= 1){
            //ARMAZENANDO O RESULTADO DO NUMERO DIVIDIDO POR 2
            result = numero % 2;
            //SE O RESULTADO FOR -1 E IMPAR E NEGATIVO ENTAO ESCREVERA NA TELA
            if(result == -1){
                printf("%d \n" , numero);
            }
            //ATUALIZANDO O VALOR DA VARIAVEL
            numero++;
        }
    }