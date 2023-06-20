#include <stdio.h>
#include <math.h>

int main(void) {
//questao 1
float i,soma=0, num, qtde=0,média;
for(i=1;i<=6;i++){
  printf("Digite um número ");
  scanf("%f", &num);
  soma=soma+num;
  if (soma==10){
    qtde=qtde+1;}}
média=soma/6;
printf("Resultado = %.2f\n",média);
printf("Quantidade = %.2f\n",qtde);
// questao 2d
int a=0,qtde=0,m=0;
for(a=0; a<=5;a++){
   qtde=a;
   m=qtde+10;
  if(a<3){
    a++;}
  else{
    m=m-5;}
    a++;}
printf("O valor de m é: %i\n",m);
printf("O valor de a é: %i\n",a);
printf("O valor de qtde é: %i\n",qtde);
// questao 6
int x,y; 
float R;
printf("Digite o valor de x e y: ");
scanf("%i %i", &x, &y);
while(y!=0){
  R=x%y;
  x=y=R;}
  printf("X igual a: %i\n",x);
//questao 7a
int n=3,i;
int val=-1;
for (i=5; i>=0; i--){
 if(i> 0 && i<=2)
  val += n;
 else if(n == 3)
  n--;
 else
 val = n + 1;}
 printf("\n Resultado = %d", val);
//questao 7b
int n=3,i;
int val=0;
for (i=5; i>=0; i--){
 if(i> 0 && i<=2)
  val += n;
 else if(n == 3)
  n--;
 else
 val = n + 1;}
 printf("\n Resultado = %d", val);
//questao 7c
int n=3,i;
int val=2;
for (i=5; i>=0; i--){
 if(i> 0 && i<=2)
  val += n;
 else if(n == 3)
  n--;
 else
 val = n + 1;}
 printf("\n Resultado = %d", val);
//questao 7d
int n=3,i;
int val=3;
for (i=5; i>=0; i--){
 if(i> 0 && i<=2)
  val += n;
 else if(n == 3)
  n--;
 else
 val = n + 1;}
 printf("\n Resultado = %d", val);
//questao 8
int i,n,prox,ant=1,pos=1;
printf("Digite o número de termos: ");
scanf("%i", &n);
if(n==1){
printf("Sequência igual a: %i\n",ant);
}
else if(n==2){
printf("Sequência igual a: %i - %i \n",ant,pos);}
else{
  printf("Sequência igual a: %i - %i \n",ant,pos);
  for (i=3;i<=n;i++){
    prox=ant+pos;
    ant=pos;
    pos=prox;
    printf("- %i ",prox);}}
  return 0;
}
