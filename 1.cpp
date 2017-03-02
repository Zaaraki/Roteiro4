#include<iostream>

using namespace std;

int main(){
	int num, aux=0;
	while(num!=0){
		cout << "Digite um numero: ";	
		cin >> num;

		if(num>aux)
			aux=num;
	}

	cout << "O maior numero eh " << aux << endl;
	
	return 0;
}