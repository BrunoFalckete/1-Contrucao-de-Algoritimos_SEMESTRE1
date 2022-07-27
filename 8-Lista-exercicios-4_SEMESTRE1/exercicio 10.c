//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//12/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*10- ALGORITMO PRA CALCULAR A HIPOTENUSA, DE UM TRIANGULO RETANGULO, COM OS LADOS FORNECIDOS POR USUARIO*/

#include <stdio.h>
//INCLUSAO DA BIBLIOTECA MATEMATICA
#include <math.h>

void main(){
    //DECLARACAO DAS VARIAVEIS
    int lado1;
    int lado2;
    int lado3;
    float hipotenusa;

    //ENTRADA DOS DADOS PELO USUARIO
    printf("Entre com os lados do Triangulo: \n");
    printf("Entre com o primeiro lado: ");
        scanf("%d" , &lado1);
    printf("Entre com o segundo lado: ");
        scanf("%d" , &lado2);

    //CALCULO MATEMATICO
    //CALCULANDO O QUADRADO DOS CATETOS
    lado3 = (lado1 * lado1) + (lado2 * lado2);
    //CALCULANDO A RAIZ QUADRADA COM SQRT E ARMAZENANDO NA VARIAVEL
    hipotenusa = sqrt(lado3);

    printf("A hipotenusa e: %.2f" , hipotenusa);

    /*
    //VERIFICACAO SE OS LADOS FORMAM UM TRIANGULO
    if(lado1 + lado2 < hipotenusa){
        printf("Os lados nao formao um triangulo ");
        //SE FORMAREM ENTRARA PARA VERIFICACAO DOS LADOS
     }else{
         printf("A hipotenusa e: %.2f" , hipotenusa);
     }
     */
}

/*
void main(){
    //DECLARACAO DAS VARIAVEIS
    int lado1;
    int lado2;
    int lado3;
    int hipotenusa;
    int cateto_oposto;
    int cateto_adjacente;

    //ENTRADA DOS DADOS PELO USUARIO
    printf("Entre com os lados do Triangulo: \n");
    printf("Entre com o primeiro lado: ");
        scanf("%d" , &lado1);
    printf("Entre com o segundo lado: ");
        scanf("%d" , &lado2);
    printf("Entre com o terceiro lado: ");
        scanf("%d" , &lado3);

    //VERIFICACAO SE OS LADOS FORMAM UM TRIANGULO
    if(lado1 + lado2 < lado3){
        printf("Os lados nao formao um triangulo ");
        //SE FORMAREM ENTRARA PARA VERIFICACAO DOS LADOS
    }else{

        //VERIFICACAO DA HIPOTENUSA
        if(lado1 > lado2 && lado1 > lado3 ){
            hipotenusa = lado1;
        }
        if(lado2 > lado1 && lado2 > lado3 ){
            hipotenusa = lado2;
        }
        if(lado3 > lado1 && lado3 > lado1 ){
            hipotenusa = lado3;
        }

        //VERIFICACAO CATETO OPOSTO
        if(lado1 < lado2 && lado1 < lado3 ){
            cateto_oposto = lado1;
        }
        if(lado2 < lado1 && lado2 < lado3 ){
            cateto_oposto = lado2;
        }
        if(lado3 < lado1 && lado3 < lado2 ){
            cateto_oposto = lado3;
        }

        //VERIFICACAO CATETO ADJACENTE
        if(lado1 < lado2 && lado1 > lado3 ){
            cateto_adjacente = lado1;
        }
        if(lado1 > lado2 && lado1 < lado3 ){
            cateto_adjacente = lado1;
        }
        if(lado2 < lado1 && lado2 > lado3 ){
            cateto_adjacente = lado2;
        }
        if(lado2 > lado1 && lado2 < lado3 ){
            cateto_adjacente = lado2;
        }
        if(lado3 < lado1 && lado3 > lado2 ){
            cateto_adjacente = lado3;
        }
        if(lado3 > lado1 && lado3 < lado1 ){
            cateto_adjacente = lado3;
        }
    }
    //APRESENTACAO NA TELA DOS RESULTADOS
    printf("A hipotenusa e: %d \n" , hipotenusa);
    printf("O cateto oposto e: %d \n" , cateto_oposto);
    printf("O cateto adjacente e: %d \n" , cateto_adjacente);
}
*/

