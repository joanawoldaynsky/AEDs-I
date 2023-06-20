#include <stdio.h>
#include <math.h>

//questão 3
int ordem (int n1, int n2, int n3){
if (n1<n2 && n1<n3){
  if (n2<n3){
    printf ("Em ordem crescente, os números são: %i %i %i", n1, n2, n3);
  }else {printf ("Em ordem crescente, os números são: %i %i %i", n1, n3, n2);}}
else if (n2<n1 && n2<n3){
  if (n1<n3){printf ("Em ordem crescente, os números são: %i %i %i", n2, n1, n3);
  }else {printf ("Em ordem crescente, os números são: %i %i %i", n2, n3, n1);}}
else if (n3<n1 && n3<n2){
  if (n1<n2){printf ("Em ordem crescente, os números são: %i %i %i", n3, n1, n2);
  }else {printf ("Em ordem crescente, os números são: %i %i %i", n3, n2, n1);}}
return 0;
}
int main(void) {
  int n1, n2, n3;
  printf("Digite 3 números: ");
  scanf ("%i" "%i" "%i", &n1, &n2, &n3);
  ordem(n1, n2, n3);
  return 0;
}

//questão 4
char conceito (int nota){
  char con;
  if(nota>=90){con='A';}
  if(nota<90 && nota>=80){con='B';}
  if (nota<80 && nota>=70){con='C';}
  if (nota<70 && nota>=60){con='D';}
  if (nota<60){con='E';}
  return con;
}
int main(void){
  int nota;
  char nome[50],con;
  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("Digite o valor da nota: ");
  scanf("%i", &nota);
  con=conceito(nota);
  printf("O aluno %s obteve nota %i e tem conceito %c",nome,nota,con);
  return 0;
}

//questão 5
int anobi (int ano){
  int bissexto;
  if (ano%4==0 && ano%400==0 && ano%100!=0){bissexto=1;}
  else{bissexto=2;}
  return bissexto;
}
int main(void){
  int ano;
  int ano_bissexto;
  printf("Digite o ano em que você nasceu: ");
  scanf("%i", &ano);
  ano_bissexto=anobi(ano);
  if (ano_bissexto==2){printf("O ano não foi bissexto");}
  else{printf("Oano foi bissexto");}
  return 0;
}

//questão 6
float peso(float alt,int sexo){
  float peso=0;
  if (sexo==1){peso=(72.7*alt)-58;}
  if (sexo==2){peso=(62.1*alt)-44.7;}
  return peso;
}
int main(void){
  float alt=0, peso2=0;
  int sexo;
  printf("Digite sua altura(m): ");
  scanf("%f", &alt);
  printf("Digite seu sexo (1-Masculino e 2-Feminino) ");
  scanf("%i", &sexo);
  peso2=peso(alt,sexo);
  printf("Seu peso ideal é de: %.2f Kg",peso2);
  return 0;
}

//questão 7
int valor (int num){
  int soma=1,i=0;
  for (i=2 ; i <= (num/2) ; i++ ) {
    if (num%i==0) {
      soma += i;
    }
  }
  return soma;
}
int main(void) {
  int num,div=0;
  printf("Digite um número: ");
  scanf("%d",&num);
  div=valor(num);
  printf("A soma dos divisores é: %d",div);
  return 0;
}

//questão 8
float s (int num){
  float sequencia=0,prox=0,n1=1,div=0;
  for(n1=1,div=1;div<=num;div++){
    prox=n1/div;
    printf("%.f/%.f | ",n1,div);
    sequencia+=prox;
  }
  return sequencia;
}
int main(void){
  int num=2;
  float soma=0;
  printf("Digite a quantidade de termos: ");
  scanf("%i", &num);
  if (num<1){printf("Quandtidade inválida!");}
  else{
    soma=s(num);
    printf("\nValor total da sequência com %i termos é: %.f",num,soma);}
  return 0;
}

