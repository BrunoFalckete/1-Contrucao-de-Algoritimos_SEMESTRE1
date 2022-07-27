//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//20/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*3-ALGORITMO QUE LEIA DOS NUMEROS E EFETUE A ADICAO DELES,
CASO O VALOR SOMADO SEJE MAIOR QUE 10 O RESULTADO DEVE SER APRESENTADO SOMANDO-SE A ELE MAIS 8,
SE O VALOR SOMADO SEJA MENOR OU IGUAL A 10  DEVERA SER APRESENTADO O RESULTADO MENOS 5*/

#include <stdio.h>

    void main(){
        //DECLARACAO DAS VARIAVEIS
        float valor1;
        float valor2;
        float resultado;

        //ENTRADA DOS VALORES
        printf("Entre com os valores a seguir: \n");
        printf("Valor 1: ");
            scanf("%f" , &valor1);
        printf("Valor 2: ");
            scanf("%f" , &valor2);

        //SOMA DOS VALOR SENDO ARMAZENADA EM UM VARIAVEL
        resultado = valor1 + valor2;

        //SE O RESULTADO FOR MAIOR QUE 10, APRESENTA A SOMA E DEPOIS A SOMA MAIS 8
        if(resultado > 10){
            printf("O valor da soma e: %.3f \n" , resultado);
                resultado = resultado + 8;
            printf("A soma e maior que 10 entao somado mais 8 fica: %.3f" , resultado);
        //SE NAO FOR APRESENTA A SOMA E DEPOIS A SOMA MENOS 5
        }else{
            if (resultado <= 10){
                printf("O valor da soma e: %.3f \n" , resultado);
                    resultado = resultado - 5;
                printf("A soma e menor ou igual a 10 entao subtraido 5 fica: %.3f" , resultado);
            }
        }
    }