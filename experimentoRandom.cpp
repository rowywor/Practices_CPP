// RowywoR //
#include <iostream>
using namespace std;

void RemplazoAuxiliar(int n, int aux, int respaldo, int& a1, int& a2, int& a3, int& a4, int& a5, int& a6, int& a7, int& a8, int& a9, int& a10) {

n = respaldo;
do {

	aux = n % 2;
	n = n / 2;
			
	if(a10 == 2) {
		a10 = aux;
	}
	else if(a9 == 2) {
		a9 = aux;
	} 
	else if(a8 == 2) {
		a8 = aux;
	}
	else if(a7 == 2) {
		a7 = aux;
	}
	else if(a6 == 2) {
		a6 = aux;
	}
	else if(a5 == 2) {
		a5 = aux;
	}
	else if(a4 == 2) {
		a4 = aux;
	}
	else if(a3 == 2) {
		a3 = aux;
	}
	else if(a2 == 2) {
		a2 = aux;
	}
	else if(a1 == 2) {
		a1 = aux;
	}	
  } while(n > 0); 
}

void ValoresVaciosRetorno0(int& a1, int& a2, int& a3, int& a4, int& a5, int& a6, int& a7, int& a8, int& a9, int& a10) { 
 if(a1 == 2) {
	a1 = 0;	
	}
	if(a2 == 2) {
	a2 = 0;
	}
	if(a3 == 2) {
	a3 = 0;
	}
	if(a4 == 2) {
	a4 = 0;
	}
	if(a5 == 2) {
	a5 = 0;
	}
	if(a6 == 2) {
	a6 = 0;
	}
	if(a7 == 2) {
	a7 = 0;
	}
	if(a8 == 2) {
	a8 = 0;
	}
	if(a9 == 2) {
	a9 = 0;
	}
	if(a10 == 2) {
	a10 = 0;
	}
}

	main() {
		int n, aux, respaldo;
		int a1 = 2, a2 = 2, a3 = 2, a4 = 2, a5 = 2, a6 = 2, a7 = 2, a8 = 2, a9 = 2, a10 = 2;
			
		cout << "INGRESA NUMERO DECIMAL (LIMITE: 1023): " << endl;
		cin >> n;
		cout << endl;
		
		respaldo = n;
		
		do {

			aux = n % 2;
			n = n / 2;
			cout << aux;
			
		} while(n > 0);
		cout << "\n---------------------------" << endl;
		cout << "NUMERO EN BINARIO (INVERSO)" << endl;
		cout << endl;
		
		RemplazoAuxiliar(n, aux, respaldo, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		ValoresVaciosRetorno0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
				
		cout << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << endl;
		cout << "---------------------------" << endl;
		cout << "NUMERO EN BINARIO (ORDENADO)" << endl;
		cout << endl;
}
