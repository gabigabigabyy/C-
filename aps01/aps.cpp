
#include <iostream>
using namespace std;

/*
1) (0,5) Primo 10001:
   Ao listar os seis primeiros primos: 2, 3, 5, 7, 11,
   e 13, nós podemos ver que o sexto é 13.
   Qual é o número primo que se encontra na posição 10001?
   Faça um programa para responder esta questão.
*/

int main()
{
    int numero = 1, posicao = 0;

    while ( posicao <= 10001){
        int divisor = 1, contaDivisores = 0;

        while (divisor <= numero) {
            if ((numero % divisor) == 0){
                contaDivisores++;
            }
            divisor++;
        }

        if (contaDivisores == 2){
            cout << "Primo na posicao "
                 << posicao << " eh " << numero << endl;

            posicao++;
        }

        numero++;
    }

    numero--;
    cout << "O primo 10001 eh " << numero;

    return 0;
}
