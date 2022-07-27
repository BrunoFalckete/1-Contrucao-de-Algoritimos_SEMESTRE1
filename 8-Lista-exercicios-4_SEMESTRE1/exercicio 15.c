//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//12/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*15- ALGORITMO QUE CALCULA A AREA DE UM QUADRADO OU RETANGULO*/

#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEL
    char escolha;
    float lado;
    float base;
    float altura;
    float area;

    //ENTRADA DO USUARIO QUAL FIGURA IRA CALCULAR A AREA
    printf("Escolha a figura que ira calcular a area: 'q' para QUADRADO ou 'r' para RETANGULO: ");
        scanf("%c" , &escolha);
    //CONDICAO DE ESCOLHA
    switch(escolha){
    //ESCOLHA Q, CALCULARA A AREA DO QUADRADO
    case 'q':
        //ENTRADA DOS VALORES
        printf("Entre com o Lado do QUADRADO: ");
            scanf("%f" , &lado);
            //CALCULO MATEMATICO
            area = lado * lado;
        //APRESENTACAO DO RESULTADO
        printf("A Area do QUADRADO e: %.f" , area);
    break;
    //ESCOLHA R, CALCULARA A ARE DO RETANGULO
    case 'r':
        //ENTRADA DOS VALORES
        printf("Entre com a Base do RETANGULO: ");
            scanf("%f" , &base);
        printf("Entre com a Altura do RETANGULO: ");
            scanf("%f" , &altura);
            //CALCULO MATEMATICO
            area = base * altura;
        //APRESENTACAO DO RESULTADO
        printf("A Area do RETANGULO e: %.f" , area);
    break;
    //ENTRADA ERRADA, APRESENTACAO DO ERRO
    default:
        printf("OPCAO ERRADA");
    break;
    }
}