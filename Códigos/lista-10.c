#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//questão 2
int main(){  
int i, vetor[6], par = 0, impar = 0;  
for(i = 0; i<6; i++){
  printf("Digite um número: ");
  scanf("%d", &vetor[i]);
  if(vetor[i]%2 == 0){par++;
  }else{impar++;}
}
printf("\nNúmeros pares: \n");
for(i = 0; i<6; i++){
  if(vetor[i]%2 == 0){printf("%d ", vetor[i]);}
}
printf("\nQuantidade: %d\n", par);  
printf("\n\nNúmeros impares: \n");
for(i = 0; i<6; i++){
  if(vetor[i]%2 != 0){printf("%d ", vetor[i]);}
}
printf("\nQuantidade: %d\n", impar); 
return 0;
} 

//questão 3 
int main(){
  int positivo=0, negativo=0,num,i,vetor[i];
  printf("Digite a quantidade de números desejados: ");
  scanf("%i",&num);
  for(i=1;i<=num;i++){
    printf("Digite um número: ");
    scanf("%i",&vetor[i]);
    if(vetor[i]>0){positivo++;}
    if(vetor[i]<0){negativo++;}
  }
  printf("\nNúmeros positivos: %i",positivo);
  printf("\nNúmeros negativos: %i",negativo);
  return 0;
}

//questão 4
void maior_menor(int v[]){
  int i, maior=14,menor=40;
  for (i=0;i<30;i++){
    while (v[i]<15 || v[i]>40){
      printf("Digite a temperaura diária: ");
      scanf("%i",&v[i]);
      if (v[i]>maior){maior=v[i];}
      if (v[i]<menor){menor=v[i];}
    }
  }
  printf("Maior temperatura: %iºC",maior);
  printf("Menor temperatura: %iºC",menor);
}
void media(int v[]){
  int i, menosm=0;
  float soma=0,media=0;
  for (i=0;i<30;i++){soma+=v[i];}
  media=soma/30;
  for (i=0;i<30;i++){if (v[i]<media){menosm++;}}
  printf("Temperatura média: %.2fºC",media);
  printf("Temperatura abaixo média em:%i dias",menosm);
}
int main(){
  int vetor[30];
  maior_menor(vetor);
  media(vetor);
  return 0;
} 

//questão 5
int main(){
  int soma=0,qntd=0,maior=-999,menor=999,i=1,pesovetor[i];
  float media=0;
  for (i=1;i<5;i++){
    printf("Digite o peso do aluno: ");
    scanf("%i",&pesovetor[i]);
    if(pesovetor[i]>70){qntd++;}
    soma=soma+pesovetor[i];
    if(pesovetor[i]>maior){maior=pesovetor[i];}
    if(pesovetor[i]<menor){menor=pesovetor[i];}
  }
  media=soma/5;
  printf("\nAlunos que pesam mais de 70Kg: %i",qntd);
  printf("\nMédia dos pesos: %f",media);
  printf("\nO maior peso é: %i",maior);
  printf("\nO menor peso é: %i",menor);
  return 0;
} 

//questão 6
int main(){
  int i,vetor[10],vetori[10];
  for (i=1;i<=10;i++){
    printf("Digite o número do vetor: ");
    scanf("%i",&vetor[i]);
  }
  for (i=0;i<10;i++){vetori[i]=vetor[9-i];}
  printf("Vetor Inicial: \n");
  for (i=0;i<10;i++){printf("| %i",vetor[i]);}
  printf("Vetor Invertido: \n");
  for (i=0;i<10;i++){printf("| %i",vetori[i]);}
  return 0;
} 

//questão 7
int main (){
  char va[20],vb[20], auxa[20],auxb[20];
  int a,b;
  for (a=0;a<20;a++){
    printf("Digite um número para o vetor A: ");
    scanf("%c",&va[a]);
  }
  for (b=0;b<20;b++){
    printf("Digite um número para o vetor B: ");
    scanf("%c",&vb[b]);
  }
  for (a=0;a<20;a++){auxa[a]=va[a];auxb[a]=vb[a];}
  for (a=0,b=19;a<20;a++,b--){va[a]=auxb[b];}
  for (a=0,b=19;a<20;a++,b--){vb[a]=auxa[b];}
  printf("Vetor A: \n");
  for (a=0;a<20;a++){printf("| %c",auxa[a]);}
  printf("Vetor B: \n");
  for (a=0;a<20;a++){printf("| %c",auxb[a]);}
  printf("Vetor A trocado: \n");
  for (a=0;a<20;a++){printf("| %c",va[a]);}
  printf("Vetor B trocado: \n");
  for (a=0;a<20;a++){printf("| %c",vb[a]);}
  return 0;
} 

