#include <iostream>

using namespace std;
/*Desenvolva um programa que receba o valor de pagamento de uma compra e imprima o percentual, o valor de desconto e valor final conforme a tabela abaixo:

- menor ou igual a R$ 1000,00 – 5% de desconto;

- maior que R$ 1000,00 e menor ou igual a R$ 2000,00 – 10% de desconto;

- maior que R$ 2000,00 e menor ou igual a R$ 4000,00 – 15% de desconto;

- maior que R$ 4000,00 – 18% de desconto.*/


int main()
{
    double valor, desconto1=0.05, desconto2=0.1, desconto3=0.15, desconto4=0.18;

    cout << " Valor do Produto: ";
    cin >> valor;

    if ( valor <= 1000){
            valor= valor - (valor*desconto1);

    cout << " Valor com desconto de 5%: " << valor<<  endl;

    }
    if ( valor > 1000 && valor <= 2000){
        valor = valor - ( valor*desconto2);

        cout << " Valor com desconto de 10%: " << valor<< endl;
    }
    if ( valor > 2000 && valor <= 4000){
        valor = valor - (valor*desconto3);

        cout<< "Valor com desconto de 15%: " << valor<< endl;
    }
    else {
            ( valor = valor - (valor*desconto4));
            cout << " Valor com desconto maximo de 18%: " << valor;
    }
    return 0;
}
