//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//04/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*ALGORITMO QUE LEIA 5 NUMEROS INTEIROS E APRESENTE O MAIOR E O MENOR DELES*/

#include <stdio.h>

    void main(){
        //DECLARACAO DA VARIAVEIS E DEFINICICAO DO VALOR INICIAL
        int numero1;
        int numero2;
        int numero3;
        int numero4;
        int numero5;
        int maior = 0;
        int menor = 0;

        printf("Entre com os numero: \n");
            printf("Primeiro numero: \n");
                scanf("%d" , &numero1);

            printf("Segundo numero: \n");
                scanf("%d" , &numero2);

            printf("Terceiro numero: \n");
                scanf("%d" , &numero3);

            printf("Quarto numero: \n");
                scanf("%d" , &numero4);

            printf("Quinto numero: \n");
                scanf("%d" , &numero5);

            //CODICAO QUE DEFININE OS VALORES DAS VARIAVEIS MAIOR E MENOR ENTRANDO COM O VALOR INICIAL DO USUARIO
            if((numero1 < numero2) && (numero1 < numero3) && (numero1 < numero4) && (numero1 < numero5)){
                menor = numero1;
            }else if((numero1 > numero2) && (numero1 > numero3) && (numero1 > numero4) && (numero1 > numero5)){
                maior = numero1;
            }

            if((numero2 < numero1) && (numero2 < numero3) && (numero2 < numero4) && (numero2 < numero5)){
                menor = numero2;
            }else if((numero2 > numero1) && (numero2 > numero3) && (numero2 > numero4) && (numero2 > numero5)){
                maior = numero2;
            }
                    
            if((numero3 < numero1) && (numero3 < numero2) && (numero3 < numero4) && (numero3 < numero5)){
                menor = numero3;
            }else if((numero3 > numero1) && (numero3 > numero2) && (numero3 > numero4) && (numero3 > numero5)){
                maior = numero3;
            }
                
            if((numero4 < numero1) && (numero4 < numero3) && (numero4 < numero2) && (numero4 < numero5)){
                menor = numero4;
            }else if((numero4 > numero1) && (numero4 > numero3) && (numero4 > numero2) && (numero4 > numero5)){
                maior = numero4;
            }
               
            if((numero5 < numero1) && (numero5 < numero3) && (numero5 < numero4) && (numero5 < numero2)){
                menor = numero5;
            }else if((numero5 > numero1) && (numero5 > numero3) && (numero5 > numero4) && (numero5 > numero2)){
                maior = numero5;
            }

        //APRESENTACAO DOS VALORES MAIOR E MENOR
        printf("O MAIOR numero e: %d e o MENOR e: %d" , maior , menor);
    }