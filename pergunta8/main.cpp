
#include <iostream>
#include <string>

using namespace std;

int main()
{
   // Desenvolva um programa que leia n�meros em uma matriz quadr�tica de terceira ordem (3 linhas x 3 colunas)
   // e apresente os n�meros lidos que s�o menores que a m�dia de todos os n�meros armazenados na matriz

   int i[3][3];
   int media = 0, num = 1;

   for(int l = 0; l < 3; l++){
   		for(int c = 0; c < 3; c++){
   			i[l][c] = num;

   			media = media + i[l][c];

			   num++;

		   }
   }
      for(int l = 0; l < 3; l++){
   		for(int c = 0; c < 3; c++){
			cout << i[l][c] << " ";
		   }
		   cout << " \n";
   }

   media = media / 9;

         for(int l = 0; l < 3; l++){
   		for(int c = 0; c < 3; c++){
			if(i[l][c] < media){
				cout << i[l][c] << " - numero da linha " << l + 1 << " e coluna " << c + 1 << " eh menor que a media = " << media << endl;
			}
		   }

   }





}
