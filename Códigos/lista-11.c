#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//questão 1
int main(){
  int matriz[4][3];
  int l,c,maior,menor,lmaior,cmaior,lmenor,cmenor;
  float media,soma;
  for(l=0; l<4; l++){
    for(c=0; c<3; c++){
      printf("Digite um numero: ");
      scanf("%d", &matriz[l][c]);
      soma+=matriz[l][c];
    }
  }
  media=soma/12;
  maior=matriz[0][0];
  menor=matriz[0][0];
  for(l=0; l<4; l++){
    for(c=0; c<3; c++){
      if (matriz[l][c]>maior){
        maior=matriz[l][c];
        lmaior=l;
        cmaior=c;
      }
      if (matriz[l][c]<menor){
        menor=matriz[l][c];
        lmenor=l;
        cmenor=c;
    }
  }
  }
  printf("\n\nMatriz:");
  for(l=0; l<4; l++){
    printf("\n");
    for(c=0; c<3; c++){
      printf("%d|", matriz[l][c]);
    }
  }
  printf("\n\nMédia dos valores: %.2f",media);
  printf("\nMaior número: %i [%i][%i]\n", maior,lmaior,cmaior);
  printf("Menor número: %i [%i][%i]", menor,lmenor,cmenor);
  return 0;
} 

//questão 2
int main() {
	int l,c;
  float soma=0;
  int mat[4][4];
	for (l=0;l<4;l++){
		for (c=0;c<4;c++){
      printf("Digite um valor: ");
			scanf("%d", &mat[l][c]);
      if (l==c){
        soma+=mat[l][c];
      }
		}
	}
	printf("\nMatriz:");
  for(l=0; l<4; l++){
    printf("\n");
    for(c=0; c<4; c++){
      printf("%d|", mat[l][c]);
    }
  }

  printf("\nSoma abaixo da diagonal: %.1f", soma);
  printf("\nDiagonal principal: ");
  for(l=0; l<4; l++){
    for(c=0; c<4; c++){
      if(l==c)
      printf("%d / ", mat[l][c]);
    }
  }
	return 0;
} 

//questão 3
int main(){
  int l,c,lin,col;
  int matrizA[l][c];
  printf("Linhas: ");
  scanf("%i",&lin);
  printf("Colunas: ");
  scanf("%i",&col);
  for (l=0;l<=lin;l++){
    for(c=0;c<=col;c++){
      printf("Digite um valor: ");
      scanf("%d", &matrizA[l][c]);
    }
  }
  printf("\nMatriz: ");
  for (l=0;l<=lin;l++){
    printf("\n");
    for(c=0;c<=col;c++){
      printf("%i |",matrizA[l][c]);
    }
  }
    printf("\nMatriz Trasversa: ");
  for (l=0;l<=lin;l++){
    printf("\n");
    for(c=0;c<=col;c++){
      printf("%i |",matrizA[c][l]);
    }
  }
  return 0;
} 

//questão 4
int main(){
  int l,c,matriz[10][10], l2[10],diag[10],diag2[10];
  for (l=0;l<10;l++){
    for(c=0;c<10;c++){
      printf("Digite um valor: ");
      scanf("%i",&matriz[l][c]);
    }
  }
  printf("\n Matriz original: ");
  for (l=0;l<10;l++){
    printf("\n");
    for(c=0;c<10;c++){
      printf("%d |",matriz[l][c]);
    }
  }
  for(c=0;c<10;c++){
    l2[c]=matriz[2][c];
    matriz[2][c]=matriz[8][c];
    matriz[8][c]=l2[c];
  }
  for (l=0;l<10;l++){diag2[l]=matriz[l][c];}
  for (l=0;l<10;l++){
    for(c=0;c<10;c++){
      if (l==c){
        diag[c]=matriz[l][c];
        matriz[l][c]=diag2[c];
      }
    }
  }
  for (l=0,c=9;l<10;l++,c--){matriz[l][c]=diag[l];}
  printf("\n Matriz trocada: ");
  for (l=0;l<10;l++){
    printf("\n");
    for(c=0;c<10;c++){
      printf("%d |",matriz[l][c]);
    }
  }
  return 0;
} 

//questão 5
int main(){
  int mat[4][5],l,c,c1,c2,c3,c4,vetor[5]={0,0,0,0,0},w=10,cont=0;
  for(l=0;l<4;l++){
    for(c=0;c<5;c++){
      printf("Digite um valor: ");
      scanf("%d", &mat[l][c]);
      if (c==0){vetor[c]+=mat[l][c];}
      else if (c==1){vetor[c]+=mat[l][c];}
      else if (c==2){vetor[c]+=mat[l][c];}
      else if (c==3){vetor[c]+=mat[l][c];}
    }
  }
  printf("\n Matriz: ");
  for (l=0;l<4;l++){
    printf("\n");
    for(c=0;c<5;c++){
      printf("%d |",mat[l][c]);
    }
  }
  for(cont=0;cont<4;cont++){printf("\nSoma da coluna %i: %i",cont,vetor[cont]);}
  printf("\nMaior que 10: ");
  for(l=0;l<4;l++){
    for(c=0;c<5;c++){
      if (mat[l][c]>10){printf("%d |",mat[l][c]);w=mat[l][c];}
    }
  }
  if (w<=10){printf("Não há número maiores que 10");}
  return 0;
} 