// questão 8
int main(){
  int dia, mes[2],ano,i;
  printf("Dia: ");
  scanf("%i",&dia);
  for (i=0;i<2;i++){printf("Mês: "); scanf("%i",&mes[i]);}
  printf("Ano: ");
  scanf("%i",&ano);
  if (mes[1]==1){printf ("%i/de janeiro/%i", dia, ano);}  
  else if (mes[1]==2){printf ("%i/de fevereiro/%i", dia, ano);} 
  else if (mes[1]==3){printf ("%i/de março/%i",dia, ano);}
  else if (mes[1]==4){printf ("%i/de abril/%i", dia, ano);} 
  else if (mes[1]==5){printf ("%i/de maio/%i", dia, ano);}
  else if (mes[1]==6){printf ("%i/de junho/%i", dia, ano);} 
  else if (mes[1]==7){printf ("%i/de julho/%i", dia, ano);} 
  else if (mes[1]==8){printf ("%i/de agosto/%i", dia, ano);} 
  else if (mes[1]==9){printf ("%i/de setembro/%i", dia, ano);} 
  else if (mes[1]==0){printf ("%i/de outubro/%i", dia, ano);}
  else if (mes[0]==1){printf ("%i/de novembro/%i", dia, ano);}
  else if (mes[0]==2){printf ("%i/de dezembro/%i", dia, ano);}
  return 0;
} 

//questão 9
void substitui(char frase[],int TAM){
  int i,j;
  char fim[TAM];
  do {
    while(frase[i]!='0' && frase[i]!='1'&&frase[i]!='2'&&frase[i]!='3'&&frase[i]!='4' &&frase[i]!='5'&&frase[i]!='6'&&frase[i]!='7'&&frase[i]!='8'&&frase[i]!='9'){
      fim[j]=frase[i];
      j++;
      i++;
    }
    fim[j]='\0';
    if (frase[i]=='0'){strcat(fim,"zero");}
    else if (frase[i]=='1'){strcat(fim,"um");}
    else if (frase[i]=='2'){strcat(fim,"dois");}
    else if (frase[i]=='3'){strcat(fim,"três");}
    else if (frase[i]=='4'){strcat(fim,"quatro");;}
    else if (frase[i]=='5'){strcat(fim,"cinco");}
    else if (frase[i]=='6'){strcat(fim,"seis");}
    else if (frase[i]=='7'){strcat(fim,"sete");}
    else if (frase[i]=='8'){strcat(fim,"oito");}
    else if (frase[i]=='9'){strcat(fim,"nove");}
    } while (frase[i]!='\0');
 printf ("%s", fim);
}
int main(){
 char frase[50];
 int TAM;
 printf ("Digite a frase: ");
 gets(frase);
 TAM=strlen (frase);
 substitui(frase,TAM);
 return 0;
} 

// questão 12
int fatorial(int num){
  int cont, fat=1;
  for (cont=num;cont>1;cont--){
    fat=fat*cont;
  }
  return fat;
}
int main(){
  int a[10], b[10],i;
  for (i=0;i<10;i++){printf("Digite um número: "); scanf("%i", &a[i]);}
  for (i=0;i<10;i++){b[i]=fatorial(a[i]);}
  for (i=0;i<10;i++){printf("| %i",b[i]);}
  return 0;
} 

//questão 13
int ab(int a[], int b[], int i[]){
  int vetorc[20],aux;
  for(int i=0;i<20;i++){
    if(i<10){vetorc=a[i];}else{vetorc=b[i-10];}
  }
  for (int a=0;a<19;a++){
    for (int b=a+1;b<20;b++){
      if(vetorc[a]<vetorc[b]){aux=vetorc[a];vetorc[a]=vetorc[b];vetorc[b]=aux;}
    }
  }
  return vetorc[i];
}
int main(){
  int a[10],b[10],vetorc[20],i;
  for(i=0;i<10;i++){printf("\nVetor A:");scanf("%i",&a[i]);}
  for(i=0;i<10;i++){printf("\nVetor B:");scanf("%i",&b[i]);}
  for(i=0;i<20;i++){vetorc[i]=ab(a,b,i);}
  printf("\nVetor C:");
  for(i=0;i<10;i++){printf("| %i",vetorc[i]);}
  return 0;
} 

//questão 14
void temperatura(float media[]){
  int i;
  char mes[12][10]={"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
  float maior, menor;
  maior=media[0];
  menor=media[0];
  for (i=0;i<12;i++){
    if(media[i]>maior){maior=media[i];}
    if(media[i]<menor){menor=media[i];}
  }
  for (i=0;i<12;i++){
    if(media[i]==maior){printf("\nMaior temperatura: %.2fºC em %s", maior,mes[i]);}
    if(media[i]==menor){printf("\nMenor temperatura: %.2fºC em %s", menor,mes[i]);}
  }
}
int main(){
  int i;
  float media[12], maior,menor;
  for (i=0;i<12;i++){
    printf("Digite a temperatura média: ");
    scanf("%f",&media[i]);
  }
  temperatura(media);
  return 0;
} 

//questão 15 
void resposta(int n){
  printf("%i",n);
}
int num(){
  int resultado;
  printf("Digite um valor: ");
  scanf("%i",&resultado);
  resposta(resultado);
  return resultado;
}
int main(){
  int v[10],i;
  for (i=0;i<10;i++){v[i]=num();}
  return 0;
}
