#include <iostream>

using namespace std;

int main() {

	/*Os n�meros inteiros naturais abaixo de 10 que s�o m�ltiplos de 3 s�o: 3, 6 e 9.
	Se somarmos estes m�ltiplos temos 18.
	Fa�a um programa que ao ler um n�mero inteiro natural apresente os n�meros m�ltiplos
	de 3 menores que este n�mero, assim como a soma destes m�ltiplos.*/


	 int numero, soma = 0;


	 cout << "Digite um numero: " << endl;
	 cin >> numero;

	 for(int i = 0; i < numero; i++){
	 	if(i % 3 == 0){
	 		if (i != 0){

	 		cout << i << " eh um numero multiplo de 3 e menor que " << numero << endl;

	 		soma = soma + i;
	 		}
		 }
	 }

	cout << "valor total da soma dos multiplos de 3: " << soma << endl;

	return 0;
}
