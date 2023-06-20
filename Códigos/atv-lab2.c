#include <stdio.h>
#include <math.h> 

int main(void) {
//questao 1
int nota1, nota2, nota3, nota4, média;
printf("Digite as quatro notas: ");
scanf("%i %i %i %i", &nota1, &nota2, &nota3, &nota4);
média= (nota1 + nota2 + nota3 + nota4)/ 4;
printf ("Média igual a: %i \n", média);
if (média>=7){
    printf ("APROVADO\n\n");
}else
printf("REPROVADO\n\n");
//questao 2
float n1,n2,média1;
printf("Digite as duas notas:");
scanf("%f %f", &n1, &n2);
média1=n1+n2/2;
printf("Média igual a: %.2f \n",média1);
if (média1>=0 && média1<3){
    printf("REPROVADO\n\n");
}if (média1>=3 && média1<7){
    printf("EXAME\n\n");
} if (média1>=7){
    printf("APROVADO\n\n");
}
//questao 3
float num1,num2;
printf("Digite dois valores:");
scanf("%f %f", &num1, &num2);
if (num1>num2){
  printf("O menor número foi: %.2f \n\n", num2);}
else 
  printf("O menor número foi: %.2f \n\n", num1);
//questao 4
float numero1, numero2, numero3, numero4;
printf("Digite quatro valores:");
scanf(" %f %f %f %f", &numero1,&numero2,&numero3,&numero4);
if (numero1>numero2>numero3>numero4){
  printf("O maior valor foi: %f \n\n", numero1);
}if (numero2>numero1>numero3>numero4){
  printf("O maior valor foi: %f \n\n", numero2);
}if (numero3>numero2>numero1>numero4){
  printf("O maior valor foi: %f \n\n", numero3);
}if (numero4>numero2>numero3>numero1){
  printf("O maior valor foi: %f \n\n", numero4);
}
//questao 5
float n3,n4,média,sub, mult,div;
char opção;
printf("Digite a opção de operação: \n 1-Média entre os números digitados \n 2-Diferença entre o maior pelo menor \n 3-Produto entre os números digitados\n 4-Divisão primeiro pelo segundo \n");
scanf("%c", &opção);
printf("Digite dois valores:");
scanf("%f %f", &n3, &n4);
switch (opção){
  case '1':
    média= (n3+n4)/2;
    printf("Média igual a: %.2f \n", média);
    break;
  case '2':
    if (n3>n4){
      sub= n3-n4;
      printf("Subtração igual a: %.2f\n", sub);
    }else 
      sub=n4-n3;
      printf("Subtração igual a: %.2f\n", sub);
    break;
  case '3':
    mult= n3*n4;
    printf("Multiplicação igual a: %.2f \n", mult);
    break;
  case '4':
  if (n4>0){
    div= n3/n4;
    printf("Divisão igual a: %.2f \n", div);
  }else 
    printf("Divisão inválida");
    break;
  default:
    printf("Opção inválida\n");
}
// questao 6
float num1, num2, elev, raiz1, raiz2, raiz3,raiz4;
char operação;
printf("Escolha a operação a ser realizada: \n 1-Potenciação do 1º pelo 2º \n 2-Raiz quadrada dos valores \n 3-Raiz cúbica dos valores \n");
scanf("%c", &operação);
printf("Digite dois valores:");
scanf("%f %f", &num1,&num2);
switch(operação) {
  case '1':
    elev=pow(num1,num2);
    printf("Potência igual a: %.2f \n", elev);
  case '2':
    if (num1<=0) {
      printf("ERRO");
    }else if (num2<=0){
      printf("ERRO");
    }else{
      raiz1=sqrt(num1);
      raiz2= sqrt(num2);
      printf("Raízes iguais a: %.2f \n %.2f\n", raiz1, raiz2);}
  case '3':
      if (num1<=0) {
      printf("ERRO");
    }else if (num2<=0){
      printf("ERRO");
    }else{
      raiz3=cbrt(num1);
      raiz4=cbrt(num2);
      printf("Raízes iguais a: %.2f \n %.2f\n", raiz3, raiz4);}
//questao 7
float salário, aumento;
printf("Digite o valor do seu salário R$");
scanf("%f", &salário);
if (salário<500){
  aumento=salário*1.3;
  printf("Novo salário igual a R$%.2f\n",aumento);
}else
printf("Esse valor não está apto ao aumento");
//questao 8
float salário, aumento;
printf("Digite o valor do seu salário R$");
scanf("%f", &salário);
if (salário<=300){
  aumento=salário*1.35;
  printf("Novo salário igual a R$%.2f\n", aumento);
}else{
  aumento=salário*1.15;
  printf("Novo salário igual a R$%.2f\n", aumento);}
//questao 9
float saldo,crétido;
printf("Digite o valor médio do seu último saldo R$");
scanf("%f", &saldo);
if (saldo>400){
  crétido= saldo*1.3;
  printf("Saldo médio: R$%.2f\nCrétido: R$%.2f\n",saldo,crétido);}
if (saldo<=400 && saldo>300){
  crétido= saldo*1.25;
  printf("Saldo médio: R$%.2f\nCrétido: R$%.2f\n",saldo,crétido);}
if (saldo<=300 && saldo>200){
  crétido= saldo*1.2;
  printf("Saldo médio: R$%.2f\nCrétido: R$%.2f\n",saldo,crétido);}
if (saldo>=200){
  crétido= saldo*1.1;
  printf("Saldo médio: R$%.2f\nCrétido: R$%.2f\n",saldo,crétido);}
else 
  printf("Saldo médio: R$%.2f\nCrétido não concedido",saldo);
// questao 10
float custo, preço1, preço2,preço3;
printf("Informe o valor do custo de fábrica R$");
scanf("%f", &custo);
preço1= custo*1.05;
preço2= custo*1.1*1.15;
preço3= custo*1.15*1.2;
if (custo <= 28000){
  printf("Custo ao consumidor R$%.2f \n\n", preço1);
}if (custo>=28000.01 && custo<=45000){
  printf("Custo ao consumidor R$%.2f \n\n", preço2);
}if (custo>45000){
  printf("Custo ao consumidor R$%.2f \n\n", preço3);}
// questao 11
int salário,aumento;
printf("Digite o valor do salário: R$");
scanf("%i", &salário);
if (salário<=300){
 aumento=salário*1.15;
 printf("Com um aumento de 15%% o salário passou a ser de R$%i\n",aumento);}
if (salário>300 && salário<600){
  aumento=salário*1.10;
  printf("Com um aumento de 10%% o salário passou a ser de R$%i\n",aumento);}
if (salário>=600 && salário<=900){
  aumento=salário*1.05;
  printf("Com um aumento de 5%% o salário passou a ser de R$%i\n",aumento);}
if (salário>900){
  printf("Com um aumento de 0%% o salário é o mesmo R$%i", salário);}
// questao 12
float salário, receber;
printf("Digite o valor do salário bruto R$");
scanf("%f", &salário);
if (salário<350){
  receber=(salário+100)-(salário*0.07);
  printf("O valor a receber é de R$%.2f", receber);}
if (salário>350 && salário<600){
  receber=(salário+75)-(salário*0.07);
  printf("O valor a receber é de R$%.2f", receber);}
if (salário>=600 && salário<=900){
  receber=(salário+50)-(salário*0.07);
  printf("O valor a receber é de R$%.2f", receber);}
if (salário>900){
  receber=(salário+35)-(salário*0.07);
  printf("O valor a receber é de R$%.2f", receber);}
// questao 13
float preço, novpreço;
printf("Digite o valor do produto R$");
scanf("%f", &preço);
if (preço<=50){
  novpreço=preço*1.05;}
else if (preço>50 && preço<=100){
  novpreço=preço*1.10;}
else if (preço>100){
  novpreço=preço*1.15;}
if(novpreço<=80){
  printf("Novo valor igual a R$%.2f\n Classificação: Barato\n",novpreço);}
else if (novpreço>80 && novpreço<=120){
  printf("Novo valor igual a R$%.2f\n Classificação: Normal\n",novpreço);}
else if (novpreço>120 && novpreço<=200){
  printf("Novo valor igual a R$%.2f\n Classificação: Caro\n",novpreço);}
else if (novpreço>200){
  printf("Novo valor igual a R$%.2f\n Classificação: Muito caro\n",novpreço);}
//questao 23
float código, qnt, preço, desc,novpreço;
printf("Digite o código do produto ");
scanf("%f", &código);
getchar();
printf("Digite a quantidade comprada ");
scanf("%f", &qnt);
if (código<=10){
  preço=10*qnt;
  printf("Preço unitário igual a R$10,00\nPreço total igual a R$%.2f\n",preço);}
else if (código>=11 && código<=20){
  preço=15*qnt;
  printf("Preço unitário igual a R$15,00\nPreço total igual a R$%.2f\n",preço);}
else if (código>=21 && código<=30){
  preço=20*qnt;
  printf("Preço unitário igual a R$20,00\nPreço total igual a R$%.2f\n",preço);}
else if (código>=31 && código<=40){
  preço=30*qnt;
  printf("Preço unitário igual a R$30,00\nPreço total igual a R$%.2f\n",preço);}
if(preço<=250){
  desc=preço*0.05;
  novpreço=preço*0.95;
  printf("Valor do desconto R$%.2f\nNovo preço R$%.2f\n",desc,novpreço);}
else if (preço>250 && preço<=500){
    desc=preço*0.1;
    novpreço=preço*0.9;
    printf("Valor do desconto R$%.2f\nNovo preço R$%.2f\n",desc,novpreço);}
else if (preço>500){
    desc=preço*0.15;
    novpreço=preço*0.85;
    printf("Valor do desconto R$%.2f\nNovo preço R$%.2f\n",desc,novpreço);}
return 0;
}
