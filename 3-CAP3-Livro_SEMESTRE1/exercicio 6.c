//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//19/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*6 faça um algoritmo que leia tres valores que reprsentam os lados de um triangulo. primeiramente, verifique 
se os lados podem formar um triangulo (a soma de dois lados não pode ser menor que o terceiro lado). caso 
possa formar um triangulo, indique se este é equilátero, isóceles ou escaleno.*/

#include <stdio.h>

void main(){
//DECLARACAO DAS VARIAVEIS
 int lado1;
 int lado2;
 int lado3;

    //ENTRADA DOS VALORES 
    printf("Entre com os lados do triangulo: \n");
    printf("Entre com o Primeiro lado: \n");
        scanf("%d" , &lado1);
    printf("Entre com o Segundo lado: \n");
        scanf("%d" , &lado2);
    printf("Entre com o Terceiro lado: \n");
        scanf("%d" , &lado3); 

    //VERIFICACAO SE OS VALORES FORMAM UM TRIANGULO 
    //SE NAO FORMAR
    if(lado1 + lado2 < lado3){
        printf("Os valores nao forma um triangulo");
    //SE FORMAR
    }else{
        //VERIFICACAO SE 2 LADOS SAO TODOS IGUAIS E UM DIFERENTE PARA UM ISOCELES
        if(lado1 == lado2 & lado1 != lado3){
            printf("TRIANGO ISOCELES");
        }
        //VERIFICACAO SE OS LADOS SAO TODOS IGUAIS PARA UM EQUILATERO
        if(lado1 == lado2 & lado1 == lado3 & lado2 == lado3){
            printf("TRIANGULO EQUILATERO");
        }
        //VERIFICACAO SE TODOS OS LADOS SAO DIFERENTES PARA UM ESCALENO
        if(lado1 != lado2 & lado1 != lado3 & lado2 != lado3){
            printf("TRIANGULO ESCALENO");
        }
    }
}