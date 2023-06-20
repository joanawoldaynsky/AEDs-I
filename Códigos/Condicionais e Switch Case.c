#include <stdio.h>

/* Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão a seguir:

Código  Cargo       Percentual

1   Escriturário    50%

2   Secretário      35%

3   Caixa           20%

4   Gerente         10%

5   Diretor         Não tem aumento

*/
int main(void) {
char codigo;
float salário;
printf("Entre com o código do funcionário:\n 1-Escriturário \n 2-Secretário \n 3-Caixa \n 4-Gerente \n 5-Diretor \n");
scanf("%c", &codigo);
switch (codigo){
  case'1':
    printf("Digite o valor do salário R$");
    scanf("%f", &salário);
    printf("Cargo: Escriturário \n");
    printf("Aumento de: 50%% \n");
    printf("Novo salário R$ %.2f \n", salário*1.50);
    break; 
  case'2':
    printf("Digite o valor do salário R$");
    scanf("%f", &salário);
    printf("Cargo: Secretário \n");
    printf("Aumento de: 35%% \n");
    printf("Novo salário R$ %.2f \n", salário*1.35);
    break;
  case'3':
    printf("Digite o valor do salário R$");
    scanf("%f", &salário);
    printf("Cargo: Caixa \n");
    printf("Aumento de: 20%% \n");
    printf("Novo salário R$ %.2f \n", salário*1.20);
    break;
  case'4':
    printf("Digite o valor do salário R$");
    scanf("%f", &salário);
    printf("Cargo: Gerente \n");
    printf("Aumento de: 10%% \n");
    printf("Novo salário R$ %.2f \n", salário*1.10);
    break;
  case'5':
    printf("Digite o valor do salário R$");
    scanf("%f", &salário);
    printf("Cargo: Diretor \n");
    printf("Aumento de: nenhum aumento \n");
    printf("Novo salário R$ %.2f \n", salário);
    break;
  default:
  printf("Código inválido\n\n");
}

/*
Faça um programa que leia um caractere, identifique-o e escreva na tela se ele é um ponto, uma vírgula, um ponto e vírgula ou outro sinal. Use o comando switch-case
*/
char caractere;
printf("Digite o caractere");
scanf("%c", &caractere);

switch(caractere){
  case '.':
    printf("Você digitou o caractere: .\n"); break;
  case ',':
    printf("Você digitou o caractere: ,\n"); break;
  case ';':
    printf("Você digitou o caractere: ;\n"); break;
  case '!':
    printf("Você digitou o caractere: !\n"); break;
  case '?':
    printf("Você digitou o caractere: ?\n"); break;
}
return 0;
}
