//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//20/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*4-ALGORITMO QUE ENCONTRE O DOBRO DE UM NUMERO SE ELE FOR POSITIVO E O TRIPLO SE FOR NEGATIVO*/

#include <stdio.h>

    void main(){
        //DECLARACAO DA VARIAVEL
        float valor;

        //ENTRADA DO VALOR
        printf("Entre com o valor a seguir: \n");
            scanf("%f" , &valor);

            //SE O VALOR MAIOR QUE 0 (POSITIVO) REALIZA E APRESENTA A OPERACAO MATEMATICA
            if (valor > 0){
                valor = valor * 2;
                printf("O DOBRO do Valor e: %.3f" , valor);
            }
            //SE O VALOR MENOR QUE 0 (NEGATIVO) REALIZA E APRESENTA A OPERACAO MATEMATICA
            if (valor < 0){
                valor = valor * 3;
                printf("O TRIPLO do valor e: %.3f" , valor);
            }    
        //SE O VALOR FOR 0 APRESENTA O ERRO E SOLICITA UM NOVO NUMERO PARA AS OPERACOES
        if (valor == 0){
            printf ("O Numero é ZERO, entre novamente com outro numero: ");
            printf("Entre com o valor novamente: \n");
                scanf("%f" , &valor);

            //SE O VALOR MAIOR QUE 0 (POSITIVO) REALIZA E APRESENTA A OPERACAO MATEMATICA
            if (valor > 0){
                valor = valor * 2;
                printf("O DOBRO do Valor e: %.3f" , valor);
            }
            //SE O VALOR MENOR QUE 0 (NEGATIVO) REALIZA E APRESENTA A OPERACAO MATEMATICA
            if (valor < 0){
                valor = valor * 3;
                printf("O TRIPLO do valor e: %.3f" , valor);
            }
        }          
    }