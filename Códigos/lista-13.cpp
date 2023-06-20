#include <iostream>
#include <string>
using namespace std;

//questão 5
class Aluno{
  private:
    string nome;
    int serie;
    int grau;
    static int count;
  public:
    Aluno(){
      nome="";
      serie=0;
      grau=0;
    }
    Aluno (string nome,int serie,int grau){
      this->nome=nome;
      this->serie=serie;
      this->grau=grau;
    }
    void setNome (string nome){
      this->nome=nome;
    }
    string getNome(){
      return nome;
    }
    void setSerie(int serie){
      this->serie=serie;
    }
    int getSerie(){
      return serie;
    }
    void setGrau(int grau){
      this->grau=grau;
    }
    int getGrau(){
      return grau;
    }
    void cadastrarAluno(){
      cout<<"Entre com o nome do aluno"<<endl;
      getline(cin,nome);
      cout<<"Entre com a serie do aluno"<<endl;
      cin>>serie;
      cout<< "Entre com o grau do aluno"<<endl;
      cin>>grau;
      count++;
    }
    void mostrarAluno(){
      cout<<"Nome: "<<nome<<"\t";cout<<"Serie: "<<serie<<"\t";
      cout<<"Grau: º"<<grau<<endl;
    }
    void conutAlunos(){
      cout<<"Numero de alunos cadastrados: "<<count<<endl;
    }
};
int Aluno::count=0;
void menu(){
  system("cls||clear");
  cout<<"1 - para cadastrar aluno"<<endl;
  cout<<"2 - para exibir os alunos cadastrados"<<endl;
  cout<<"3 - para sair"<<endl;
}
int main(){
  int opcao;
  Aluno *aluno[10];
  int qtde=0;
  menu();
  cin>>opcao; 
  cin.ignore();
  while(opcao!=3){
    switch(opcao){
      case 1:
        aluno[qtde]=new Aluno();
        aluno[qtde]->cadastrarAluno();
        qtde++;
      break;
      case 2:
        for(int i=0;i<qtde;i++)
        aluno[i]->mostrarAluno();
      break;
    }
    getchar();
    menu();
    cin>>opcao;
    cin.ignore();
  }
  return 0;
} 
