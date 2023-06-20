#include <stdio.h>
#include <math.h>

int main(void) {
// questao 1
double a,b,c,delta,x1,x2;
printf("Escreva o valor de a: ");
scanf("%lf", &a);
if (a==0)
{
  printf( "Esse valor não se aplica a equação de 2º grau");
}
else 
{
  printf("Escreva um valor para b: ");
  scanf("%lf", &b);
  printf("Escreva o valor de c: ");
  scanf("%lf", &c);
  delta= pow(b,2) -(4*a*c);
  if (delta<0)
  {
   printf("Não é possível tira raiz desse valor \n \n");
  }
  else if (delta==0)
  {
    x1= (-b + sqrt(delta))/(2*a);
    printf("Há somente 1 valor de x %.2lf\n\n",x1);
  }
  else
  {
  x2= (-b - sqrt(delta))/(2*a);
  printf("x1= %.2lf \n", x1);
  printf ("x2= %.2lf\n \n", x2);
  }
}
//questao 2
float num1,num2,soma;
printf("Digite o 1º número: ");
scanf("%f", &num1);
printf("Digite o 2º número: ");
scanf("%f", &num2);
soma= num1+num2;
if (soma>10)
{
  printf("A soma dos números é: %.2f\n\n", soma);
}
else
{
  printf("Os números digitados foram: %.1f e %.1f \n\n", num1, num2);
}
//questao 3
int idade;
printf("Informe sua idade: ");
scanf("%i", &idade);
if (idade<5)
{
  printf("Não se encaixa as caterorias \n\n");
}
if (idade>=5 && idade<=7)
{
  printf("Categoria: Infantil \n\n");
}
if(idade>=8 && idade<=10)
{
  printf("Categoria: Juvenil \n\n");
}
if (idade>=11 && idade<=15)
{
  printf("Categoria: Adolescente \n\n");
}
if (idade>=16 && idade<=30)
{
  printf("Categoria: Adulto \n\n");
}
if (idade>30)
{
  printf("Categoria: Sênior \n\n");
}
//questao 4
int ano;
printf("Digite o ano em que você nasceu: ");
scanf("%i", &ano);
if (ano%4==0 && ano%400==0)
{
  printf("%i foi um ano bissexto \n\n", ano);
}  
else if (ano%100==0)
{
  printf("%i não foi um ano bissexto \n\n",ano);
}
else 
{
  printf("%i não foi um ano bissexto \n\n",ano);
}
// questao 5
int salário, prestação, empréstimo; 
printf("Informe o valor do salário: ");
scanf("%i", &salário);
printf("informe a valor da prestação: ");
scanf("%i", &prestação);
empréstimo= (salário*1.3);
if (prestação <= empréstimo)
{
  printf("Empréstimo concedido \n\n");
}
else
{
  printf("Empréstimo não concedido \n\n");
}
//questao 6
float custo, preço1, preço2,preço3;
printf("Informe o valor do custo de fábrica R$");
scanf("%f", &custo);
preço1= custo*1.05;
preço2= custo*1.1*1.15;
preço3= custo*1.15*1.2;
if (custo <= 28000)
{
  printf("Custo ao consumidor R$%.2f \n\n", preço1);
}
if (custo>=28000.01 && custo<=45000)
{
  printf("Custo ao consumidor R$%.2f \n\n", preço2);
}
if (custo>45000)
{
  printf("Custo ao consumidor R$%.2f \n\n", preço3);
}
// questao 7 
int idade1;
printf("Informe sua idade: ");
scanf("%i", &idade1);
if (idade1<16)
{
  printf("Classe eleitoral: não eleitor \n\n");
}
if (idade>=18 && idade<=65)
{
  printf("Classe eleitoral: eleitor obrigatório \n\n");
}
if (idade>=16 && idade<18 && idade>65)
{
  printf("Classe eleitoral: eleitor facultativo \n\n");
}
//questao 8
float n1, n2, result1, result2;
printf("Digite um número: ");
scanf("%f", &n1);
printf("Digite um segundo número: ");
if (n1>n2){
  if (n1>0){
    result1 = sqrt(n1);
    result2 = pow(n2,2);
    printf("A raiz quadrada do maior número é igual a:%2.f\n",result1);
    printf("O quadrdao do menor número é igual a:%.2f", result2);
  }
  else {
    result2= pow(n2,2);
    printf("O maior número não é real, valor inválido");
    printf("O quadrdao do menor número é igual a:%.2f", result2);
  }
}
else{
  if (n2>=0){
    result1= sqrt(n2);
    result2= pow(n1,2);
    printf("A raiz quadrada do maior número é igual a:%2.f\n",result1);
    printf("O quadrdao do menor número é igual a:%.2f", result2);
  }
  else{
    result2= pow(n1,2);
    printf("O maior número não é real, valor inválido");
    printf("O quadrdao do menor número é igual a:%.2f", result2);
  }
}
//questao 9
int número1, número2, resultado1, resultado2, resultado3;
printf("Digite o 1º número: ");
scanf("%i", &número1);
printf("Digite o 2º número: ");
scanf("%i", &número2);
resultado1= número1 + número2;
if (resultado1>5 && resultado1<=10)
{
  resultado2= resultado1 + 5;
  printf("Resultado igual a: %i \n\n", resultado2);
}
else
{
  resultado3= resultado1 - 3;
  printf("Resultado igual a: %i \n\n", resultado3);
}
questao 10
double x, y;
printf("Digite o valor de x: ");
scanf("%lf", &x);
if (x<= 1) {
  printf("O valor de y é igual a= 1 \n\n");
}
else if (x>1 && x<=2){
  printf("O valor de y é igual a= 2\n\n");
}
else if (x>2 && x<=3){
  printf("O valor de y é igual a= %lf\n\n", pow(x,2));
}
else if (x>3){
  printf("O valor de y é igual a= %lf\n\n", pow(x,3));
}
else {}
// questao 11
char nome [50];
char sexo;
int idad;
printf("Digite seu nome:");
scanf("%s", nome);
printf("Digite sua idade:");
scanf("%i", &idad);
getchar();
printf("Digite seu sexo:");
scanf("%c", &sexo);
switch (sexo){
  case 'f':
  if(idad<25){
    printf("%s ACEITA\n\n", nome);
  }else if (idad>=25){
    printf("%s %i NÃO ACEITA\n\n", nome, idad);
  }
  break;
    case 'F':
  if(idad<25){
    printf("%s ACEITA\n\n", nome);
  }else if (idad>=25){
    printf("%s %i NÃO ACEITA\n\n", nome, idad);
  }
  break;
  default:
  printf("%s %i NÃO ACEITA\n\n", nome, idad);
}
//questao 12
char Opção;
float salario, novsalário;
printf("Valor do salário atual R$");
scanf("%f", &salario);
getchar();
printf ("Opção: A, B ou C: ");
scanf("%c", &Opção);
switch (Opção){
  case 'A':
  novsalário = salario*1.08;
  printf("Novo salário igual a R$%.2f\n", novsalário);
  case 'B':
  novsalário = salario*1.11;
  printf("Novo salário igual a R$%.2f\n", novsalário);
  case 'C':
  if (salario <=1000){
    novsalário= salario+ 350;
    printf("Novo salário igual a R$%.2f\n", novsalário);
    }
  else{
    novsalário=salario+200;
    printf("Novo salário igual a R$%.2f\n", novsalário);
  }
}
return 0;
}
