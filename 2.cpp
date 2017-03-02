#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (){

	srand(time(NULL));
	int num=0, random;

	random = rand() % 100 + 1; //RAND DE 1 A 100

	cout << "--- Adivinhe o numero de 0 a 100 ---" << endl;
	

	while(true){

		cout << "Digite um numero :";
		cin >> num;

		if(num < random){
			cout<< "Muito baixo. Tente novamente" << endl;
		}

		else if(num > random){
			cout<< "Muito alto. Tente novamente"  << endl;
		}

		else{
			cout << "Parabens! Voce acertou o numero" << endl;
			break;
		}
		
	}


	cout << random;

	return 0;
}