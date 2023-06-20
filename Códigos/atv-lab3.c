#include <stdio.h>
#include<math.h>

int main(void) {
//questao 3
int idade, faixa1=0, faixa2=0,faixa3=0,faixa4=0,faixa5=0;
float porcent1, porcent5;
int cont;
for(cont=0;cont<8;cont++){
  printf("Digite a idade ");
  scanf("%i", &idade);
  if(idade>0 && idade<=15){
    faixa1++;}
  else if (idade>=16 && idade<=30){
    faixa2++;}
  else if (idade>=31 && idade<=45){
    faixa3++;}
  else if (idade>=46 && idade<=60){
    faixa4++;}
  else if (idade>60){
    faixa5++;}
}
printf("\nFaixa etária 1: %i", faixa1);
printf("\nFaixa etária 2: %i", faixa2);
printf("\nFaixa etária 3: %i", faixa3);
printf("\nFaixa etária 4: %i", faixa4);
printf("\nFaixa etária 5: %i\n", faixa5);
porcent1=100*faixa1/8;
porcent5=100*faixa5/8;
printf("Porcentagem de pessoas na 1ª faixa: %.2f%%\n",porcent1);
printf("Porcentagem de pessoas na 5ª faixa: %.2f%%\n",porcent5);
//questao 6
char código;
float valor=0, total=0, prazo=0;
int cont;
printf("Digite o código (à vista (v) ou à prazo (p)) ");
scanf("%c", &código);
switch (código){
  case 'v':
  printf("Digite o valor total das compras R$");
  scanf("%f", &valor);
  printf("Valor total a vista será de: R$%.2f", valor);
  break;
  case 'p':
  for (cont=0;cont<15;cont++){
  printf("Digite o valor das prestações R$");
  scanf("%f", &valor);
  total+=valor;}
  prazo=total/3;
  printf("Valor total a prazo será de: R$%.2f\n", total);
  printf("Valor total das compras será de: R$%.2f\n", total);
  printf("Valor da 1ª prestação será de: R$%.2f\n", prazo);
  break;
  default:
  printf("Código inválido");}
//questao 7
int cont,soma=0,soma2=0, peso2=0;
float idade=0, altura=0,altura2=0, peso=0,média=0;
for (cont=0;cont<5;cont++){
  printf("Digite sua idade, altura(cm) e peso (kg):\n");
  scanf("%f %f %f", &idade, &altura, &peso);
  soma+=idade>50;
 if (idade>=10 && idade<=20){
   soma2+=altura;
   altura2++;
   média=soma2/altura2;}
  if (peso<40){
    peso2++;
    peso=100*peso2/5;}
}
printf("Pessoas com idade superior a 50: %i\n",soma );
printf("Média da altura entre 10 e 20 anos:%.2f\n",média);
printf("Pessoas com o peso menos que 40 é igual a%.2f\n%%",peso);
// questa 9
int cont, idade=0;
float peso=0, altura=0, média,soma=0, soma2=0,porc=0,porcent;
for (cont=0;cont<10;cont++){
  printf("Digite sua idade, altura(m) e peso(kg):\n");
  scanf("%i %f %f", &idade, &altura, &peso);
  soma+=idade;
  média=soma/10;
  if(peso>90 && altura<1.50){
    soma2++;}
  if(idade>10 && idade<30 && altura>1.90){
    porc++;
    porcent=100*porc/10;}
}
printf("Média de todas as idades igual a: %.2f\n", média);
printf("Quantidade de pessoas com o peso maior que 90Kg e altura menor que 1.50m é: %.2f\n",soma2);
printf("Pessoas entre 10 e 30 anos com mais de 1.90 é igual a: %.2f\n%%",porcent);
// questao 10
int idade=0,menos18=0,mais80=0,cont1, cont2;
float peso=0, altura=0, média1=0, média2=0,porcentagem=0;
for (cont1=0;cont1<2;cont1++){
  média1=0.0;
  for (cont2=0;cont2<2;cont2++){
    printf("Digite a idade, altura(m) e peso(kg) do jogador %i do time %i:\n",cont2++, cont1++);
    scanf("%i %f %f", &idade, &altura, &peso);
    média1+=idade;
    média2+=altura;
    if (idade<18){
      menos18++;}
    if (peso>=80){
      mais80++;}
  }
média1=média1/3;
}
média2=média2/4;
porcentagem=100*mais80/4;
printf("O número de jogadores com menos de 18 anos é %d\n", menos18);
printf("A média da idade do time %i é igual a: %.2f\n",cont1,média1);
printf("A média das alturas é %.2f\n", média2);
printf("A porcentagem de jogadores com mais de 80kgs é %% %.2f\n", porcentagem);
//questao 12
int numero, cont=0,primos=0;
while (cont<=9){
  printf("Digite um número: ");
  scanf("%i", &numero);
  if(numero%2!=0 && numero%3!=0 && numero%5!=0 && numero%7!=0){
    primos++;}
  else if(numero==2 || numero==3 || numero==5 || numero==7){
    primos++;}
  else {}
  cont++;}
printf("Números primos foram: %i",primos);
//questao 13
int idade, faixa1=0,faixa2=0,faixa3=0,faixa4=0,cont=0;
float peso, média1, média2, média3, média4;
for(cont=0;cont<15;cont++){
  printf("Digite a idade e peso da pessoa: \n");
  scanf("%i %f",&idade,&peso);
  if(idade>1 && idade<=10){
    faixa1++;
    média1=peso++/faixa1;}
  if (idade>11 && idade<=20){
    faixa2++;
    média2=peso++/faixa2;}
  if (idade>21 && idade<=30){
    faixa3++;
    média3=peso++/faixa3;}
  if (idade>=31){
    faixa4++;
    média4=peso++/faixa4;}
}
printf("\nMédia do peso na faixa etária 1: %.2f", média1);
printf("\nMédia do peso na faixa etária 2: %.2f", média2);
printf("\nMédia do peso na faixa etária 3: %.2f", média3);
printf("\nMédia do peso na faixa etária 4: %.2f", média4);
// questao 14
int idade,totalidade=0, opinião=0, cont=1,pessoas=0;
float média=0, porcent=0,otimo=0, bom=0;
while(cont<=15){
  printf("Digite sua idade: ");
  scanf("%i", &idade);
  printf("Digite sua opinião sobre o filme:\n1-Regular\n2-Bom\n3-Ótimo\n");
  scanf("%i", &opinião);
  switch (opinião){
    case 1:
      pessoas++;
      break;
    case 2:
      bom++;
      break;
    case 3:
      otimo++;
      totalidade+=idade;
      média=totalidade/otimo;
      break;
    default:
      printf("Classificação inválida");
      break;}
  cont++;}
porcent=bom*100/3;
printf("A média da idade das pessoas que responderam ótimo é igual a: %2.f\n", média);
printf("A quantidade de pessoas que respondeu regular é igual a: %i\n", pessoas);
printf("A porcentagem de pessoas que responderam bom é igual a: %% %.2f\n", porcent);
// questao 17
int canal=1;
float porcent1=0, porcent2=0, porcent3=0, porcent4=0,pessoas=0,canal4=0, canal5=0, canal7=0, canal12=0;
printf("Para sair digite '0'\n");  
while (canal!=0){
  printf("Digite o canal (4,5,7,12) ");
  scanf("%i", &canal);
    switch (canal){
      case 4:
        printf("Digite o número de pessoas assintindo: ");
        scanf("%f", &canal4);
        canal4+=canal4;
        break;
      case 5:
        printf("Digite o número de pessoas assintindo: ");
        scanf("%f", &canal5);
        canal5+=canal5;
        break;
      case 7:
        printf("Digite o número de pessoas assintindo: ");
        scanf("%f", &canal7);
        canal7+=canal7;
        break;
      case 12:
        printf("Digite o número de pessoas assintindo: ");
        scanf("%f", &canal12);
        canal12+=canal12;
        break; 
      case 0:
        printf("Fim do programa...\n");
        break;
      default:
        printf("Canal inválido!\n");
        break;} 
  pessoas=canal4+canal5+canal7+canal12;}
if (pessoas>0){
  porcent1=(canal4*100)/pessoas;
  porcent2=(canal5*100)/pessoas;
  porcent3=(canal7*100)/pessoas;
  porcent4=(canal12*100)/pessoas;
}else {
  porcent1=0;
  porcent2=0;
  porcent3=0;
  porcent4=0;}
printf("\nA porcentagem de pessoas assintindo o canal 4 foi de:%.2f%%\n", porcent1);
printf("A porcentagem de pessoas assintindo o canal 5 foi de:%.2f%%\n", porcent2);
printf("A porcentagem de pessoas assintindo o canal 7 foi de:%.2f%%\n", porcent3);
printf("A porcentagem de pessoas assintindo o canal 12 foi de:%.2f%%\n", porcent4);
//questao 19
char letra;
float compra,venda,lucro=0,total=0;
int lucromais=0, lucromenos=0;
printf("Digite 'f' para sair\n");
while(letra!='f'){
  printf("Digite a letra a ser comercializada (a, b, c, d ou e): ");
  scanf("%c", &letra);
  getchar();
  switch (letra){
    case 'a':
      printf("Digite o valor de compra R$");
      scanf("%f", &compra);
      printf("Digite o valor de venda R$");
      scanf("%f", &venda);
      lucro=venda-compra;
      if(lucro>1000){
        lucromais++;
      }else if(lucro<200){
        lucromenos++;}
      total+=lucro;
      printf("Lucro total da ação igual a: R$%.2f\n",lucro);
      break;
    case 'b':
      printf("Digite o valor de compra R$");
      scanf("%f", &compra);
      printf("Digite o valor de venda R$");
      scanf("%f", &venda);
      lucro=venda-compra;
      if(lucro>1000){
        lucromais++;
      }else if(lucro<200){
        lucromenos++;}
      total+=lucro;
      printf("Lucro total da ação igual a: R$%.2f\n",lucro);
      break;
    case 'c':
      printf("Digite o valor de compra R$");
      scanf("%f", &compra);
      printf("Digite o valor de venda R$");
      scanf("%f", &venda);
      lucro=venda-compra;
      if(lucro>1000){
        lucromais++;
      }else if(lucro<200){
        lucromenos++;}
      total+=lucro;
      printf("Lucro total da ação igual a: R$%.2f\n",lucro);
      break;
    case 'd':
      printf("Digite o valor de compra R$");
      scanf("%f", &compra);
      printf("Digite o valor de venda R$");
      scanf("%f", &venda);
      lucro=venda-compra;
      if(lucro>1000){
        lucromais++;
      }else if(lucro<200){
        lucromenos++;}
      total+=lucro;
      printf("Lucro total da ação igual a: R$%.2f\n",lucro);
      break;
    case 'e':
      printf("Digite o valor de compra R$");
      scanf("%f", &compra);
      printf("Digite o valor de venda R$");
      scanf("%f", &venda);
      lucro=venda-compra;
      if(lucro>1000){
        lucromais++;
      }else if(lucro<200){
        lucromenos++;}
      total+=lucro;
      printf("Lucro total da ação igual a: R$%.2f\n",lucro);
      break;
    case 'f': 
      printf("Fim do programa...\n");
    default:
      printf("Letra inválida!\n");
      break;}
}  
printf("Ações com lucro superior a R$1.000,00: %i\n",lucromais);
printf("Ações com lucro interior a R$200,00: %i\n",lucromenos);
printf("Lucro total da empresa R$%.2f\n",total);
// questao 20
int opção=0;
float n1,n2,n3,peso1,peso2,peso3,médiaa=0, médiap=0;
while(opção!=3){
  printf("Digite a opção que deseja:\n1- Média Aritimética\n2- Média Ponderada\n3- Sair\n");
  scanf("%i", &opção);
  switch (opção){
    case 1:
      printf("Digite duas notas: ");
      scanf("%f %f", &n1,&n2);
      médiaa=n1+n2/2;
      printf("A média aritmética: %2.f\n",médiaa);
      break;
    case 2:
      printf("Digite três notas: ");
      scanf("%f %f %f", &n1, &n2, &n3);
      printf("Digite o peso das notas, na ordem digitada: ");
      scanf("%f %f %f", &peso1, &peso2, &peso3);
      médiap=((n1*peso1)+(n2*peso2)+(n3*peso3))/peso1+peso2+peso3;
      printf("A média ponderada das notas e seus respectivos pesos é: %.2f\n",médiap);
      break;
    case 3:
      printf("Saindo do programa...");
      break;
    default:
    printf("Opção inválida!");
    break;}}
// questao 22
char opção;
float salário, novosalário=0;
while(opção!='D'){
  printf("\nDigite a opção do menu:\nA- Aumento de 8%\nB- Aumento e 11%\nC- Aumento fixo de R$450,00\nD- Sair\n");
  scanf("%c",&opção);
  getchar();
  switch (opção){
    case'A':
    printf("Digite o valor do salário atual R$");
    scanf("%f", &salário);
    novosalário=salário*1.08;
    printf("Novo salário igual a R$%.2f\n",novosalário);
    break;
  case'B':
    printf("Digite o valor do salário atual R$");
    scanf("%f", &salário);
    novosalário=salário*1.11;
    printf("Novo salário igual a R$%.2f\n",novosalário);
    break;
  case'C':
    printf("Digite o valor do salário atual R$");
    scanf("%f", &salário);
    novosalário=salário+450;
    printf("Novo salário igual a R$%.2f\n",novosalário);
    break;
  case'D':
    printf("Saindo do programa...");
    break;
  default:
    printf("Opção inválida!");
    break;}}
//questao 23
int opção,meses;
float salário=0,mais15=0,mais10=0,mais5=0,férias=0,salário3=0;
while(opção!=4){
  printf("Escolha uma das opções abaixo:\n1- Novo salário\n2- Férias\n3- Décimo terceiro\n4- Sair\n");
  scanf("%i",&opção);
  switch(opção){
    case 1:
      printf("Digite o valor do salário R$");
      scanf("%f",&salário);
      if (salário<210){
        mais15=salário*1.15;
        printf("Novo salário igual a R$%.2f\n",mais15);
      }else if (salário>=210 && salário<=600){
        mais10=salário*1.10;
        printf("Novo salário igual a R$%.2f\n",mais10);
      }else{
        mais5=salário*1.05;
        printf("Novo salário igual a R$%.2f\n",mais5);}
      break;
    case 2:
      printf("Digite o valor do salário R$");
      scanf("%f",&salário);
      férias=salário+(salário/3);
      printf("Salário com férias inclusa igual a R$%.2f\n",férias);
      break;
    case 3:
      printf("Digite o valor do salário R$");
      scanf("%f",&salário);
      printf("Digite o número de meses de trabalho: ");
      scanf("%i", &meses);
      if(meses<=12){
        salário3=(salário*meses)/12;
        printf("Valor do 13º igual a R$%.2f\n",salário3);
      }else 
        printf("Valor máximo de 12 meses");
      break;
    case 4:
      printf("Saindo do programa...");
      break;
    default:
      printf("Opção inválida!");
      break;}}
// questao 24
char sexo,olho,cabelo,código;
int idade,cont=0,vl=0;
float altura,peso,totalid=0,totalp=0,totala=0, médiaid=0, médiap=0, médiaa=0,fem=0,masc=0,porcentf=0,porcentm=0;
do{
  printf("Digite se sexo (f ou m)");
  scanf("%c", &sexo);
  getchar();
  if(sexo=='f'){
    fem++;
  }else if (sexo=='m'){
    masc++;
  }else{
    printf("Digite umas das letras indicadas!");}
  printf("Digite a cor dos seus olhos (a - azuis, v-verdes, c-castanhos: ");
  scanf("%c",&olho);
  getchar();
  printf("Digite a cor do seu cabelo (l-loiros, c-castanhos,p-pretos) ");
  scanf("%c", &cabelo);
  getchar();
  if (olho=='v'&& cabelo=='l'){
    vl++;}
  printf("Digite sua idade: ");
  scanf("%i", &idade);
  totalid+=idade;
  printf("Digite sua altura(cm) ");
  scanf("%f",&altura);
  totala+=altura;
  printf("Digite seu peso(kg) ");
  scanf("%f", &peso);
  totalp+=peso;
  printf("Deseja continuar (s-sim ou n-não)? ");
  scanf("%c",&código);
  getchar();
  getchar();
  cont++;}
while (código!='s');
  médiaid=totalid/cont;
  médiap=totalp/cont;
  médiaa=totala/cont;
  porcentf=(fem*100)/cont;
  porcentm=(masc*100)/cont;
printf("\nMédia das idades: %.2f\n",médiaid);
printf("Média das alturas: %.2f\n",médiaa);
printf("Méia dos pesos: %.2f\n",médiap);
printf("Porcentagem feminina: %.2f\n",porcentf);
printf("Porcentagem masculina: %.2f\n",porcentm);
printf("Pessoas com olhos verdes e cabelos loiros: %i", vl);
return 0;
}
