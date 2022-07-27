//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//04/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*5- ALGORITMO QUE CONVERTA A UNIDADE DE MEDIDA FT EM METROS E CENTIMETROS*/

#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEL
    float entrada;
    float resultado;
    char escolha;


    //PROGRAMA FEITO DA MANEIRA SIMPLES
    /*

    //DECLARACAO DE VARIAVEL
    float entrada;
    float resultado_metros;
    float resultado_centimentros;
    
    //ENTRADA DE VALOR
    printf("Entre com o valor em FT para conversao: ");
        scanf("%f" , &entrada);

    //CONVERSAO PARA METRO E CENTIMETRO
    resultado_metros = entrada / 3.2808;
    resultado_centimentros = entrada * 30.48;

    //APRESENTACAO DO RESULTADO
    printf("O resultado de %fFT em Metros e: %f e em Centimetros e: %f" , entrada , resultado_metros , resultado_centimentros);
    */

    //ENTRADA DA ESCOLHA PELO USUARIO
    printf("Escolha o Unidade de medida para converter: \n");
    printf("METRO: 1 ou CENTIMETRO: 2\n");
        scanf("%c" , &escolha);

    //DEFINICAO DA ESCOLHA POR CASO
    switch (escolha){
    //CASO 1 IRA CONVERTER PARA METRO
    case '1':
        //ENTRADA DO VALOR
        printf("Entre com o valor em FT para conversao: ");
            scanf("%f" , &entrada);
        //CALCULO MATEMATICO
        resultado = entrada / 3.2808;
        //APRESENTACAO DO RESULTADO
        printf("O Valor em METROS e: %f" , resultado);
        //FIM DO CASO
        break;
    //CASO 2 IRA CONVERTER PARA CENTIMETRO
    case '2':
        //ENTRADA DO VALOR
        printf("Entre com o valor em FT para conversao: ");
            scanf("%f" , &entrada);
        //CALCULO MATEMATICO
        resultado = entrada * 30.48;
        //APRESENTACAO DO RESULTADO
        printf("O Valor em CENTIMETROS e: %f" , resultado);
        //FIM DO CASO
        break;
    //CASO DIGITADO VALOR DIFERENTE DOS CASO DEFINIDOS, APRESENTACAO DE MENSAGEM DE ERRO
    default:
        //APRESENTACAO DO ERRO
        printf("OPCAO INVALIDA !");
        //FIM DO CASO
        break;
    } 
}