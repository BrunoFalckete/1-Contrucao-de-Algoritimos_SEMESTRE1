//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//20/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*1-ALGORITMO QUE LEIA OS VALOR A,B E C E IMPRIMA NA TELA SE A SOMA DE A E B É MAIOR QUE O VALOR C*/

#include <stdio.h>
    
    void main(){
        //DECLARACAO DAS VARIAVEIS  
        float valor_a;
        float valor_b;
        float valor_c;
        float resultado;

        //ENTRADA DOS VALORES
        printf("Entre com os valores a seguir: \n");
        printf("Valor A: ");
            scanf("%f" , &valor_a);
        printf("Valor B: ");
            scanf("%f" , &valor_b);
        printf("Valor C: ");
            scanf("%f" , &valor_c);

        //ARNAZENAMENTO DA SOMA DOS DOIS PRIMEIROS NUMEROS
        resultado = valor_a + valor_b;

        //SE A SOMA FOR MAIOR QUE O TERCEIRO NUMERO
        //SE A SOMA FOR APRESENTACAO DA MENSAGEM QUE E
        if(resultado >= valor_c){
            printf("O valor da soma de A e B e: %.3f \n" , resultado);
            printf("A soma é maior que o valor C");
        //SE NAO FOR APRESENTACAO DA MENSAGEM QUE NAO E
        }else{
            printf("O valor da soma de A e B e: %.3f \n" , resultado);
            printf("A soma é menor ou igual que o valor C");
        }
    }