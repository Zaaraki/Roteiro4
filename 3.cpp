#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
	int faces, num, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, i;
	srand(time(NULL));

	while(num !=0){
		cout << "Digite o numero de lancamentos do dado: ";
		cin >> num;
		for(i=0; i<num; i++){
			faces = rand() %6 + 1;
			cout << faces << endl;

			switch(faces){
				case 1: c1++;
					p1 = (c1*100)/6;
					break;
				case 2: c2++;
					p2 = (c2*100)/6;
					break;
				case 3: c3++;
					p3 = (c3*100)/6;
					break;
				case 4: c4++;
					p4 = (c4*100)/6;
					break;
				case 5: c5++;
					p5 = (c5*100)/6;
					break;
				case 6: c6++;
					p6 = (c6*100)/6;
					break;
			}

		}
		cout << endl;
		
	}
		cout << "Porcentage de surgimento de cada face" << endl;
		cout << "Face 1:" << p1 << "%%" << endl;
		cout << "Face 2:" << p2 << "%%" << endl;
		cout << "Face 3:" << p3 << "%%" << endl;
		cout << "Face 4:" << p4 << "%%" << endl;
		cout << "Face 5:" << p5 << "%%" << endl;
		cout << "Face 6:" << p6 << "%%" << endl;
	return 0;
}
