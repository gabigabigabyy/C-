#include <iostream>

using namespace std;

double largura, comprimento, rodape, piso;
int main()
{
    cout << "Insira a largura da casa em metros:"<< endl;
    cin >> largura;
    cout<< " Insira o comprimento da casa em metros: " << endl;
    cin >> comprimento;

    rodape = largura+comprimento;
    cout << " Sera necessario: " << rodape<<" metros de rodape!"<< endl;
    piso = largura*comprimento;
    cout << " Sera necessario " << piso<< " metros quadrados de piso";



}