//questão 9
float custoc (float custof){
  float custoc;
  if (custof<=28000){custoc=custof*1.05;}
  else if (custof<28000.01 && custof>=45000){custoc=custof*1.1*1.15;}
  else{custoc=custof*1.15*1.2;}
  return custoc;
}
int main(void){
  float custof, consumidor;
  printf("Digite o valor do custo de fábrica: R$");
  scanf("%f",&custof);
  consumidor=custoc(custof);
  printf("Valro para o consumidor de: R$%.2f",consumidor);
}

//questão 10
float f(float x){
  float y;
  if(x<=1){y=1;}
  else if (x>1 && x<=2){y=2;}
  else if (x>2 && x<=3){y= pow(x,2);}
  else{y= pow(x,3);}
  return y;
}
int main(void){
  float x,y;
  printf("Digite o falor de x: ");
  scanf("%f", &x);
  y=f(x);
  printf("Y= %.2f", y);
  return 0;
}

//questão 11
int soma(int num){
  int cont=0,soma=0;
  num=num-1;
  for(cont=1;num>cont;num--){
    soma+=num;}
  return soma;
}
int main(void){
  int num, soma2;
  printf("Digite um valor: ");
  scanf("%i", &num);
  soma2=soma(num);
  printf("Soma igual a: %i",soma2);
  return 0;
}

// questão 12
void impostop (float imposto, int mes){
  float multa=0,novo=0;
  if(imposto<=50){novo=imposto*pow(1.01,mes);}
  else if (imposto>50 && imposto<=180){novo=imposto*pow(1.02,mes);}
  else if (imposto>180 && imposto<=500){novo=imposto*pow(1.04,mes);}
  else if (imposto>500 && imposto<=1200){novo=imposto*pow(1.07,mes);}
  else{novo=imposto*pow(1.1,mes);}
  printf("Valor total igual a: R$%.2f",novo);
}
int main(void){
  float imposto=0;
  int mes, cont=0;
  while(cont<=10){
    printf("Valor do imposto predical: R$");
    scanf("%f", &imposto);
    printf("Tempo de atraso, em meses: ");
    scanf("%i", &mes);
    impostop(imposto,mes);
    return 0;
  }
}

//questão 13
int soma(){
  int num1,num2;
  printf("Digite dois valores: "); 
  scanf("%i %i",&num1,&num2);
  return num1+num2;
}
int subtracao(){
  int num1,num2;
  printf("Digite dois valores: "); 
  scanf("%i %i",&num1,&num2);
  return num1-num2;
}
int multiplicacao(){
  int num1,num2;
  printf("Digite dois valores: "); 
  scanf("%i %i",&num1,&num2);
  return num1*num2;
}
int divisao(){
  int num1,num2;
  printf("Digite dois valores: "); 
  scanf("%i %i",&num1,&num2);
  return num1/num2;
}
int main (void){
  int num1,num2,menu;
  while(menu!=5){
    printf("\nEscolha um das opções abaixo:\n[1]-Para somar\n[2]-Para subtrair\n[3]-Para multipliicar\n[4]-Para dividir\n[5]-Para sair\n");
    scanf("%i",&menu);
    switch (menu){
      case 1:
      printf("%i",soma());
      break;
      case 2:
      printf("%i",subtracao());
      break;
      case 3:
      printf("%i",multiplicacao());
      break;
      case 4:
      printf("%i",divisao());
      break;
      case 5:
      printf("Saindo do programa...");
      break;
      default:
      printf("Código inválido!");
      break;
    }
  }
  return 0;
}

