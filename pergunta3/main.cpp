#include <iostream>

using namespace std;

int main() {

	/*Os números inteiros naturais abaixo de 10 que são múltiplos de 3 são: 3, 6 e 9.
	Se somarmos estes múltiplos temos 18.
	Faça um programa que ao ler um número inteiro natural apresente os números múltiplos
	de 3 menores que este número, assim como a soma destes múltiplos.*/


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
