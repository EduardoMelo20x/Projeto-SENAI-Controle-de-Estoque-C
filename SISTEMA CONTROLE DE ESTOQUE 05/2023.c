//PROJETO CONTROLE DE ESTOQUE

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main()

{
system("color 0B");
setlocale(LC_ALL,"Portuguese");

int opinicial, op1, op2, op3  ;
int defaultini;
int volt_op1_1, volt_op1_2, volt_op1_3, volt_op1_4, volt_op1_5, volt_op2_2, volt_op2_1, volt_op3, volt_op4, volt_op5, voltar5;
int escolhainserir, escolha;
int excluir_op1;
int zero=0;
int indit1, indit2, indit3, indit4, indit5;


//produtos, quantidade e preços do estoque de computadores e informatica

//OP1
char op1_op1_1_descricao[200]= "Notebook intel Pentium Gold 7505 / Windows 7 / Memoria RAM de 4GB expansivel até 16GB / SSD de 128GB / Tela Full HD de 15.6(1920x1080)WVA / Cor preto carbono";
int op1_op1_1_quantidade = 56;
float op1_op1_1_preco = 1897;

char op1_op1_2_descricao[200]= "Notebook 11ª geração intel Core i3-1115G4 / Windows 10 / Memoria RAM de 4GB expansivel até 16GB / SSD de 128GB / Tela Full HD de 15.6(1920x1080)WVA / Cor preto carbono";
int op1_op1_2_quantidade = 98;
float op1_op1_2_preco = 2848;

char op1_op1_3_descricao[200]= "Notebook 11ª geração intel Core i5-1135G7 / Windows 10 / Memoria RAM de 8GB expansivel até 16GB / SSD de 256GB / Tela Full HD de 15.6(1920x1080)WVA / Cor preto carbono";
int op1_op1_3_quantidade = 45;
float op1_op1_3_preco = 5147;

char op1_op1_4_descricao[200]= "Notebook 11ª geração intel Core i7-1165G7 / Windows 11 / Memoria RAM de 16GB / SSD de 512GB / Tela Full HD de 15.6(1920x1080)WVA / Cor preto carbono";
int op1_op1_4_quantidade = 45;
float op1_op1_4_preco = 5270;

char op1_op1_5_descricao[200]= "Notebook 11ª geração intel Core i9-1165G7 / Windows 11 / Memoria RAM de 16GB / SSD de 512GB / Tela Full HD de 15.6(1920x1080)WVA / Cor preto carbono";
int op1_op1_5_quantidade = 48;
float op1_op1_5_preco = 7350;

// produtos para inserir
char op1_op1_6_descricao[200]= " " ;
int op1_op1_6_quantidade = 0;
float op1_op1_6_preco = 0;

char op1_op1_7_descricao[200]= " " ;
int op1_op1_7_quantidade = 0 ;
float op1_op1_7_preco = 0;

char op1_op1_8_descricao[200]= " " ;
int op1_op1_8_quantidade = 0;
float op1_op1_8_preco = 0;

char op1_op1_9_descricao[200]= " " ;
int op1_op1_9_quantidade = 0;
float op1_op1_9_preco = 0;

char op1_op1_10_descricao[200]= " " ;
int op1_op1_10_quantidade = 0;
float op1_op1_10_preco = 0;

//OP2

char op1_op2_1_descricao[200]= " " ;
int op1_op2_1_quantidade = 0;
float op1_op2_1_preco = 0;

char op1_op2_2_descricao[200]= " " ;
int op1_op2_2_quantidade = 0;
float op1_op2_2_preco = 0;

char op1_op2_3_descricao[200]= " " ;
int op1_op2_3_quantidade = 0;
float op1_op2_3_preco = 0;

char op1_op2_4_descricao[200]= " " ;
int op1_op2_4_quantidade = 0;
float op1_op2_4_preco = 0;

char op1_op2_5_descricao[200]= " " ;
int op1_op2_5_quantidade = 0;
float op1_op2_5_preco = 0;

// produtos para inserir

char op1_op2_6_descricao[200]= " " ;
int op1_op2_6_quantidade = 0;
float op1_op2_6_preco = 0;

char op1_op2_7_descricao[200]= " " ;
int op1_op2_7_quantidade = 0;
float op1_op2_7_preco = 0;

char op1_op2_8_descricao[200]= " " ;
int op1_op2_8_quantidade = 0;
float op1_op2_8_preco = 0;

char op1_op2_9_descricao[200]= " " ;
int op1_op2_9_quantidade = 0;
float op1_op2_9_preco = 0;

char op1_op2_10_descricao[200]= " " ;
int op1_op2_10_quantidade = 0;
float op1_op2_10_preco = 0;

//OP3

char op1_op3_1_descricao[200]= " " ;
int op1_op3_1_quantidade = 0;
float op1_op3_1_preco = 0;

char op1_op3_2_descricao[200]= " " ;
int op1_op3_2_quantidade = 0;
float op1_op3_2_preco = 0;

char op1_op3_3_descricao[200]= " " ;
int op1_op3_3_quantidade = 0;
float op1_op3_3_preco = 0;

char op1_op3_4_descricao[200]= " " ;
int op1_op3_4_quantidade = 0;
float op1_op3_4_preco = 0;

char op1_op3_5_descricao[200]= " " ;
int op1_op3_5_quantidade = 0;
float op1_op3_5_preco = 0;

// produtos para inserir

char op1_op3_6_descricao[200]= " " ;
int op1_op3_6_quantidade = 0;
float op1_op3_6_preco = 0;

char op1_op3_7_descricao[200]= " " ;
int op1_op3_7_quantidade = 0;
float op1_op3_7_preco = 0;

char op1_op3_8_descricao[200]= " " ;
int op1_op3_8_quantidade = 0;
float op1_op3_8_preco = 0;

char op1_op3_9_descricao[200]= " " ;
int op1_op3_9_quantidade = 0;
float op1_op3_9_preco = 0;

char op1_op3_10_descricao[200]= " " ;
int op1_op3_10_quantidade = 0;
float op1_op3_10_preco = 0;

//OP4

char op1_op4_1_descricao[200]= " " ;
int op1_op4_1_quantidade = 0;
float op1_op4_1_preco = 0;

char op1_op4_2_descricao[200]= " " ;
int op1_op4_2_quantidade = 0;
float op1_op4_2_preco = 0;

char op1_op4_3_descricao[200]= " " ;
int op1_op4_3_quantidade = 0;
float op1_op4_3_preco = 0;

char op1_op4_4_descricao[200]= " " ;
int op1_op4_4_quantidade = 0;
float op1_op4_4_preco = 0;

char op1_op4_5_descricao[200]= " " ;
int op1_op4_5_quantidade = 0;
float op1_op4_5_preco = 0;

// produtos para inserir

char op1_op4_6_descricao[200]= " " ;
int op1_op4_6_quantidade = 0;
float op1_op4_6_preco = 0;

char op1_op4_7_descricao[200]= " " ;
int op1_op4_7_quantidade = 0;
float op1_op4_7_preco = 0;

char op1_op4_8_descricao[200]= " " ;
int op1_op4_8_quantidade = 0;
float op1_op4_8_preco = 0;

char op1_op4_9_descricao[200]= " " ;
int op1_op4_9_quantidade = 0;
float op1_op4_9_preco = 0;

char op1_op4_10_descricao[200]= " " ;
int op1_op4_10_quantidade = 0;
float op1_op4_10_preco = 0;

//OP5

char op1_op5_1_descricao[200]= " " ;
int op1_op5_1_quantidade = 0;
float op1_op5_1_preco = 0;

char op1_op5_2_descricao[200]= " " ;
int op1_op5_2_quantidade = 0;
float op1_op5_2_preco = 0;

char op1_op5_3_descricao[200]= " " ;
int op1_op5_3_quantidade = 0;
float op1_op5_3_preco = 0;

char op1_op5_4_descricao[200]= " " ;
int op1_op5_4_quantidade = 0;
float op1_op5_4_preco = 0;

char op1_op5_5_descricao[200]= " " ;
int op1_op5_5_quantidade = 0;
float op1_op5_5_preco = 0;

// produtos para inserir

char op1_op5_6_descricao[200]= " " ;
int op1_op5_6_quantidade = 0;
float op1_op5_6_preco = 0;

char op1_op5_7_descricao[200]= " " ;
int op1_op5_7_quantidade = 0;
float op1_op5_7_preco = 0;

char op1_op5_8_descricao[200]= " " ;
int op1_op5_8_quantidade = 0;
float op1_op5_8_preco = 0;

char op1_op5_9_descricao[200]= " " ;
int op1_op5_9_quantidade = 0;
float op1_op5_9_preco = 0;

char op1_op5_10_descricao[200]= " " ;
int op1_op5_10_quantidade = 0;
float op1_op5_10_preco = 0;






inicio://goto

system("cls");

printf("=======================================================================================================================\n");
printf("                                              CONTROLE DE ESTOQUE \n");
printf("=======================================================================================================================\n");
printf("\n");
printf(" Bem vindo ao controle de estoque de nosso loja! \n");
printf("\n");
printf(" Esse sistema possui todos os nossos produtos com quantidade, classificacao e localizacao de cada um deles. \n");
printf(" Insira o numero referente a opcao desejada para localizar o produto. \n");
printf("\n");
printf(" Se desejar voce pode encerrar o programa a qualquer momento escolhendo a opcao *ENCERRAR O PROGRAMA* \n");
printf("\n");
printf("=======================================================================================================================\n");
printf("\n");

printf(" OPCOES: \n\n");
printf(" 1 - VISUALIZAR PRODUTOS DA LOJA \n");
printf(" 2 - VISUALIZAR PEDIDOS ONLINE \n");
printf(" 3 - VISUALIZAR PRODUTOS EM FALTA \n");
printf("\n");
printf(" 4 - INSERIR OU EDITAR PRODUTOS DO ESTOQUE\n");
printf(" 5 - EXCLUIR PRODUTOS DO ESTOQUE\n");

printf("\n");
printf(" 0 - ENCERRAR O PROGRAMA \n\n");

printf("Digite a opcao digitada: ");
scanf("%d",&opinicial);


op1://goto


switch( opinicial )
{ //abertura do switch , opinicial

case 0:
goto finalcode;
break;

case 1: //opinicial

system("cls");
printf("=======================================================================================================================\n");
printf("                                                 PRODUTOS DA LOJA \n");
printf("=======================================================================================================================\n");
printf("\n");
printf("1 - NOTEBOOKS  \n");
printf("\n");
printf("2 - CELULARES  \n");
printf("\n");
printf("3 - AUDIO E SOM \n");
printf("\n");
printf("4 - SMARTWATCHES \n");
printf("\n");
printf("5 - ACESSORIOS ELETRONICOS \n");
printf("\n\n");
printf("10 - VOLTAR AO INICIO\n");
printf(" 0 - SAIR DO PROGRAMA \n\n");

printf("Digite a opcao desejada: ");
scanf("%d",&op1);

if(op1==10)
goto inicio;

if(op1==0)
goto finalcode;

op1_1:

switch(op1)
{//abertura do switch "op1"

case 1: //op1 - 1

system("cls");
printf("=======================================================================================================================\n");
printf("                                                     NOTEBOOKS  \n");
printf("=======================================================================================================================\n");
printf("\n");

printf(" Ordem das informacoes: NUMERACAO | PRODUTO | QUANTIDADE | PRECO  \n\n");


printf(" 1 - %s \n",op1_op1_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op1_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_1_preco);

printf(" 2 - %s \n",op1_op1_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op1_2_preco);

printf(" 3 - %s \n",op1_op1_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_3_preco);

printf(" 4 - %s \n",op1_op1_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_4_preco);

printf(" 5 - %s \n",op1_op1_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_5_preco);

printf(" 6 - %s \n",op1_op1_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_6_preco);

printf(" 7 - %s \n",op1_op1_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_7_preco);

printf(" 8 - %s \n",op1_op1_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op1_8_preco);

printf(" 9 - %s \n",op1_op1_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_9_preco);

printf(" 10 - %s \n",op1_op1_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op1_10_preco;


printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao menu anterior \n");
printf("Digite '0' para voltar ao inicio \n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");


printf("Digite: ");
scanf("%d",&volt_op1_1);

if(volt_op1_1==10)
goto op1;

if(volt_op1_1==0)
goto inicio;

if(volt_op1_1!=10 & volt_op1_1!=0)
goto finalcode;



break;//fechamento do case "op1 - 1"



case 2: //op1 - 2

system("cls");
printf("=======================================================================================================================\n");
printf("                                                       CELULARES  \n");
printf("=======================================================================================================================\n");

printf(" Ordem das informacoes: NUMERACAO | PRODUTO | QUANTIDADE | PRECO  \n\n");

printf(" 1 - %s \n",op1_op2_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op2_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_1_preco);

printf(" 2 - %s \n",op1_op2_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op2_2_preco);

printf(" 3 - %s \n",op1_op2_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_3_preco);

printf(" 4 - %s \n",op1_op2_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_4_preco);

printf(" 5 - %s \n",op1_op2_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_5_preco);

printf(" 6 - %s \n",op1_op2_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_6_preco);

printf(" 7 - %s \n",op1_op2_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_7_preco);

printf(" 8 - %s \n",op1_op2_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op2_8_preco);

printf(" 9 - %s \n",op1_op2_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_9_preco);

printf(" 10 - %s \n",op1_op2_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op2_10_preco;


printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao menu anterior \n");
printf("Digite '0' para voltar ao inicio \n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");


printf("Digite: ");
scanf("%d",&volt_op1_2);

if(volt_op1_2==10)
goto op1;

if(volt_op1_2==0)
goto inicio;

if(volt_op1_2!=10 & volt_op1_2!=0)
goto finalcode;

break;//fechamento case 2 "op1 - 2"


case 3: //op1 - 3

system("cls");
printf("=======================================================================================================================\n");
printf("                                                  AUDIO E SOM \n");
printf("=======================================================================================================================\n");

printf(" Ordem das informacoes: NUMERACAO | PRODUTO | QUANTIDADE | PRECO  \n\n");

printf(" 1 - %s \n",op1_op3_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op3_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_1_preco);

printf(" 2 - %s \n",op1_op3_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op3_2_preco);

printf(" 3 - %s \n",op1_op3_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_3_preco);

printf(" 4 - %s \n",op1_op3_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_4_preco);

printf(" 5 - %s \n",op1_op3_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_5_preco);

printf(" 6 - %s \n",op1_op3_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_6_preco);

printf(" 7 - %s \n",op1_op3_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_7_preco);

printf(" 8 - %s \n",op1_op3_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op3_8_preco);

printf(" 9 - %s \n",op1_op3_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_9_quantidade);
printf(" PREO: R$%f \n\n",op1_op3_9_preco);

printf(" 10 - %s \n",op1_op3_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op3_10_preco;


printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao menu anterior \n");
printf("Digite '0' para voltar ao inicio \n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");


printf("Digite: ");
scanf("%d",&volt_op1_3);

if(volt_op1_3==10)
goto op1;

if(volt_op1_3==0)
goto inicio;

if(volt_op1_3!=10 & volt_op1_3!=0)
goto finalcode;

break;//op1 - 3


case 4://op1 - 4

system("cls");
printf("=======================================================================================================================\n");
printf("                                                    SMARTWATCHES \n");
printf("=======================================================================================================================\n");

printf(" Ordem das informacoes: NUMERACAO | PRODUTO | QUANTIDADE | PRECO  \n\n");

printf(" 1 - %s \n",op1_op4_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op4_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_1_preco);

printf(" 2 - %s \n",op1_op4_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op4_2_preco);

printf(" 3 - %s \n",op1_op4_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_3_preco);

printf(" 4 - %s \n",op1_op4_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_4_preco);

printf(" 5 - %s \n",op1_op4_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_5_preco);

printf(" 6 - %s \n",op1_op4_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_6_preco);

printf(" 7 - %s \n",op1_op4_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_7_preco);

printf(" 8 - %s \n",op1_op4_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op4_8_preco);

printf(" 9 - %s \n",op1_op4_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_9_preco);

printf(" 10 - %s \n",op1_op4_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op4_10_preco;

printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao menu anterior \n");
printf("Digite '0' para voltar ao inicio \n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");


printf("Digite: ");
scanf("%d",&volt_op1_4);

if(volt_op1_4==10)
goto op1;

if(volt_op1_4==0)
goto inicio;

if(volt_op1_4!=10 & volt_op1_4!=0)
goto finalcode;

break;//op1 - 4

case 5://op1 - 5

system("cls");
printf("=======================================================================================================================\n");
printf("                                                 ACESSORIOS ELETRONICOS \n");
printf("=======================================================================================================================\n");

printf(" Ordem das informacoes: NUMERACAO | PRODUTO | QUANTIDADE | PRECO  \n\n");

printf(" 1 - %s \n",op1_op5_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op5_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_1_preco);

printf(" 2 - %s \n",op1_op5_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op5_2_preco);

printf(" 3 - %s \n",op1_op5_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_3_preco);

printf(" 4 - %s \n",op1_op5_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_4_preco);

printf(" 5 - %s \n",op1_op5_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_5_preco);

printf(" 6 - %s \n",op1_op5_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_6_preco);

printf(" 7 - %s \n",op1_op5_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_7_preco);

printf(" 8 - %s \n",op1_op5_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op5_8_preco);

printf(" 9 - %s \n",op1_op5_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_9_preco);

printf(" 10 - %s \n",op1_op5_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op5_10_preco;


printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao menu anterior \n");
printf("Digite '0' para voltar ao inicio \n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");


printf("Digite: ");
scanf("%d",&volt_op1_5);

if(volt_op1_5==10)
goto op1;

if(volt_op1_5==0)
goto inicio;

if(volt_op1_5!=10 & volt_op1_5!=0)
goto finalcode;


break;//op1 - 5


default:// op1
system("cls");
printf("Opcao invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);
if(defaultini==10)
goto inicio;

}//fechamento do switch "op1"

break;

op2:
case 2: //op2 - 1

system("cls");
printf("=======================================================================================================================\n");
printf("                                                   PEDIDOS ONLINE \n");
printf("=======================================================================================================================\n");
printf("\n\n");
printf(" 1 - PRODUTOS PARA RETIRADA \n");
printf(" 2 - PRODUTOS PARA ENTREGA \n\n");
printf("10 - VOLTAR AO INICIO\n");
printf(" 0 - ENCERRAR O PROGRAMA \n\n");

printf("Digite: ");
scanf("%d",&op2);

if(op2==0)
goto finalcode;

if(op2==10)
goto inicio;


switch(op2)
{
case 1:

system("cls");
printf("=======================================================================================================================\n");
printf("                                                   PRODUTOS PARA RETIRADA\n");
printf("=======================================================================================================================\n");
printf(" ORDEM DAS INFORMACOES: DATA E DADOS DO COMPRADOR | VALOR E DADOS DA COMPRA | PRODUTO \n\n");

printf("Data: 20/08/2020 \n");
printf(" Nome:  Eduardo Melo \n");
printf(" E-mail: eduardomelo@gmail.com \n");
printf(" CPF: 123456789 \n");
printf(" Numero: 41 99813653 \n");
printf("------------------------------------------------------------ \n");
printf(" Valor da compra: R$2.500,00 \n");
printf(" Metodo de pagamento: PIX \n");
printf("------------------------------------------------------------ \n");
printf("Produto: Redimi Note 11s \n");

printf("\n\n\n");

printf("Data: 10/02/2020 \n");
printf(" Nome:  Kaue Angelico \n");
printf(" E-mail: Kaueangelico@gmail.com \n");
printf(" CPF: 123456789 \n");
printf(" Numero: 41 90028922 \n");
printf("------------------------------------------------------------ \n");
printf(" Valor da compra: R$5.600,00 \n");
printf(" Metodo de pagamento: boleto\n");
printf("------------------------------------------------------------ \n");
printf("Produto: Iphone 11s \n");

printf("\n\n\n");

printf("Data: 12/05/2020 \n");
printf(" Nome:  Gabriel Garcia \n");
printf(" E-mail: Gabrielgarcia@gmail.com \n");
printf(" CPF: 123456789 \n");
printf(" Numero: 41 90028922 \n");
printf("------------------------------------------------------------ \n");
printf(" Valor da compra: R$6.200,00 \n");
printf(" Metodo de pagamento: Cartao de credito \n");
printf("------------------------------------------------------------ \n");
printf("Produto: Iphone X \n");

printf("\n\n\n");

printf("Data: 20/09/2020 \n");
printf(" Nome:  Mario Bros \n");
printf(" E-mail: nitendo123@gmail.com \n");
printf(" CPF: 123456789 \n");
printf(" Numero: 41 90028922 \n");
printf("------------------------------------------------------------ \n");
printf(" Valor da compra: R$2.500,00 \n");
printf(" Metodo de pagamento: PIX \n");
printf("------------------------------------------------------------ \n");
printf("Produto: Nitendo Switch \n");

printf("\n\n\n");

printf("Data: 03/06/2022\n");
printf(" Nome: Senhor Frederikisen  \n");
printf(" E-mail: casavoadora@gmail.com \n");
printf(" CEP: ceu\n");
printf(" Numero da residencia: 0");
printf(" CPF: 123456789\n");
printf(" Numero: 90028922 \n");
printf("------------------------------------------------------------ \n");
printf(" Valor da compra:R$20.000,00 \n");
printf(" Metodo de pagamento: Boleto \n");
printf("------------------------------------------------------------ \n");
printf("Produto: 10.000 baloes \n");

printf("\n\n\n");


printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao menu anterior \n");
printf("Digite '0' para voltar ao inicio \n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");


printf("Digite: ");
scanf("%d",&volt_op2_1);

if(volt_op2_1==10)
goto op2;

if(volt_op2_1==0)
goto inicio;

if(volt_op2_1!=10 & volt_op2_1!=0)
goto finalcode;

break;

case 2:

system("cls");
printf("=======================================================================================================================\n");
printf("                                                 PRODUTOS PARA ENTREGA \n ");
printf("=======================================================================================================================\n");
printf(" ORDEM DAS INFORMACOES: DATA E DADOS DO COMPRADOR | VALOR E DADOS DA COMPRA | PRODUTO \n\n");


printf("\n-------------------------------------------- PRODUTOS EM ROTA DE ENTREGA ------------------------------------------\n\n");

printf("Data: 03/06/2022\n");
printf(" Nome: Joaozinho da quebrada \n");
printf(" E-mail: joazinho@gmail.com \n");
printf(" CEP: 80900330\n");
printf(" Numero da residencia: 41");
printf(" CPF: 123456789\n");
printf(" Numero: 90028922 \n");
printf("------------------------------------------------------------ \n");
printf(" Valor da compra:R$500,00 \n");
printf(" Metodo de pagamento: Boleto \n");
printf("------------------------------------------------------------ \n");
printf("Produto: KIT GAMER EVOLUTION \n");

printf("\n\n\n");

printf("Data: 10/10/2010\n");
printf(" Nome: Ben Tenysson \n");
printf(" E-mail: alienX@gmail.com \n");
printf(" CEP: 80900330\n");
printf(" Numero da residencia: 10");
printf(" CPF: 123456789\n");
printf(" Numero: 90028922 \n");
printf("------------------------------------------------------------ \n");
printf(" Valor da compra:R$10.000,00 \n");
printf(" Metodo de pagamento: PIX \n");
printf("------------------------------------------------------------ \n");
printf("Produto: OMINITRIX \n");

printf("\n\n\n");




printf("----------------------------------------------- PRODUTOS A SER ENVIADOS -------------------------------------------\n\n");




printf("Data: 06/02/2020 \n");
printf(" Nome: Harry Potter \n");
printf(" E-mail: \n");
printf(" CEP: \n");
printf(" CPF: \n");
printf(" Numero: Rua dos alfineiros, 04 \n");
printf("------------------------------------------------------------ \n");
printf(" Valor da compra: 50 GALOES\n");
printf(" Metodo de pagamento: moedas\n");
printf("------------------------------------------------------------ \n");
printf(" Produto: VARINHA DE SALGUEIRO\n");
printf(" Metodo de entrega: CORUJA");

printf("\n\n\n");


printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao menu anterior \n");
printf("Digite '0' para voltar ao inicio \n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");


printf("Digite: ");
scanf("%d",&volt_op2_2);

if(volt_op2_2==10)
goto op2;

if(volt_op2_2==0)
goto inicio;

if(volt_op2_2!=10 & volt_op2_2!=0)
goto finalcode;

break;



default:
system("cls");
printf("Opcao invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);

if(defaultini==10)
goto op2;

} //switch op2
break;

op3:

case 3:

system("cls");
printf("=======================================================================================================================\n");
printf("                                                    PRODUTOS EM FALTA \n");
printf("=======================================================================================================================\n");
printf(" ORDEM DAS INFORMACOES: FORNECEDOR | DATA DA ULTIMA REMESSA | VALOR DA REMESSA | PRODUTO | DATA PREVISTA PARA A CHEGADA DA PROXIMA REMESSA \n\n");


printf(" Fornecedor: Xiomi\n");
printf(" Data ultima remessa: 20/09/2020\n");
printf(" Valor da remessa: R$10.000,00 \n");
printf(" Produto: celulares\n");
printf(" Data de chegada: 03/12/2020\n");
printf("------------------------------------------- \n\n");

printf(" Fornecedor: Nitendo\n");
printf(" Data ultima remessa: 20/09/2020\n");
printf(" Valor da remessa: R$5.000,00 \n");
printf(" Produto: games\n");
printf(" Data de chegada: 03/12/2020\n");
printf("------------------------------------------- \n\n");

printf(" Fornecedor: COCACOLA\n");
printf(" Data ultima remessa: 20/09/2020\n");
printf(" Valor da remessa: R$500,00 \n");
printf(" Produto: Refrigerante\n");
printf(" Data de chegada: 03/12/2020\n");
printf("------------------------------------------- \n\n");

printf(" Fornecedor: Apple\n");
printf(" Data ultima remessa: 20/09/2020\n");
printf(" Valor da remessa: R$10.000,00 \n");
printf(" Produto: Iphones \n");
printf(" Data de chegada: 03/12/2020\n");
printf("------------------------------------------- \n\n");





printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao menu anterior \n");
printf("Digite '0' para encerrar o programa \n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");


printf("Digite: ");
scanf("%d",&volt_op3);

if(volt_op3==10)
goto inicio;

if(volt_op3==0)
goto finalcode;

if(volt_op3!=10 & volt_op3!=0)
goto finalcode;

break;//OP3

op4://goto

case 4:

system("cls");
printf("=======================================================================================================================\n");
printf("                                              INSERIR OU EDITAR PRODUTOS SISTEMA  \n");
printf("=======================================================================================================================\n\n");
printf(" ESCOLHA A CATEGORIA DO PRODUTO. \n");
printf("\n");
printf("1 - NOTEBOOKS  \n");
printf("\n");
printf("2 - CELULARES \n");
printf("\n");
printf("3 - AUDIO E SOM \n");
printf("\n");
printf("4 - SMARTWATCHES \n");
printf("\n");
printf("5 - ACESSORIOS ELETRONICOS \n");
printf("\n\n");
printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao incio \n");
printf("Digite '0' para encerrar o programa \n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");


printf("Digite: ");
scanf("%d",&volt_op4);


if(volt_op4==10)
goto inicio;

if(volt_op4==0)
goto finalcode;


switch(volt_op4) //inicial
{
case 1: //op 1

system("cls");
printf("=======================================================================================================================\n");
printf("                                            INSERCAO DE PRODUTOS AO SISTEMA (NOTEBOOKS)\n");
printf("=======================================================================================================================\n");
printf("\n VOCE PODE INSERIR SOMENTE 5 PRODUTOS AO SISTEMA E DEPOIS DE INSERIDOS E POSSIVEL EDITA-LOS  \n");
printf(" VOCE PODE INSERIR PRODUTOS A OPCOES QUE ESTAO EM BRANCO OU EDITAR AS QUE JA ESTAO COM INFORMACOES \n\n");
printf(" VEJA AS SUAS OPCOES \n\n");

printf(" 1 - %s \n",op1_op1_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op1_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_1_preco);

printf(" 2 - %s \n",op1_op1_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op1_2_preco);

printf(" 3 - %s \n",op1_op1_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_3_preco);

printf(" 4 - %s \n",op1_op1_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_4_preco);

printf(" 5 - %s \n",op1_op1_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_5_preco);

printf(" 6 - %s \n",op1_op1_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_6_preco);

printf(" 7 - %s \n",op1_op1_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_7_preco);

printf(" 8 - %s \n",op1_op1_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op1_8_preco);

printf(" 9 - %s \n",op1_op1_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_9_preco);

printf(" 10 - %s \n",op1_op1_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op1_10_preco;

printf(" Insira a opcao desejada\n");
printf(" Ou digite '0' para voltar ao inicio \n\n");
printf(" Digite: ");
scanf("%d",&indit1);

if(indit1==0)
goto inicio;

switch(indit1)//notbooks
{
case 1:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ========== \n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_1_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_1_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_1_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 1

case 2:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ========== \n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_2_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_2_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_2_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 2

case 3:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ========== \n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_3_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_3_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_3_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 3

case 4:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ========== \n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_4_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_4_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_4_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 4

case 5:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ========== \n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_5_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_5_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_5_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 5

case 6:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_6_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_6_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_6_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 6

case 7:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_7_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_7_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_7_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 7

case 8:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_8_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_8_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_8_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 8

case 9:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_9_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_9_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_9_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 9

case 10:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op1_10_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op1_10_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op1_10_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//notbook 10

default:
system("cls");
printf("Opcao invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);
if(defaultini==10)
goto op4;
}//FECHAMENTO DO SWITCH OP 1

case 2:

system("cls");
printf("=======================================================================================================================\n");
printf("                                            INSERCAO DE PRODUTOS AO SISTEMA (CELULARES)\n");
printf("=======================================================================================================================\n");
printf("\n VOCE PODE INSERIR SOMENTE 5 PRODUTOS AO SISTEMA E DEPOIS DE INSERIDOS E POSSIVEL EDITA-LOS  \n");
printf(" VOCE PODE INSERIR PRODUTOS A OPCOES QUE ESTAO EM BRANCO OU EDITAR AS QUE JA ESTAO COM INFORMACOES \n\n");
printf(" VEJA AS SUAS OPCOES \n\n");

printf(" 1 - %s \n",op1_op2_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op2_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_1_preco);

printf(" 2 - %s \n",op1_op2_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op2_2_preco);

printf(" 3 - %s \n",op1_op2_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_3_preco);

printf(" 4 - %s \n",op1_op2_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_4_preco);

printf(" 5 - %s \n",op1_op2_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_5_preco);

printf(" 6 - %s \n",op1_op2_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_6_preco);

printf(" 7 - %s \n",op1_op2_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_7_preco);

printf(" 8 - %s \n",op1_op2_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op2_8_preco);

printf(" 9 - %s \n",op1_op2_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_9_preco);

printf(" 10 - %s \n",op1_op2_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op2_10_preco;

printf(" Insira a opcao desejada\n");
printf(" Ou digite '0' para voltar ao inicio \n\n");
printf(" Digite: ");
scanf("%d",&indit2);

if(indit2==0)
goto inicio;

switch(indit2)//notbooks
{
case 1:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_1_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_1_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_1_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 1

case 2:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_2_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_2_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_2_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 2

case 3:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_3_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_3_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_3_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 3

case 4:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_4_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_4_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_4_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  4

case 5:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_5_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_5_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_5_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  5

case 6:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_6_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_6_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_6_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  6

case 7:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_7_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_7_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_7_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  7

case 8:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_8_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_8_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_8_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  8

case 9:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_9_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_9_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_9_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  9

case 10:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op2_10_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op2_10_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op2_10_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  10

default:
system("cls");
printf("Opcao invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);
if(defaultini==10)
goto op4;
}//FECHAMENTO DO SWITCH OP 2

case 3:

system("cls");
printf("=======================================================================================================================\n");
printf("                                            INSERCAO DE PRODUTOS AO SISTEMA (AUDIO E SOM)\n");
printf("=======================================================================================================================\n");
printf("\n VOCE PODE INSERIR SOMENTE 5 PRODUTOS AO SISTEMA E DEPOIS DE INSERIDOS E POSSIVEL EDITA-LOS  \n");
printf(" VOCE PODE INSERIR PRODUTOS A OPCOES QUE ESTAO EM BRANCO OU EDITAR AS QUE JA ESTAO COM INFORMACOES \n\n");
printf(" VEJA AS SUAS OPCOES \n\n");

printf(" 1 - %s \n",op1_op3_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op3_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_1_preco);

printf(" 2 - %s \n",op1_op3_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op3_2_preco);

printf(" 3 - %s \n",op1_op3_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_3_preco);

printf(" 4 - %s \n",op1_op3_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_4_preco);

printf(" 5 - %s \n",op1_op3_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_5_preco);

printf(" 6 - %s \n",op1_op3_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_6_preco);

printf(" 7 - %s \n",op1_op3_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_7_preco);

printf(" 8 - %s \n",op1_op3_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op3_8_preco);

printf(" 9 - %s \n",op1_op3_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_9_preco);

printf(" 10 - %s \n",op1_op3_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op3_10_preco;

printf(" Insira a opcao desejada\n");
printf(" Ou digite '0' para voltar ao inicio \n\n");
printf(" Digite: ");
scanf("%d",&indit3);

if(indit3==0)
goto inicio;

switch(indit3)//notbooks
{
case 1:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_1_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_1_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_1_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 1

case 2:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_2_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_2_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_2_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 2

case 3:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_3_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_3_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_3_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 3

case 4:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_4_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_4_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_4_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  4

case 5:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_5_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_5_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_5_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  5

case 6:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_6_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_6_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_6_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  6

case 7:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_7_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_7_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_7_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  7

case 8:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_8_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_8_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_8_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  8

case 9:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_9_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_9_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_9_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  9

case 10:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op3_10_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op3_10_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op3_10_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  10

default:
system("cls");
printf("Opcao invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);
if(defaultini==10)
goto op4;
}//FECHAMENTO DO SWITCH OP 3

case 4:

system("cls");
printf("=======================================================================================================================\n");
printf("                                            INSERCAO DE PRODUTOS AO SISTEMA (SMARTWATCHES)\n");
printf("=======================================================================================================================\n");
printf("\n VOCE PODE INSERIR SOMENTE 5 PRODUTOS AO SISTEMA E DEPOIS DE INSERIDOS E POSSIVEL EDITA-LOS  \n");
printf(" VOCE PODE INSERIR PRODUTOS A OPCOES QUE ESTAO EM BRANCO OU EDITAR AS QUE JA ESTAO COM INFORMACOES \n\n");
printf(" VEJA AS SUAS OPCOES \n\n");

printf(" 1 - %s \n",op1_op4_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op4_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_1_preco);

printf(" 2 - %s \n",op1_op4_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op4_2_preco);

printf(" 3 - %s \n",op1_op4_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_3_preco);

printf(" 4 - %s \n",op1_op4_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_4_preco);

printf(" 5 - %s \n",op1_op4_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_5_preco);

printf(" 6 - %s \n",op1_op4_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_6_preco);

printf(" 7 - %s \n",op1_op4_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_7_preco);

printf(" 8 - %s \n",op1_op4_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op4_8_preco);

printf(" 9 - %s \n",op1_op4_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_9_preco);

printf(" 10 - %s \n",op1_op4_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op4_10_preco;

printf(" Insira a opcao desejada\n");
printf(" Ou digite '0' para voltar ao inicio \n\n");
printf(" Digite: ");
scanf("%d",&indit4);

if(indit4==0)
goto inicio;

switch(indit4)//notbooks
{
case 1:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op4_1_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_1_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_1_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 1

case 2:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op4_2_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_2_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_2_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 2

case 3:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op4_3_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_3_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_3_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 3

case 4:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op4_4_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_4_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_4_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  4

case 5:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op4_5_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_5_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_5_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  5

case 6:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op4_6_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_6_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_6_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  6

case 7:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op4_7_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_7_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_7_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  7

case 8:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");;
fflush(stdin);
gets(op1_op4_8_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_8_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_8_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  8

case 9:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op4_9_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_9_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_9_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  9

case 10:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op4_10_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op4_10_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op4_10_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  10

default:
system("cls");
printf("Opcao invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);
if(defaultini==10)
goto op4;
}//FECHAMENTO DO SWITCH OP 4

case 5:

system("cls");
printf("=======================================================================================================================\n");
printf("                                            INSERCAO DE PRODUTOS AO SISTEMA (ACESSORIOS ELETRONICOS)\n");
printf("=======================================================================================================================\n");
printf("\n VOCE PODE INSERIR SOMENTE 5 PRODUTOS AO SISTEMA E DEPOIS DE INSERIDOS E POSSIVEL EDITA-LOS  \n");
printf(" VOCE PODE INSERIR PRODUTOS A OPCOES QUE ESTAO EM BRANCO OU EDITAR AS QUE JA ESTAO COM INFORMACOES \n\n");
printf(" VEJA AS SUAS OPCOES \n\n");

printf(" 1 - %s \n",op1_op5_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op5_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_1_preco);

printf(" 2 - %s \n",op1_op5_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op5_2_preco);

printf(" 3 - %s \n",op1_op5_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_3_preco);

printf(" 4 - %s \n",op1_op5_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_4_preco);

printf(" 5 - %s \n",op1_op5_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_5_preco);

printf(" 6 - %s \n",op1_op5_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_6_preco);

printf(" 7 - %s \n",op1_op5_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_7_preco);

printf(" 8 - %s \n",op1_op5_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op5_8_preco);

printf(" 9 - %s \n",op1_op5_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_9_preco);

printf(" 10 - %s \n",op1_op5_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op5_10_preco;

printf(" Insira a opcao desejada\n");
printf(" Ou digite '0' para voltar ao inicio \n\n");
printf(" Digite: ");
scanf("%d",&indit5);

if(indit5==0)
goto inicio;

switch(indit5)//notbooks
{
case 1:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_1_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_1_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_1_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 1

case 2:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_2_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_2_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_2_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 2

case 3:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_3_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_3_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_3_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares 3

case 4:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_4_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_4_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_4_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  4

case 5:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_5_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_5_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_5_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  5

case 6:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_6_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_6_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_6_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  6

case 7:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_7_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_7_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_7_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  7

case 8:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_8_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_8_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_8_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  8

case 9:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_9_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_9_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_9_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  9

case 10:

system("cls");

printf("========== INSIRA AS INFORMACOES DO SEU PRODUTO ==========\n\n");
printf("Descricao do produto: ");
fflush(stdin);
gets(op1_op5_10_descricao);
printf("\n\n");
printf("Quantidade de unidades: ");
scanf("%d",&op1_op5_10_quantidade);
printf("\n\n");
printf("Preco: ");
scanf("%f",&op1_op5_10_preco);

system("cls");
printf("PRODUTO INSERIDO AO SISTEMA COM EXITO! \n\n");
printf("Gostaria de inserir mais um produto dessa categoria ao sistema? \n");
printf("Digite 1 para confirmar ou 2 para sair desse menu \n\n");

printf("Digite: ");
scanf("%d",&escolha);


if(escolha==2)
goto inicio;

if(escolha==1)
goto op4;

break;//celulares  10

default:
system("cls");
printf("Opção invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);
if(defaultini==10)
goto op4;
}//FECHAMENTO DO SWITCH OP 5





break;

default:
system("cls");
printf("Opcao invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);
if(defaultini==10)
goto op4;

}//fechamento dos cases de inserir produtos

break;//case 4

op5:

case 5://excluir

system("cls");
printf("=======================================================================================================================\n");
printf("                                               EXCLUIR ITENS DO SISTEMA \n");
printf("=======================================================================================================================\n\n");
printf(" ESCOLHA A CATEGORIA DO PRODUTO. \n");
printf("\n");
printf("1 - NOTEBOOKS  \n");
printf("\n");
printf("2 - CELULARES \n");
printf("\n");
printf("3 - AUDIO E SOM \n");
printf("\n");
printf("4 - SMARTWATCHES \n");
printf("\n");
printf("5 - ACESSORIOS ELETRONICOS \n");
printf("\n\n");
printf("10 - VOLTAR AO INICIO\n");
printf(" 0 - SAIR DO PROGRAMA \n\n");
printf("=======================================================================================================================\n");

printf("Digite '10' para voltar ao menu anterior\n");
printf("Digite '0' para encerrar o programa\n");
printf("Digite qualquer outro numero para encerrar o programa. \n\n");
printf("Digite: ");
scanf("%d",&volt_op5);


if(volt_op5==10)
goto inicio;

if(volt_op5==0)
goto finalcode;

switch(volt_op5)//excluir itens
{

case 1:

system("cls");
printf("=======================================================================================================================\n");
printf("                                             EXCLUSAO DE ITENS DO SISTEMA \n");
printf("=======================================================================================================================\n\n");
printf("Escolha qual produto voce deseja excluir do programa: \n\n");
printf("OS PRODUTOS QUE ESTAO EM BRANCO OU JA FORAM APAGADOS OU AINDA NAO LHE FOI INSERIDO NEHUMA INFORMACAO \n\n");

printf(" 1 - %s \n",op1_op1_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op1_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_1_preco);

printf(" 2 - %s \n",op1_op1_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op1_2_preco);

printf(" 3 - %s \n",op1_op1_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_3_preco);

printf(" 4 - %s \n",op1_op1_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_4_preco);

printf(" 5 - %s \n",op1_op1_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_5_preco);

printf(" 6 - %s \n",op1_op1_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_6_preco);

printf(" 7 - %s \n",op1_op1_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_7_preco);

printf(" 8 - %s \n",op1_op1_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op1_8_preco);

printf(" 9 - %s \n",op1_op1_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op1_9_preco);

printf(" 10 - %s \n",op1_op1_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op1_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op1_10_preco;


printf("Digite o item que voce deseja apagar do sistema\n ");
printf("Ou digite '0' para voltar ao menu inicial\n\n");
printf("Digite: ");
scanf("%d",&excluir_op1);

if(excluir_op1==0)
goto inicio;

if(excluir_op1==1)
{
strcpy(op1_op1_1_descricao,"ARQUIVO DELETADO");
op1_op1_1_quantidade = 0;
 op1_op1_1_preco = 0;
}

if(excluir_op1==2)
{
strcpy(op1_op1_2_descricao,"ARQUIVO DELETADO");
 op1_op1_2_quantidade = 0;
 op1_op1_2_preco = 0;
}

if(excluir_op1==3)
{
strcpy(op1_op1_3_descricao,"ARQUIVO DELETADO");
 op1_op1_3_quantidade = 0;
 op1_op1_3_preco = 0;
}

if(excluir_op1==4)
{
strcpy(op1_op1_4_descricao,"ARQUIVO DELETADO");
 op1_op1_4_quantidade = 0;
 op1_op1_4_preco = 0;
}

if(excluir_op1==5)
{
strcpy(op1_op1_5_descricao,"ARQUIVO DELETADO");
 op1_op1_5_quantidade = 0;
 op1_op1_5_preco = 0;
}

if(excluir_op1==6)
{
strcpy(op1_op1_6_descricao,"ARQUIVO DELETADO");
 op1_op1_6_quantidade = 0;
 op1_op1_6_preco = 0;
}

if(excluir_op1==7)
{
strcpy(op1_op1_7_descricao,"ARQUIVO DELETADO");
 op1_op1_7_quantidade = 0 ;
 op1_op1_7_preco = 0;
}

if(excluir_op1==8)
{
strcpy(op1_op1_8_descricao,"ARQUIVO DELETADO");
 op1_op1_8_quantidade = 0;
 op1_op1_8_preco = 0;
}

if(excluir_op1==9)
{
strcpy(op1_op1_9_descricao,"ARQUIVO DELETADO");
 op1_op1_9_quantidade = 0;
 op1_op1_9_preco = 0;
}

if(excluir_op1==10)
{
strcpy(op1_op1_10_descricao,"ARQUIVO DELETADO");
 op1_op1_10_quantidade = 0;
 op1_op1_10_preco = 0;
}
system("cls");
printf("ITEM EXLCUIDO COM EXITO!");
printf("\n\n");
printf("Digite '10' para voltar ao menu anterior ou '0' para voltar ao inicio do programa\n");
printf("Se nenhum desses dois valores for inserido o programa sera finalizado\n\n");
printf("Digite: ");
scanf("%d",&voltar5);


if(voltar5==10)
goto op5;

if(voltar5==0)
goto inicio;

if(voltar5!=10 & voltar5!=0)
goto finalcode;

break;//case 1

case 2:

system("cls");
printf("=======================================================================================================================\n");
printf("                                             EXCLUSAO DE ITENS DO SISTEMA \n");
printf("=======================================================================================================================\n\n");
printf("Escolha qual produto voce deseja excluir do programa: \n\n");
printf("OS PRODUTOS QUE ESTAO EM BRANCO OU JA FORAM APAGADOS OU AINDA NAO LHE FOI INSERIDO NEHUMA INFORMACAO \n\n");

printf(" 1 - %s \n",op1_op2_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op2_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_1_preco);

printf(" 2 - %s \n",op1_op2_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op2_2_preco);

printf(" 3 - %s \n",op1_op2_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_3_preco);

printf(" 4 - %s \n",op1_op2_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_4_preco);

printf(" 5 - %s \n",op1_op2_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_5_preco);

printf(" 6 - %s \n",op1_op2_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_6_preco);

printf(" 7 - %s \n",op1_op2_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_7_preco);

printf(" 8 - %s \n",op1_op2_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op2_8_preco);

printf(" 9 - %s \n",op1_op2_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op2_9_preco);

printf(" 10 - %s \n",op1_op2_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op2_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op2_10_preco;


printf("Digite o item que voce deseja apagar do sistema \n ");
printf("Ou digite 5'0' para voltar ao menu inicial\n\n");
printf("Digite: ");
scanf("%d",&excluir_op1);

if(excluir_op1==0)
goto inicio;

if(excluir_op1==1)
{
strcpy(op1_op2_1_descricao,"ARQUIVO DELETADO");
op1_op2_1_quantidade = 0;
 op1_op2_1_preco = 0;
}

if(excluir_op1==2)
{
strcpy(op1_op2_2_descricao,"ARQUIVO DELETADO");
 op1_op2_2_quantidade = 0;
 op1_op2_2_preco = 0;
}

if(excluir_op1==3)
{
strcpy(op1_op2_3_descricao,"ARQUIVO DELETADO");
 op1_op2_3_quantidade = 0;
 op1_op2_3_preco = 0;
}

if(excluir_op1==4)
{
strcpy(op1_op2_4_descricao,"ARQUIVO DELETADO");
 op1_op2_4_quantidade = 0;
 op1_op2_4_preco = 0;
}

if(excluir_op1==5)
{
strcpy(op1_op2_5_descricao,"ARQUIVO DELETADO");
 op1_op2_5_quantidade = 0;
 op1_op2_5_preco = 0;
}

if(excluir_op1==6)
{
strcpy(op1_op2_6_descricao,"ARQUIVO DELETADO");
 op1_op2_6_quantidade = 0;
 op1_op2_6_preco = 0;
}

if(excluir_op1==7)
{
strcpy(op1_op2_7_descricao,"ARQUIVO DELETADO");
 op1_op2_7_quantidade = 0 ;
 op1_op2_7_preco = 0;
}

if(excluir_op1==8)
{
strcpy(op1_op2_8_descricao,"ARQUIVO DELETADO");
 op1_op2_8_quantidade = 0;
 op1_op2_8_preco = 0;
}

if(excluir_op1==9)
{
strcpy(op1_op2_9_descricao,"ARQUIVO DELETADO");
 op1_op2_9_quantidade = 0;
 op1_op2_9_preco = 0;
}

if(excluir_op1==10)
{
strcpy(op1_op2_10_descricao,"ARQUIVO DELETADO");
 op1_op2_10_quantidade = 0;
 op1_op2_10_preco = 0;
}
system("cls");
printf("ITEM EXLCUIDO COM EXITO!");
printf("\n\n");
printf("Digite '10' para voltar ao menu anterior ou '0' para voltar ao inicio do programa\n");
printf("Se nenhum desses dois valores for inserido o programa sera finalizado\n\n");
printf("Digite: ");
scanf("%d",&voltar5);


if(voltar5==10)
goto op5;

if(voltar5==0)
goto inicio;

if(voltar5!=10 & voltar5!=0)
goto finalcode;

break;//case 2

case 3:

system("cls");
printf("=======================================================================================================================\n");
printf("                                             EXCLUSAO DE ITENS DO SISTEMA \n");
printf("=======================================================================================================================\n\n");
printf("Escolha qual produto voce deseja excluir do programa: \n\n");
printf("OS PRODUTOS QUE ESTAO EM BRANCO OU JA FORAM APAGADOS OU AINDA NAO LHE FOI INSERIDO NEHUMA INFORMACAO \n\n");

printf(" 1 - %s \n",op1_op3_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op3_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_1_preco);

printf(" 2 - %s \n",op1_op3_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_2_quantidade);
printf(" PREÇO: R$%d \n\n",op1_op3_2_preco);

printf(" 3 - %s \n",op1_op3_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_3_preco);

printf(" 4 - %s \n",op1_op3_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_4_preco);

printf(" 5 - %s \n",op1_op3_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_5_preco);

printf(" 6 - %s \n",op1_op3_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_6_preco);

printf(" 7 - %s \n",op1_op3_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_7_preco);

printf(" 8 - %s \n",op1_op3_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op3_8_preco);

printf(" 9 - %s \n",op1_op3_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op3_9_preco);

printf(" 10 - %s \n",op1_op3_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op3_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op3_10_preco;


printf("Digite o item que voce deseja apagar do sistema \n ");
printf("Ou digite '0' para voltar ao menu inicial\n\n");
printf("Digite: ");
scanf("%d",&excluir_op1);

if(excluir_op1==0)
goto inicio;

if(excluir_op1==1)
{
strcpy(op1_op3_1_descricao,"ARQUIVO DELETADO");
op1_op3_1_quantidade = 0;
 op1_op3_1_preco = 0;
}

if(excluir_op1==2)
{
strcpy(op1_op3_2_descricao,"ARQUIVO DELETADO");
 op1_op3_2_quantidade = 0;
 op1_op3_2_preco = 0;
}

if(excluir_op1==3)
{
strcpy(op1_op3_3_descricao,"ARQUIVO DELETADO");
 op1_op3_3_quantidade = 0;
 op1_op3_3_preco = 0;
}

if(excluir_op1==4)
{
strcpy(op1_op3_4_descricao,"ARQUIVO DELETADO");
 op1_op3_4_quantidade = 0;
 op1_op3_4_preco = 0;
}

if(excluir_op1==5)
{
strcpy(op1_op3_5_descricao,"ARQUIVO DELETADO");
 op1_op3_5_quantidade = 0;
 op1_op3_5_preco = 0;
}

if(excluir_op1==6)
{
strcpy(op1_op3_6_descricao,"ARQUIVO DELETADO");
 op1_op3_3_quantidade = 0;
 op1_op3_3_preco = 0;
}

if(excluir_op1==7)
{
strcpy(op1_op3_7_descricao,"ARQUIVO DELETADO");
 op1_op3_7_quantidade = 0 ;
 op1_op3_7_preco = 0;
}

if(excluir_op1==8)
{
strcpy(op1_op3_8_descricao,"ARQUIVO DELETADO");
 op1_op3_8_quantidade = 0;
 op1_op3_8_preco = 0;
}

if(excluir_op1==9)
{
strcpy(op1_op3_9_descricao,"ARQUIVO DELETADO");
 op1_op3_9_quantidade = 0;
 op1_op3_9_preco = 0;
}

if(excluir_op1==10)
{
strcpy(op1_op3_10_descricao,"ARQUIVO DELETADO");
 op1_op3_10_quantidade = 0;
 op1_op3_10_preco = 0;
}
system("cls");
printf("ITEM EXLCUIDO COM EXITO!");
printf("\n\n");
printf("Digite '10' para voltar ao menu anterior ou '0' para voltar ao inicio do programa\n");
printf("Se nenhum desses dois valores for inserido o programa sera finalizado\n\n");
printf("Digite: ");
scanf("%d",&voltar5);


if(voltar5==10)
goto op5;

if(voltar5==0)
goto inicio;

if(voltar5!=10 & voltar5!=0)
goto finalcode;

break;//case 3

case 4:

system("cls");
printf("=======================================================================================================================\n");
printf("                                             EXCLUSAO DE ITENS DO SISTEMA \n");
printf("=======================================================================================================================\n\n");
printf("Escolha qual produto voce deseja excluir do programa: \n\n");
printf("OS PRODUTOS QUE ESTAO EM BRANCO OU JA FORAM APAGADOS OU AINDA NAO LHE FOI INSERIDO NEHUMA INFORMACAO \n\n");

printf(" 1 - %s \n",op1_op4_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op4_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_1_preco);

printf(" 2 - %s \n",op1_op4_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op4_2_preco);

printf(" 3 - %s \n",op1_op4_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_3_preco);

printf(" 4 - %s \n",op1_op4_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_4_preco);

printf(" 5 - %s \n",op1_op4_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_5_preco);

printf(" 6 - %s \n",op1_op4_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_6_preco);

printf(" 7 - %s \n",op1_op4_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_7_preco);

printf(" 8 - %s \n",op1_op4_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op4_8_preco);

printf(" 9 - %s \n",op1_op4_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op4_9_preco);

printf(" 10 - %s \n",op1_op4_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op4_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op4_10_preco;


printf("Digite o item que voce deseja apagar do sistema \n ");
printf("Ou digite '0' para voltar ao menu inicial\n\n");
printf("Digite: ");
scanf("%d",&excluir_op1);

if(excluir_op1==0)
goto inicio;

if(excluir_op1==1)
{
strcpy(op1_op4_1_descricao,"ARQUIVO DELETADO");
op1_op4_1_quantidade = 0;
 op1_op4_1_preco = 0;
}

if(excluir_op1==2)
{
strcpy(op1_op4_2_descricao,"ARQUIVO DELETADO");
 op1_op4_2_quantidade = 0;
 op1_op4_2_preco = 0;
}

if(excluir_op1==3)
{
strcpy(op1_op4_3_descricao,"ARQUIVO DELETADO");
 op1_op4_3_quantidade = 0;
 op1_op4_3_preco = 0;
}

if(excluir_op1==4)
{
strcpy(op1_op4_4_descricao,"ARQUIVO DELETADO");
 op1_op4_4_quantidade = 0;
 op1_op4_4_preco = 0;
}

if(excluir_op1==5)
{
strcpy(op1_op4_5_descricao,"ARQUIVO DELETADO");
 op1_op4_5_quantidade = 0;
 op1_op4_5_preco = 0;
}

if(excluir_op1==6)
{
strcpy(op1_op4_6_descricao,"ARQUIVO DELETADO");
 op1_op4_6_quantidade = 0;
 op1_op4_6_preco = 0;
}

if(excluir_op1==7)
{
strcpy(op1_op4_7_descricao,"ARQUIVO DELETADO");
 op1_op4_7_quantidade = 0 ;
 op1_op4_7_preco = 0;
}

if(excluir_op1==8)
{
strcpy(op1_op4_8_descricao,"ARQUIVO DELETADO");
 op1_op4_8_quantidade = 0;
 op1_op4_8_preco = 0;
}

if(excluir_op1==9)
{
strcpy(op1_op4_9_descricao,"ARQUIVO DELETADO");
 op1_op4_9_quantidade = 0;
 op1_op4_9_preco = 0;
}

if(excluir_op1==10)
{
strcpy(op1_op4_10_descricao,"ARQUIVO DELETADO");
 op1_op4_10_quantidade = 0;
 op1_op4_10_preco = 0;
}
system("cls");
printf("ITEM EXLCUIDO COM EXITO!");
printf("\n\n");
printf("Digite '10' para voltar ao menu anterior ou '0' para voltar ao inicio do programa\n");
printf("Se nenhum desses dois valores for inserido o programa sera finalizado\n\n");
printf("Digite: ");
scanf("%d",&voltar5);


if(voltar5==10)
goto op5;

if(voltar5==0)
goto inicio;

if(voltar5!=10 & voltar5!=0)
goto finalcode;



break;//case 4

case 5:

system("cls");
printf("=======================================================================================================================\n");
printf("                                             EXCLUSAO DE ITENS DO SISTEMA \n");
printf("=======================================================================================================================\n\n");
printf("Escolha qual produto voce deseja excluir do programa: \n\n");
printf("OS PRODUTOS QUE ESTAO EM BRANCO OU JA FORAM APAGADOS OU AINDA NAO LHE FOI INSERIDO NEHUMA INFORMACAO \n\n");

printf(" 1 - %s \n",op1_op5_1_descricao);
printf(" QUANTIDADE: %d \n",op1_op5_1_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_1_preco);

printf(" 2 - %s \n",op1_op5_2_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_2_quantidade);
printf(" PRECO: R$%d \n\n",op1_op5_2_preco);

printf(" 3 - %s \n",op1_op5_3_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_3_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_3_preco);

printf(" 4 - %s \n",op1_op5_4_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_4_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_4_preco);

printf(" 5 - %s \n",op1_op5_5_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_5_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_5_preco);

printf(" 6 - %s \n",op1_op5_6_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_6_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_6_preco);

printf(" 7 - %s \n",op1_op5_7_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_7_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_7_preco);

printf(" 8 - %s \n",op1_op5_8_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_8_quantidade );
printf(" PRECO: R$%f \n\n",op1_op5_8_preco);

printf(" 9 - %s \n",op1_op5_9_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_9_quantidade);
printf(" PRECO: R$%f \n\n",op1_op5_9_preco);

printf(" 10 - %s \n",op1_op5_10_descricao);
printf(" QUANTIDADE DE ESTOQUE: %d \n",op1_op5_10_quantidade);
printf(" PRECO: R$%f \n\n"),op1_op5_10_preco;


printf("Digite o item que voce deseja apagar do sistema \n ");
printf("Ou digite '0' para voltar ao menu inicial\n\n");
printf("Digite: ");
scanf("%d",&excluir_op1);

if(excluir_op1==0)
goto inicio;

if(excluir_op1==1)
{
strcpy(op1_op5_1_descricao,"ARQUIVO DELETADO");
op1_op5_1_quantidade = 0;
 op1_op5_1_preco = 0;
}

if(excluir_op1==2)
{
strcpy(op1_op5_2_descricao,"ARQUIVO DELETADO");
 op1_op5_2_quantidade = 0;
 op1_op5_2_preco = 0;
}

if(excluir_op1==3)
{
strcpy(op1_op5_3_descricao,"ARQUIVO DELETADO");
 op1_op5_3_quantidade = 0;
 op1_op5_3_preco = 0;
}

if(excluir_op1==4)
{
strcpy(op1_op5_4_descricao,"ARQUIVO DELETADO");
 op1_op5_4_quantidade = 0;
 op1_op5_4_preco = 0;
}

if(excluir_op1==5)
{
strcpy(op1_op5_5_descricao,"ARQUIVO DELETADO");
 op1_op5_5_quantidade = 0;
 op1_op5_5_preco = 0;
}

if(excluir_op1==6)
{
strcpy(op1_op5_6_descricao,"ARQUIVO DELETADO");
 op1_op5_6_quantidade = 0;
 op1_op5_6_preco = 0;
}

if(excluir_op1==7)
{
strcpy(op1_op5_7_descricao,"ARQUIVO DELETADO");
 op1_op5_7_quantidade = 0 ;
 op1_op5_7_preco = 0;
}

if(excluir_op1==8)
{
strcpy(op1_op5_8_descricao,"ARQUIVO DELETADO");
 op1_op5_8_quantidade = 0;
 op1_op5_8_preco = 0;
}

if(excluir_op1==9)
{
strcpy(op1_op5_9_descricao,"ARQUIVO DELETADO");
 op1_op5_9_quantidade = 0;
 op1_op5_9_preco = 0;
}

if(excluir_op1==10)
{
strcpy(op1_op5_10_descricao,"ARQUIVO DELETADO");
 op1_op5_10_quantidade = 0;
 op1_op5_10_preco = 0;
}
system("cls");
printf("ITEM EXLCUIDO COM EXITO!");
printf("\n\n");
printf("Digite '10' para voltar ao menu anterior ou '0' para voltar ao inicio do programa\n");
printf("Se nenhum desses dois valores for inserido o programa sera finalizado\n\n");
printf("Digite: ");
scanf("%d",&voltar5);


if(voltar5==10)
goto op5;

if(voltar5==0)
goto inicio;

if(voltar5!=10 & voltar5!=0)
goto finalcode;


break;//case 5













default:// excluir OP5
system("cls");
printf("Opção invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);
if(defaultini==10)
goto op5;
}//fechamento da função excluir itens

if(volt_op5==10)
goto op5;

if(volt_op5==0)
goto inicio;

if(volt_op5!=10 & volt_op5!=0)
goto finalcode;

break;

case 6://editar







break;

default:// opinicial
system("cls");
printf("Opção invalida!  \n\n");
printf("digite '10' para tentar novamente ou qualquer outro numero para encerrar o programa.\n\n");
printf("digite: ");
scanf("%d",&defaultini);
if(defaultini==10)
goto inicio;

}//fechamento do switch , opinicial



finalcode:

printf("\n");
system("pause");
return(0);
}
