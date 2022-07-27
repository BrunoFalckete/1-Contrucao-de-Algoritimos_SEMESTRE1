//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//12/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*14- ALGORITMO QUE LEIA A,B E C E ENTREGUE O VALOR DE X1 e x2 SEGUINDO A EQUACAO DE 2 GRAU*/

#include <stdio.h>
//INCLUSAO DE BIBLIOTECA MATEMATICA
#include <math.h>

void main(){
    //DECLARACAO DE VARIAVEL
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    //DECLARACAO DA EQUACAO QUE SERA UTILIZADA E ENTRADA DOS VALORES
    printf("Equacao base -> 'ax^2 + bx + c =0'\n");
    printf("Entre com os valores:\n");
    printf("Entre com o valor de A: ");
        scanf("%f" , &a);
    printf("Entre com o valor de B: ");
        scanf("%f" , &b);
    printf("Entre com o valor de C: ");
        scanf("%f" , &c);

    //CONDICAO PARA VERIFICAR OS VALORES
    //SE A IGUAL A 0 E B DIFERENTE DE 0 A EQUACAO SE TORNA DE PRIMEIRO GRAU APRESENTANDO UMA MENSAGEM, MAS SE B FOR IGUAL A 0
    if (a == 0) {
        if (b != 0) {  
            printf("EQUACAO DE PRIMEIRO GRAU");
        }else{
            //SE C TAMBEM FOR 0 NAO TEM COMO CALCULAR POIS TODOS VALORES SAO 0 E APRESENTA O ERRO
            if (c == 0) {
	            printf("VALORES ZERADOS!\n");
            }
        }
        //SE NAO FOREM VALORES ERRADOS ENTRARA PARA O CALCULO
    }else{

    //CALCULO DE DELTA
    delta = (b*b) - (4*a*c);
    printf("DELTA vale: %.1f\n", delta);

    //CONDICAO PARA VERIFICAR SE O DELTA E MENOR QUE 0 SE FOR NAO TEM COMO CALCULAR A EQUACAO E APRESENTA O ERRO
    if (delta < 0) {
      printf("NAO EXISTE SOLUCAO");
      //SE FOR MAIOR QUE 0 SEGUE PARA OS CALCULOS
    }else{
        //CALCULO DE X1 E X2 COMO A EQUACAO
        x1 = ((-b) + sqrt(delta)) / (2*a);
        x2 = ((-b) - sqrt(delta)) / (2*a);
        //APRESENTACAO DO RESULTADO
        printf("O valor de x1: %.3f\nO valor de x2: %.3f" , x1 , x2);
    }
    }
}