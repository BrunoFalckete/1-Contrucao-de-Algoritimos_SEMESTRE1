//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//13/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*19- ALGORITMO QUE CALCULE A MEDIDA DO PERIMETRO DE UM TRIANGULO RETANGULO*/

#include <stdio.h>

void main(){
    //DECLARACAO DAS VARIAVEIS
    int lado1;
    int lado2;
    int lado3;
    int perimetro;

    //ENTRADA DOS DADOS PELO USUARIO
    printf("Entre com os lados do Triangulo: \n");
    printf("Entre com o primeiro lado: ");
        scanf("%d" , &lado1);
    printf("Entre com o segundo lado: ");
        scanf("%d" , &lado2);
    printf("Entre com o terceiro lado: ");
        scanf("%d" , &lado3);
    //CALCULO DO PERIMETRO
    perimetro = lado1 + lado2 + lado3;
    //APRESENTACAO NA TELA DO RESULTADO
    printf("O perimetro do triangulo e: %d" , perimetro);
}