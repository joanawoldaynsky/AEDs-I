#include <stdio.h>
#include <math.h>

//questão 3
int Multiplica(int n1, int n2) {
  if (n2== 0) 
    return n2;
  else 
    return n1 + Multiplica(n1,n2-1);
}
int main(){
int n1, n2, resul;
printf("Digite dois valores: ");
scanf("%i %i", &n1, &n2);
resul=Multiplica(n1,n2);
printf("Resultado: %i",resul);
return 0;
} 

//questão 4
int Divide(int n1, int n2) {
  if (n2 == 1) 
    return n1;
  else if (n1<n2) 
    return 0;
  else 
    return 1 + Divide(n1-n2,n2);
}
int main(){
int n1, n2, resultado;
printf("Digite dois valores: ");
scanf("%i %i", &n1, &n2);
resultado=Divide(n1,n2);
printf("Resultado: %i",resultado);
return 0;
} 

//questão 5
int denominador(int num){
int resp=1;
if(num>1)
{resp = num*denominador(num-1);}
else{resp *= num;}
return resp;
}
float soma(int n1, int i){
float var=0;
float total, den;
int n=1;
den = denominador((i-1)*2);
if(i%2==0){n=-1;}
if (i>1){total=(1/den)*n; var+= total+soma(n1,i-1);}
else var=1;
return var;
}
int main(void){
int n1;
float resultado;
printf("Digite a quantidade de termos: ");
scanf("%i", &n1);
resultado=soma(n1,n1);
printf("Resultado igual a: %.2f",resultado);
re
