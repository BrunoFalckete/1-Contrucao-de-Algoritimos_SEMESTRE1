//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//12/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*13- ALGORITMO QUE CONVERTA A TEMPERATURA DE GRAUS CELSIUS PARA FAHRENHEIT*/

#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEL
    float celsius;
    float fahrenheit;
    float kelvin;
    char escolha;
    //ENTRADA DA ESCOLHA DO USUARIO PARA QUAL TIPO DE TEMPERATURA
    printf("Entre com a Temperatura para conversao: \nDigite 'c' para CELSIUS, 'k' para KELVIN e 'f' para FAHRENHEIT: ");
        scanf("%c" , &escolha);
    //CONDICAO DE ESCOLHA
    switch(escolha){
        //ESCOLHA C, CELSIUS
        case 'c':
            //ENTRADA DO DADO DE TEMPERATURA
            printf("Entre com a temperatura em CELSIUS: ");
                scanf("%f" , &celsius);
            //CALCULOS DE CONVERSAO
            fahrenheit = (celsius * 1.8) + 32;
            kelvin = celsius + 273.15;
            //APRESENTACAO DOS VALORES
            printf("A temperatura de %.2fC:\nFAHRENHEIT: %.2fF\nKELVIN: %.2fK", celsius , fahrenheit , kelvin);
        break;
        //ESCOLHA F, FAHRENHEIT
        case 'f':
            //ENTRADA DO DADO DE TEMPERATURA
            printf("Entre com a temperatura em FAHRENHEIT: ");
                scanf("%f" , &fahrenheit);
            //CALCULOS DE CONVERSAO
            celsius = (fahrenheit - 32) / 1.8;
            kelvin = (fahrenheit + 459.67) / 1.8;
            //APRESENTACAO DOS VALORES
            printf("A temperatura de %.2fF:\nCELSIUS: %.2fC\nKELVIN: %.2fK", fahrenheit , celsius , kelvin);
        break;
        //ESCOLHA K, KELVIN
        case 'k':
            //ENTRADA DO DADO DE TEMPERATURA
            printf("Entre com a temperatura em KELVIN: ");
                scanf("%f" , &kelvin);
            //CALCULOS DE CONVERSAO
            celsius = kelvin - 273.15;
            fahrenheit = (kelvin * 1.8) - 459.67;
            //APRESENTACAO DOS VALORES
            printf("A temperatura de %.2fK:\nCELSIUS: %.2fC\nFAHRENHEIT: %.2fF", kelvin , celsius , fahrenheit);
        break;
        //ENTRADA INCORRETA APRESENTACAO DE ERRO
        default:
            printf("OPCAO INVALIDA");
        break;
    }
}