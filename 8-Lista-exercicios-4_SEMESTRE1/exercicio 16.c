//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//12/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*16- ALGORITMO QUE DESCOBRE A MULTIPLICACAO DO NUMERO QUE O USUARIO COLOCOU(APARTIR DE 2)*/

#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEL
    int numero;
    int multiplicador;
    int multiplicando;
    int resultado_multiplicador;
    int resultado_multiplicando;
    int contador;

    //ENTRADA DE DADOS PELO USUARIO
    printf("Entre com o numero para verificacao: ");
        scanf("%d" , &numero);
    //LACO DE REPETICAO QUE INICIA EM 2 E VAI ATE O NUMERO
     for (contador = 2; contador <= numero; contador++){
        //ENTRADA DOS VALOES NAS VARIAVEIS DE ACORDO COM O PARAMETRO DEFINIDO
        resultado_multiplicador = numero % contador;
        resultado_multiplicando = numero / contador;
        //SE O RESTO DA DIVISAO FOR 0
        if(resultado_multiplicador == 0){
            //ALOCANDO OS VALORES NA VARIAVEL
            multiplicador = contador;
            multiplicando = resultado_multiplicando;
            //APRESENTACAO DO RESULTADO NA TELA
            printf("%d X %d = %d\n", multiplicador , multiplicando , numero); 
        }      
    }
}
