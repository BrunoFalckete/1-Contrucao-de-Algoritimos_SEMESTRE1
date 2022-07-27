//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//19/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*4 faça um algoritmo que simule uma calculadora com quatro operaç~es basicas.
o algoritmo deve solicitar ao usuario a entrada de dois operandos e da operação a ser executada,
na forma de um menu. dependendo da opção escolhida, deve ser executada a operação solicitada e escrito seu resultado.
Utilize uma variavel caracterepara armazenar a operação e utilize o comando caso para escolher a operação a ser executada a partir do operador*/

#include <stdio.h>

void main(){
    //DECLARACAO DAS VARIAVEIS
    char funcao;
    float num1;
    float num2;
    float result;

    //ENTRADA DA OPERACAO MATEMATICA
    printf("Entre com a operacao matematica: \n SOMAR = + \n SUBTRAIR = - \n MULTIPLICAR = * \n DIVIDIR = / \n Funcao: ");
    scanf("%c" , &funcao);

    //VERIFICACAO A OPERACAO SELECIONADA
    switch(funcao){
        //CASO FOI + REALIZACAO DA OPERACAO
        case '+' :
            //ENTRADA DOS VALORES
            printf("Entre com os numeros para os Calculos: \n");
            printf("Entre com o Primeiro numero: ");
                scanf("%f" , &num1);
            printf("Entre com o Segundo numero: ");
                scanf("%f" , &num2);
            //OPERACAO MATEMATICA    
            result = num1 + num2;
            //APRESENTACAO DO RESULTADO
            printf("O resultudado e: %.3f" , result);
        break;

        //CASO FOI - REALIZACAO DA OPERACAO
        case '-' :
            //ENTRADA DOS VALORES
            printf("Entre com os numeros para os Calculos: \n");
            printf("Entre com o Primeiro numero: ");
                scanf("%f" , &num1);
            printf("Entre com o Segundo numero: ");
                scanf("%f" , &num2);
            //OPERACAO MATEMATICA
            result = num1 - num2;
            //APRESENTACAO DO RESULTADO
            printf("O resultudado e: %.3f" , result);
        break;

         //CASO FOI * REALIZACAO DA OPERACAO
        case '*' :
            //ENTRADA DOS VALORES
            printf("Entre com os numeros para os Calculos: \n");
            printf("Entre com o Primeiro numero: ");
                scanf("%f" , &num1);
            printf("Entre com o Segundo numero: ");
                scanf("%f" , &num2);
            //OPERACAO MATEMATICA
            result = num1 * num2;
            //APRESENTACAO DO RESULTADO
            printf("O resultudado e: %.3f" , result);
        break;

         //CASO FOI / REALIZACAO DA OPERACAO
        case '/' :
                //ENTRADA DOS VALORES
                printf("Entre com os numeros para os Calculos: \n");
                printf("Entre com o Primeiro numero: ");
                    scanf("%f" , &num1);
                printf("Entre com o Segundo numero: ");
                    scanf("%f" , &num2);
            //VERIFICACAO SE O DIVISOR FOR 0
            //SE FOR 0 NAO TEM COMO FAZER A DIVISAO
            if(num2 == 0){
                printf("Divisao por 0 nao existe !");
            // SE NAO FOR SEGUIR COM A OPERACAO    
            }else{ 
                //OPERACAO MATEMATICA
                result = num1 / num2;
                //APRESENTACAO DO RESULTADO
                printf("O resultudado e: %.3f" , result);
            }
        break;

        //CASO A OPERCAO NAO FOR SELECIONADA ADEQUADAMENTE, APRESENTACAO DO ERRO
        default: printf("Operacao Invalida");

    }
}