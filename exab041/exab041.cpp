#include <iostream>

using namespace std;
/*1. Escreva um algoritmo que leia um vetor de 20 posi��es e mostre-o.
 Em seguida, troque o primeiro elemento pelo o �ltimo, o segundo com o pen�ltimo,
  o terceiro com o antepen�ltimo e, assim, sucessivamente. Mostre o novo vetor ap�s todas as trocas.*/

int main (void) {
int parametro [20];
for ( int posicao=0; posicao < 20; posicao++)
{
    parametro[posicao] = posicao + 1;
    cout << parametro [posicao]<<endl;
}
 cout<< "************************************************"<< endl<<endl;

 int posicao_dois = 19;

for(int posicao = 0; posicao <10; posicao++){

    int temporario = 0;


    temporario = parametro[posicao];
    parametro[posicao] = parametro[posicao_dois];
    parametro[posicao_dois] = temporario;

    posicao_dois = posicao_dois - 1;


}

for(int posicao = 0; posicao < 20; posicao++){
     cout << parametro[posicao] << endl;

}


return 0;
}


