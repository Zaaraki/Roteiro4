#include <iostream>

using namespace std;

float porc(int nJ, int nT){
	p=(nJ*100.0)/nT;
	return p;
}

int main(){

	int jog[23], voto, tVotos=0, cont=0, i;

	for(i=0; i<23; i++){
		jog[i]=0;
	}

	cout << "Enquete: Quem foi o melhor jogador?" << endl;

	while(true){
		cout << "Numero do jogador (0=fim): ";
		cin >> voto;

		if(voto>23)
			cout << "Informe um valor entre 1 e 23 ou 0 para sair!" << endl;

		else if (voto == 0)
			break;

		else{
			jog[voto]++;
			tVotos++;
		}
	}


	cout << "Resultado da votação" << endl;

	cout << "Foram computados " << tVotos << " votos." << endl;

	cout << "Jogador    Votos    %"<<endl;


	return 0;
}