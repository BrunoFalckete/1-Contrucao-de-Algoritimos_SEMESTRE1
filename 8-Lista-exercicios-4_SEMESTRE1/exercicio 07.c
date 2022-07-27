//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//04/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*7- ALGORITMO QUE LEIA VALOR EM MILIMITROS E CONVERTER EM POLEGADAS E EM CENTIMETROS*/

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
    float resultado_polegadas;
    float resultado_centimentros;
    
    //ENTRADA DE VALOR
    printf("Entre com o valor em MM para conversao: ");
        scanf("%f" , &entrada);

    //CONVERSAO PARA METRO E CENTIMETRO
    resultado_polegadas = entrada / 25.4;
    resultado_centimentros = entrada / 10;

    //APRESENTACAO DO RESULTADO
    printf("O resultado de %fMM em Polegadas e: %f e em Centimetros e: %f" , entrada , resultado_polegadas , resultado_centimentros);
    */

    //ENTRADA DA ESCOLHA PELO USUARIO
    printf("Escolha o Unidade de medida para converter: \n");
    printf("POLEGADAS: 1 ou CENTIMETRO: 2\n");
        scanf("%c" , &escolha);

    //DEFINICAO DA ESCOLHA POR CASO
    switch (escolha){
    //CASO 1 IRA CONVERTER PARA METRO
    case '1':
        //ENTRADA DO VALOR
        printf("Entre com o valor em MM para conversao: ");
            scanf("%f" , &entrada);
        //CALCULO MATEMATICO
        resultado = entrada / 25.4;
        //APRESENTACAO DO RESULTADO
        printf("O Valor em POLEGADAS e: %f" , resultado);
        //FIM DO CASO
        break;
    //CASO 2 IRA CONVERTER PARA CENTIMETRO
    case '2':
        //ENTRADA DO VALOR
        printf("Entre com o valor em MM para conversao: ");
            scanf("%f" , &entrada);
        //CALCULO MATEMATICO
        resultado = entrada / 10;
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


