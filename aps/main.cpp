#include <iostream>

using namespace std;

/* Desenvolva um algoritmo que leia um n�mero qualquer e informe se o n�mero � Harshard ou n�o.
 Um n�mero Harshad � todo n�mero que � divis�vel pela soma de todos os seus digitos.
  Ex: 201; a soma de todos os n�meros de 201 � 3, sendo assim, 201 � Harshard porque 201 � divis�vel por 3.
  Para facilitar o algoritmo vamos definir que o tamanho de todos os n�meros lidos ser�o de 3 digitos.*/

int main()
{
    int numero, numeroinicial, digito1, digito2, digito3, auxiliar=numero;
    cout << " Insira um numero de 3 digitos: "<< endl;
    cin >> numero;
    numeroinicial=numero;
    digito1 = numero / 100;
    numero = numero - (digito1*100);
    digito2 = numero/10;
    digito3 = numero - digito2 * 10;
    cout<< " Primeiro digito: " << digito1 <<endl;
    cout << " Segundo digito: " << digito2 << endl;
    cout<< " Terceiro digito: " << digito3 << endl;

    int divisor = digito1 + digito2 + digito3;
    cout << " Soma dos digitos: "<< divisor << endl<< endl;

         if ( numeroinicial % divisor == 0){
        cout << " Este numero eh Hashard!!"<< endl;
     }
else {
    cout << " Nao eh numero Hashard!!";
}


    return 0;
}
