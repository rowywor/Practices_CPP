// RowywoR //
#include <iostream>
using namespace std;
int hrs, ampm, decision;

	main() { 
	
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "==============================================================" << endl;
	cout << "         ME PREGUNTO QUE HORA ES, EN ESTE MOMENTO...          " << endl;
	cout << "==============================================================" << endl;
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	
	cout << "\nTU LO SABES? (1 = Si | 2 = No): "; cin >> decision;
	
	if(decision == 1) {
		cout << "OH! DIME LA HORA POR FAVOR (00 - 23): "; cin >> hrs;
		
		if(hrs >= 0 && hrs <= 12) {
			cout << "ES MUY TEMPRANO..." << endl;
		}
		else if(hrs >= 13 && hrs <= 23) {
			cout << "YA ES TARDE..." << endl;
		}
		else {
			cout << "NO CREO QUE ESA HORA EXISTA =(, ADIOS..." << endl;
		}
		
		
			if(hrs == 0 && hrs < 24) {
				ampm = 12;
				cout << "ENTONCES "<<hrs<<" HRS, ES IGUAL A "<<ampm<<" AM. GRACIAS!" << endl;
			}
			else if(hrs == 12 && hrs < 24) {
				ampm = 12;
				cout << "ENTONCES "<<hrs<<" HRS, ES IGUAL A "<<ampm<<" PM. GRACIAS!" << endl;
			}
			else if(hrs >= 1 && hrs <= 11) {
				ampm = hrs;
				cout << "ENTONCES "<<hrs<<" HRS, ES IGUAL A "<<ampm<<" AM. GRACIAS!" << endl;
			}
			else if(hrs >= 13 && hrs <= 23) {
				ampm = hrs - 12;
				cout << "ENTONCES "<<hrs<<" HRS, ES IGUAL A "<<ampm<<" PM. GRACIAS!" << endl;
			}
	}
	
	
	else if(decision == 2) {
		cout << "BUENO... GRACIAS DE TODOS MODOS!" << endl;
	}
	else {
		cout << "Entrada no valida. Fin del programa..." << endl;
	}
	
	
}
