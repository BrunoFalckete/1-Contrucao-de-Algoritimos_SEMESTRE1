//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//27/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*1- ALGORITMO QUE ESCREVA TODOS OS INTEIROS PARES ENTRE 0 E 1 MILHAO*/

#include <stdio.h>

    void main(){
        //DECLARACAO DE VARIAVEL
        int numero;
        int result;

        //ESCREVA NA TELA O ENUNCIADO
        printf("Numero PARES de 0 a 1.000.000 \n");
        //LACO DE REPETICAO PARA COMPARAR
        for (numero = 0; numero <= 1000000; numero++){
            //CALCULAR DIVISAO E ARMAZENAR NA VARIAVEL RESULT
            result = numero % 2;
            //SE NUMERO DIVIDIDO POR 2 RESTA 0, ESCREVENDO NA TELA O NUMERO
            if (result == 0){
                printf("%d \n" , numero);
            }
        }
    }