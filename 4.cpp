#include <iostream>

using namespace std;

float porc(int nJ, int nT){
	float p=(nJ*100.0)/nT;
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

	cout << endl;
	cout << "---------------------" <<endl;
	cout << "Resultado da votacao" << endl;

	cout << "Foram computados " << tVotos << " votos." << endl;

	if(tVotos == 0)
		cout << "Nao houve quorum" << endl;

	else{
		cout << "Jogador    Votos    %"<<endl;

		for(i=0; i<23; i++){
			if(jog[i]!=0){
				cout << i << "           " << jog[i] << "         " << porc(jog[i], tVotos) << endl;
			}
		}
		
	}	

	return 0;
}