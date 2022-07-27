//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//12/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*12- ALGORITMO QUE LEIA O VALOR DA GASOLINA E DO ALCOOL E DIGA QUAL O MAIS VANTAJOSO PARA ABASTECER*/

#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEIS
    float valor_alcool;
    float valor_gasolina;
    float valor_pago;
    float resultado;
    float litros;
    char escolha;

    //ENTRADA DA ESCOLHA DO USUARIO
    printf("Seu carro e FLEX ???\nDigite 's' para SIM ou 'n' para NAO: ");
        scanf("%c" , &escolha);

    //CONDICAO DE ESCOLHA
    switch (escolha){
    //ESCOLHA S, SE O CARRO FOR FLEX
    case 's':
        // ENTRADA COM OS VALORES PELO USUARIO
        printf("Entre com os valores dos combustiveis para calcular o mais vantajoso \n");
        printf("Entre com o valor do litro da GASOLINA: R$ ");
            scanf("%f" , &valor_gasolina);
        printf("Entre com o valor do litro do ALCOOL: R$ ");
            scanf("%f" , &valor_alcool);
        printf("Entre com quantos reais ira colocar: R$ ");
            scanf("%f" , &valor_pago);
        //CALCULO PARA OBTER O MAIS VANTAJOSO
        resultado = valor_gasolina / valor_alcool;
        //CONDICAO SE O CALCULO FOR MENOR QUE 0.7 PARAMETRO DO EXERCICIO, MOSTRARA O MAIS VANTAJOSO  
        if(resultado <= 0.7){
            printf("Abastecer com o GASOLINA e mais vantajoso !\n");
            //CALCULO DE LITRAGEM
            litros = valor_pago / valor_gasolina;
            //APRESENTACAO NA TELA DOS VALORES
            printf("Com R$ %.2f voce colocara %.2fL de GASOLINA a R$ %.2f", valor_pago , litros , valor_gasolina);
        }else{
            //SE NAO FOR MENOR QUE 0.7 MOSTRARA A OUTRA OPCAO DE COMBSTIVEL COMO MAIS VIAVEL
            printf("Abastecer com o ALCOOL e mais vantajoso !\n");
            //CALCULO DE LITRAGEM
            litros = valor_pago / valor_alcool;
            //APRESENTACAO NA TELA DOS VALORES
            printf("Com R$ %.2f voce colocara %.2f L de ALCOOL a R$ %.2f", valor_pago , litros , valor_alcool);
        }
    break;
    //ESCOLHA 'N', O CARRO NAO E FLEX
    case 'n':
        //MENSAGEM MOTIVACIONAL
        printf("BOA SORTE COM A GASOLINA \n");
        //ENTRADA DOS DADOS DO COMBUSTIVEL
        printf("Entre com o valor do litro da GASOLINA: R$ ");
            scanf("%f" , &valor_gasolina);
        printf("Entre com quantos reais ira colocar: R$ ");
            scanf("%f" , &valor_pago);
        //CALCULO DA LITRAGEM
        litros = valor_pago / valor_gasolina;
        //APRESENTACAO NA TELA DOS VALORES
        printf("Com R$ %.2f voce colocara %.2fL de GASOLINA a R$ %.2f", valor_pago , litros , valor_gasolina);
    break;
    //CASO NAO ESCOLHER AS OPCOES CERTAS, MENSAGEM DE ERRO
    default:
        printf("OPCAO INVALIDA !!");
    break;
    }   
}