// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		setlocale(LC_ALL, "spanish");
		int tamano, i, j;
		
		cout << "********************************************" << endl;
		cout << "     ARREGLO INVERTIDO & ARREGLO NORMAL     " << endl;
		cout << "********************************************" << endl;
		
		cout << "FAVOR DE PROPORCIONAR EL TAMAÑO DEL ARREGLO: "; 
		cin >> tamano;
		
		int a[tamano];
		int b[tamano];
		
		for(i = 0, j = tamano - 1; i < tamano; i++, j--) {
			cout << "DATO "<< i+1 <<": ";
			cin >> a[i];
			b[j] = a[i];
		}
		
		cout << endl;
		cout << "ARREGLO EN EL ORDEN CORRECTO:  " << endl;
		cout << "===============================" << endl;
		for(i = 0; i < tamano; i++) {
			cout << a[i] << " ";
		}
		
		cout << endl << endl;
		cout << "ARREGLO EN EL ORDEN INVERSO:  " << endl;
		cout << "++++++++++++++++++++++++++++++" << endl;
		for(i = 0; i < tamano; i++) {
			cout << b[i] << " ";
		}
	}
