#include <iostream>

using namespace std;

    /* Elabore um algoritmo que leia dois vetores de dez posi��es e fa�a a
    multiplica��o dos elementos de mesmo �ndice, colocando o resultado em um
    terceiro vetor, que deve ser mostrado como sa�da.
    */

int main()
{

    int vetorUm[10], vetorDois[10], vetorTres[10];

        for(int posicao = 0; posicao < 10; posicao++){

            vetorUm[posicao] = posicao + 1;
            vetorDois[posicao] = posicao + 1;

            vetorTres[posicao] = vetorUm[posicao] * vetorDois[posicao];

            cout << "Resultado da multiplicacao dos vetores 1 e 2: " << vetorTres[posicao] << endl;




        }



    return 0;
}
