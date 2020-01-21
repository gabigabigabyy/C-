#include <iostream>

using namespace std;
 // udhasuidas

int main()
{
    float numero;
    cout << " Digite quantos dias voce nao transa: ";
    cin >> numero;


    cout << " TRANSE URGENTE!" << endl;

    char simOunao;

    cout << " Conseguiu transar, Digite -s- para sim e -n- para nao?" << endl;

      cin >> simOunao;


    if (simOunao=='s'){
        cout << "AMEM ARROMBADA" << endl;
            }
    else if (simOunao=='n') {
        cout << " ABORDE O PRIMEIRO QUE PASSAR";
    }


    return 0;
}
