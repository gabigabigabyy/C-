#include <iostream>

using namespace std;

/* Desenvolva um algoritmo que leia um número qualquer e informe se o número é Harshard ou não.
 Um número Harshad é todo número que é divisível pela soma de todos os seus digitos.
  Ex: 201; a soma de todos os números de 201 é 3, sendo assim, 201 é Harshard porque 201 é divisível por 3.
  Para facilitar o algoritmo vamos definir que o tamanho de todos os números lidos serão de 3 digitos.*/

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