//questão 14
float salA (float porcentA, float salario){
  float novo;
  novo=salario*porcentA;
  return novo;
}
float salB (float porcentB, float salario){
  float novo;
  novo=salario*porcentB;
  return novo;
}
float salC (float porcentC, float salario){
  float novo;
  novo=salario*porcentC;
  return novo;
}
int main(void){
  char opção;
  float porcentA=1.08,porcentB=1.11,porcentC=1.2, salario;
  while(opção!='D'){
    printf("\n\nMenu de Opções:\nA:Aumento de 8%%\nB:Aumento de 11%%\nC:Aumento de 20%%\nD:Sair\n");
    scanf("%c",&opção);
    getchar();
    switch (opção){
      case 'A' :
        printf("Valor do salário: R$");
        scanf("%f",&salario);
        printf("Novo valor do salário: R$%.2f",salA(porcentA,salario));
      break;
      case 'B' :
        printf("Valor do salário: R$");
        scanf("%f",&salario);
        printf("Novo valor do salário: R$%.2f",salB(porcentB,salario));
      break;
      case 'C' :
        printf("Valor do salário: R$");
        scanf("%f",&salario);
        printf("Novo valor do salário: R$%.2f",salC(porcentC,salario));
      break;
      case 'D' :
        printf("Saindo do programa...");
      break;
      default:
        printf("Código inválido!");
      break;
    }
  }
  return 0;
}

//questão 15
int primos (int n1){
	int i=0, cont=0;
	for (i=1;i<=n1;i++){
		if (n1%i==0)
			cont++;}
	if (cont==2)
		printf("O número %i é primo.\n\n", n1);
	else
		printf("O número %i não é primo.\n\n", n1);
  return n1;
}
int main(void){
	int n1,i=1,param=1,sub=0;
  printf("Digite um valor: ");
	scanf("%i", &n1);
	primos(n1);
    while(i<1000){
      while(param<i){
        if(i%param==0){sub=1;}
        param++;}
        param=2;
        if(sub==0){printf("%i | ", i);}
        sub=0;
        i++;
    }return 0;
}

//questão 16
int divisao (int num){
  int n1,n2,i;
  while (n2 > 0){
    i = n2;
    n2 = n1 % n2;
    n1 = i;
    }
  return n1;
}
int main(void) {
  int n1,n2,num,chamada;
  printf("Digite dois valores: ");
  scanf("%d %d", &n1, &n2);
  chamada=divisao(num);
  printf("MDC = %d\n", n1);
  return 0;
}

// questão 17
void div(int n1, int n2){
  int cont=2;
  if (n1%n2==0){printf ("Retorno: 0");}
  else {
    if (n1>n2){
    do{cont++; }
    while (n1%cont!=0); 
    printf ("Próximo divisior: %i", cont);}
    else{printf ("Não existe próximo divisor");}
  }
}
int main(void) {
  int n1, n2;
  printf("Digite 2 números: ");
  scanf ("%i" "%i", &n1, &n2);
  div(n1, n2);
  return 0;
}

//questão 18
int triangulo (int lados){
  int n1,n2,n3;
  if(n1+n2>=n3 || n1+n3>=n2 || n2+n3>=n1){
    printf("É um triângulo ");
    if(n1==n2 || n1==n3){printf("Equilatero");}
    else if (n1==n2 && n1==n3 && n2==n3){printf("Isoceles");}
    else{printf("Escaleno");}
  }
  else {printf("Não é um triângulo!");}
  return lados;
}
int main(void){
  int n1,n2,n3,chamada,lados;
  printf("Digite 3 valores: ");
  scanf("%i%i%i",&n1,&n2,&n3);
  chamada=triangulo(lados);
  return 0;
}

//questão 19
int fat(int num){
  int fatoracao=1,i;
  for (i=num;i>0;i--){fatoracao = fatoracao*i;}
  return fatoracao;
}
int main(void){
  int num,resultado;
  do{
    printf("Digite um numero: ");
    scanf("%d",&num);
    }
    while (num<0);
      resultado = fat(num);
      printf("Fatorial de %i = %d\n",num,resultado);
    return 0;
}

//questão 20
void funcao(float a, float divisor){
  float resultado;
  int result;
  resultado=a/divisor;
  result=a/divisor;
  if(resultado==result){printf("Divisível");}
  else{printf("Não divisível");}
}
int main()
{
  int num1, num2;
  printf("Digite dois valores: ");
  scanf("%i%i", &num1, &num2);
  funcao(num1, num2);
  return 0;
}
