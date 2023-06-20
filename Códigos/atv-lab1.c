#include <stdio.h>
#include <math.h>

int main(void) {
//questão1
  int sub1,sub2, subtração;
  printf("Digite o primeiro número ");
  scanf("%d",&sub1);
  printf("Digite o segundo número ");
  scanf("%d",&sub2);
  subtração= sub1-sub2;
  printf("Resultado igual a = %d\n\n", subtração);
//questao2
  int mult1,mult2,mult3, multiplicação;
  printf("Digite um número a ser multiplicado ");
  scanf("%d",&mult1);
   printf("Digite um segundo número a ser multiplicado ");
  scanf("%d",&mult2);
   printf("Digite um terceiro número a ser multiplicado ");
  scanf("%d",&mult3);
  multiplicação= mult1*mult2*mult3;
  printf("Resultado da multipliccação igual a = %d\n\n", multiplicação);
//questao3
 float div1,div2, divisão;
 printf("Digite o valor do dividendo ");
 scanf("%f", &div1);
 printf("Digite o valor do divisor ");
 scanf("%f", &div2);
 if(div2 != 0)
 {
   divisão= div1/div2;
  printf("Resultado da divisão igual a = %.2f\n\n", divisão);
 }
 if(div2 == 0)
 {
   printf("Divisão inválida\n\n");
 }
//questao 4
 float med1,med2,média;
 printf("Digite o valor da 1ª nota ");
 scanf("%f", &med1);
 printf("Digite o valor da 2ª nota ");
 scanf("%f", &med2);
 média = (med1*2 + med2*3)/5;
 printf("Média ponderada das notas igual a = %.2f\n\n", média);
//questao 5
 float prod1,desconto;
 printf("Digite o valor do produto R$");
 scanf("%f", &prod1);
 desconto= prod1*0.9;
 printf("Valor do produto com desconto R$%.2f\n\n",desconto);
//questao 6
  int fix1,vend2,comiss, saláriof;
  printf("Digite o valor do salário fixo R$");
  scanf("%d", &fix1);
  printf("Digite a valor das vendas R$");
  scanf("%d", &vend2);
  comiss= vend2*0.4;
  printf("Valor das comissões R$%d\n", comiss);
  saláriof= comiss+fix1;
  printf("Salário final igual a R$%d\n\n", saláriof);
//questao 7
  float peso0, peso1,peso2;
  printf("Digite seu peso atual ");
  scanf("%f", &peso0);
  peso1=peso0*1.15;
  printf("Seu peso passará a ser: %.2f\n", peso1);
  peso2= peso0 - (peso0*0.2);
  printf("Seu peso passará a ser: %.2f\n\n", peso2);
// questao 14
  int nasci1,atual2,anos3,meses4,dias5,semanas6;
  printf("Digite o ano em que você nasceu ");
  scanf("%i", &nasci1);
  printf("Digite o ano atual ");
  scanf("%i", &atual2);
  anos3= atual2 - nasci1;
  meses4= anos3*12;
  dias5= meses4*365;
  semanas6= anos3*52;
  printf ("Sua idade em anos: %i\n", anos3);
 printf ("Sua idade em meses: %i\n", meses4);
  printf ("Sua idade em dias: %i\n", dias5);
  printf ("Sua idade em semanas: %i\n\n", semanas6);
// questao 15
  float salário1, conta1, conta2, resto3;
  printf("Digite o valor do seu salário R$");
  scanf("%f", &salário1);
  printf("Digite o valor da 1ª conta a pagar R$");
  scanf("%f", &conta1);
  printf("Digite o valor da 2ª conta a pagar R$");
  scanf("%f", &conta2);
  resto3=salário1 - (conta1*1.02)-(conta2*1.02);
  printf("Valor restante do salário igual a R$%.2f\n\n", resto3);
// questao 16
  float cat1, cat2, hip3;
  printf("Digite o valor do 1º cateto:");
  scanf("%f", &cat1);
  printf("Digite o valor do 2º cateto:");
  scanf("%f", &cat2);
  hip3= sqrt(pow(cat1,2)+ pow(cat2,2));
  printf("Valor da hipotenusa: %.2f\n\n",hip3);
//questao 17
  float raio1,compri2,área3,volum4;
  printf("Digite o valor do raio:");
  scanf("%f", &raio1);
  compri2= (2)*(3.14)*(raio1);
  área3= (3.14)*pow(raio1,2);
  volum4 = ((0.75)*(3.14)*pow(raio1,3));
  printf("Comprimento da circunferência: %.2f\n", compri2);
  printf("Área da circunferência: %.2f\n", área3);
  printf("Volume da circunferência: %.2f\n\n", volum4);
//questao 18
  float celcius1, fahrenheit2;
  printf("Digite a temperatura em Celcius: ");
  scanf("%f", &celcius1);
  fahrenheit2= (180*(celcius1+32))/100;
  printf ("Temperatura em Fahrenheit é: %.2f\n\n",fahrenheit2);
//questao 19
float comodo1, alt2, larg3,luz4;
printf("Escreva as medidas do 1º cômodo:");
scanf("%f %f", &alt2, &larg3);
comodo1=alt2*larg3;
luz4=comodo1*18;
printf("A potência de luz utilizada será de:%.2f\n",luz4);
 return 0;
}