//questão 6
int main(){
int l,c, matriz[5][3], produtos[4], ctp[3], cta[4], est=10000, est2=0,i=0;
for (l=0;l<4;l++){
  for(c=0;c<3;c++){
    printf("Digite o estoque atual do produto %i no armazem %i: ", c+1,l+1);
    scanf("%d", &matriz[l][c]);
    produtos[l]+=matriz[l][c];
      if(l==0&&c==0){cta[l]+=matriz[l][c]*matriz[4][0];}
      if(l==0 && c==1){cta[l]+=matriz[l][c]*matriz[4][1];}
      if(l==0 && c==2){cta[l]+=matriz[l][c]*matriz[4][2];}
      if(l==1 && c==0){cta[l]+=matriz[l][c]*matriz[4][0];}
      if(l==1 && c==1){cta[l]+=matriz[l][c]*matriz[4][1];}
      if(l==1 && c==2){cta[l]+=matriz[l][c]*matriz[4][2];}
      if(l==2 && c==0){cta[l]+=matriz[l][c]*matriz[4][0];}
      if(l==2 && c==1){cta[l]+=matriz[l][c]*matriz[4][1];}
      if(l==2 && c==2){cta[l]+=matriz[l][c]*matriz[4][2];}
      if(l==3 && c==0){cta[l]+=matriz[l][c]*matriz[4][0];}
      if(l==3 && c==1){cta[l]+=matriz[l][c]*matriz[4][1];}
      if(l==3 && c==2){cta[l]+=matriz[l][c]*matriz[4][2];}
    }
  }
  for (c=0;c<3;c++){
    printf("Preço do produto %i: R$",c+1);
    scanf("%i",&matriz[4][c]);
  }
  for (i=0;i<4;i++){printf("\n Produto do armazem %i: %i",i+1,produtos[i]);}
  for (l=0;l<4;l++){
    if (matriz[l][1]>est2)
      est2=matriz[l][1];
      if (produtos[l]<est)
      est=produtos[l];
      if (matriz[l][1]==est2)
      printf("\nO armazem com o maior estoque do produto 2 é o %d", l+1);
      if(produtos[l]==est)
      printf("\nO armazem com o menor estoque é o %d\n", l+1);
  }
  for (c = 0; c < 3; c++){
    for (l = 0; l < 4; l++){
      if(c==0)
      ctp[c]+=matriz[l][c]*matriz[4][0];
      if(c==1)
      ctp[c]+=matriz[l][c]*matriz[4][1];
      if(c==2)
      ctp[c]+=matriz[l][c]*matriz[4][2];
    }
  }
  for (int i=0; i<4; i++){printf ("\nCusto total do produto %d: R$%d ", i+1, ctp[i]);}
  printf ("\n");
  for (int i=0; i<4; i++){printf ("\nCusto total do armazem %d: R$%d ", i+1, cta[i]);}
  return 0;
} 

//questão 7 
int main (void){
  int preço[10],i,est[5][10],l,c,arm=0,prod=0,posi=0,maiorest=0,menorest=0,custo;
  for(i=0;i<10;i++){
    printf("Digite o valor do produto %i: R$",i+1);
    scanf("%i",&preço[i]);
  }
  for (l=0;l<5;l++){
    for (c=0;c<10;c++){
      printf("\nQuantidade do produto %i no armazem %i: ",c+1,l+1);
      scanf("%i",&est[l][c]);
      arm+=est[l][c];
      prod+=est[l][c];
      if(est[l][c]>maiorest){posi=c;maiorest=est[l][c];}
      if(est[l][c]<menorest){menorest=est[l][c];}
      custo=est[l][c]*preço[c];
      printf("\nTotal de produtos no armazem %i: %i",l+1,arm);
      printf("\nTotal o produto %i: %i",c+1,prod);
    }
    printf("\nCusto total do armazem %i: R$ %i",l+1,custo);
  }
  printf("\nMaior estoque em um armazem é o produto %i - R$ %i",posi+1,preço[posi]);
  printf("\nMenor estoque: %i",menorest);
  return 0;
}
//questão 8
int main (void){
  int matriz[6][4], l,c,cont,matriz2[6][4];
  for (l=0;l<6;l++){
    for(c=0;c<4;c++){
      printf("Digite um valor: ");
      scanf("%i",&matriz[l][c]);
      if (matriz[l][c]>30){cont++;}
      if(matriz[l][c]!=30){matriz2[l][c]=matriz[l][c];}
      else{matriz2[l][c]=0;}
    }
  }
  printf ("\nMatriz original: ");
  for (l=0; l<6; l++){
    printf ("\n");
    for (c=0; c<4; c++){
      printf ("%d\t", matriz[l][c]);
    } 
  }
  printf ("\n\nNúmero(s) maiores que 30: %d", cont);
  printf ("\n\nMatriz alterada: ");
    for (l=0; l<6; l++){
      printf ("\n");
      for (c=0; c<4; c++){
        printf ("%d\t", matriz2[l][c]);
    } 
  }
  return 0;
} 
