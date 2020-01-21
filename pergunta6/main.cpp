#include <iostream>

using namespace std;
//Desenvolva um programa que recebe 3 números quaisquer em qualquer ordem e apresente estes números em ordem descrecente.

int n1, n2, n3, temporario;
int main()
{
    cout << "insira um numero: " << endl;
    cin >> n1;
    cout << "insira outro numero: " << endl;
    cin >> n2;
    cout << "insira outro numero: " << endl;
    cin >> n3;

       if ( n1>n2) {
            temporario = n1;
            n1 = n2;
            n2 = temporario;
        }
      if ( n2>n3) {
            temporario = n2;
            n2=n3;
            n3=temporario;
    }
     if ( n1>n3) {
            temporario = n1;
            n1 = n2;
            n2 = temporario;
     }

        cout << n3 << ","<< n2 << ","<<  n1;
    return 0;
}
