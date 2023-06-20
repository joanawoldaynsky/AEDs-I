#include <stdio.h>
#include <stdlib.h>

//questao 5
int main(){
  FILE *arquivo;
  arquivo=fopen("arq5.txt","w");
  printf("O arquivo foi criado");
  fputc('1', arquivo);
  fputc('2', arquivo);
  fputc('3', arquivo);
  fputc('4', arquivo);
  fputc('5', arquivo);
  fputc('6', arquivo);
  fputc('7', arquivo);
  fputc('8', arquivo);
  fputc('9', arquivo);
  fputc("10",arquivo);
  return 0;
} 

//questao 6
int main (){
  char txt[30];
  FILE *arquivo;
  arquivo=fopen("arq6.txt","w");
  printf("Digite o texto desejado: ");
  scanf("%c", txt);
  fputs(txt, arquivo);
  printf("O arquivo foi criado");
  return 0;
} 

//questao 7
int main(){
  char txt[50], qtd[100];
  char letra_a;
  int letras=0;
  FILE *arquivo_1;
  FILE *arquivo_2;
  arquivo_1=fopen("arq7.txt","w");
  printf("Digite o texto desejado: ");
  scanf("%s", txt);
  fputs(txt,arquivo_1);
  fclose(arquivo_1);
  printf("O arquivo foi criado\n");
  arquivo_2=fopen("arq7.txt", "r");
  while(!feof(arquivo_2)){
    fscanf(arquivo_2,"%c", &letra_a);
    if(letra_a=='a' || letra_a=='A'){
      letras++;}
    letra_a='k';
  }
  fclose(arquivo_2);
  printf("Existem %i letras 'a' no texto: ", letras);
  return 0;
} 

//questao 8
int main(){
  FILE *arquivo;
  char texto [17];
  int linhas=0;
  arquivo=fopen("arq8.txt", "r");
  if (arquivo==NULL){printf("Ops.. Houve um erro");}
  else{
    while(!feof(arquivo)){
      fscanf(arquivo,"%[^\n]",texto);
      if (ferror(arquivo)){printf("Ops.. Houve um erro");}
      else if(texto!="\n" && texto!=EOF){printf("%s\n",texto);
      linhas++;}
    }
    printf("Número de linhas: %i",linhas);
  }
  getchar();
  fclose(arquivo);
  return 0;
} 

//questao 9
int main(){
  FILE *arquivo_1, *arquivo_2, *arquivo_3;
  char texto1[30], texto2[30];
  arquivo_1=fopen("arq9_1.txt", "r+");
  if (arquivo_1==NULL){printf("Ops.. Houve um erro");return -1;}
  arquivo_2=fopen("arq9_2.txt", "r");
  if (arquivo_2==NULL){printf("Ops.. Houve um erro");return -1;}
  fscanf(arquivo_2,"%s",&*texto1);
  printf("%s",texto2);
  fscanf(arquivo_1,"%[^\n]",&*texto2);
  printf("%s",texto2);
  fclose(arquivo_1);
  fclose(arquivo_2);
  arquivo_3=fopen("arq9_3.txt", "w");
  fprintf(arquivo_3,"%s",texto1);
  fprintf(arquivo_3,"\n%s",texto2);
  fclose(arquivo_3);
  return 0;
} 

//questao 10
int main(){
  int numero, i, soma=0;
  printf("Digite um valor: ");
  scanf("%i",&numero);
  for (i=1;i<=numero;i++){
    if (numero%i==0){printf("\nDivisor: %i",i);soma+=i;}
  }
  FILE *arquivo;
  arquivo=fopen("arq10.txt","w");
  fprintf(arquivo,"Soma igual a: %i",soma);
  fclose(arquivo);
  return 0;
} 

//questao 11
int main(){
  char n[50], texto[50];
  int i, vogais=0;
  FILE *arquivo;
  arquivo=fopen("arq11_1.txt","w+");
  printf("Digite várais letras: ");
  scanf("%s",n);
  fprintf(arquivo,"%s",n);
  fclose(arquivo);
  arquivo=fopen("arq11_2.txt", "r");
  fscanf(arquivo,"%[^\n]",&*texto);
  for(i=0;i<=*texto;i++){
    if (texto[i]=='a'||texto[i]=='e'||texto[i]=='i'||texto[i]=='o'||texto[i]=='u'){vogais++;}
    else {vogais=0;}
  }
  printf("\nNúmero de vogais igual a: %i",vogais);
  return 0;
} 

//questao 12
int main(){
 float aluguel=0, fatu_ano=0, fatu_mes=0, veiculos=0, multas=0, manut=0;
 printf("Quantidade de veiculos: ");
 scanf("%f", &veiculos);
 printf("Aluguel: ");
 scanf("%f", &aluguel);
 fatu_mes=(veiculos/3)*aluguel;
 fatu_ano=fatu_mes*12;
 printf("Faturamento anual: R$%.2f", fatu_ano);
 multas=(veiculos/10)*(0.2*aluguel);
 printf("\nMultas mensais: R$%.2f", multas);
 manut=(veiculos*0.02)*600;
 printf("\nManutenção: R$%.2f", manut);
 FILE *arquivo;
 arquivo = fopen("resultado.txt", "w");
 fprintf (arquivo,"Faturamento total: R$%.2f", fatu_ano);
 fprintf (arquivo,"Multas total: R$%.2f", multas);
 fprintf (arquivo,"Manutenção total: R$%.2f", manut);
 fclose(arquivo);
 return 0;
} 

//questao 13 
int main(){
  int matricula,opcao,num;
  char nome[30],txt[50];
  do{
    printf ("Nome do aluno: ");
    scanf ("%s", nome);
    printf ("Matrícula do aluno: ");
    scanf ("%i", &matricula);
    printf ("Telefone do aluno: ");
    scanf ("%i", &num);
    FILE *arquivo=fopen("arq13.txt","r+");
    fprintf (arquivo,"Aluno: %s\n", nome);
    fprintf (arquivo,"Matricula: %i\n",matricula);
    fprintf (arquivo,"Telefone: %i\n",num);
    fclose(arquivo);
    printf ("\nEncerrar programa?\n1-Sim\n2-Não\n");
    scanf ("%i",&opcao);
  }while(opcao!=1);
    printf ("Ler o arquivo do aluno?\n1-Sim\n2-Não\n");
    scanf ("%i",&opcao);
    if (opcao==1){
    FILE *arquivo = fopen("arq13.txt","r");
    fscanf (arquivo, "%[^\n]", &*txt);
    printf ("\n%s", txt);}
  return 0;
}
