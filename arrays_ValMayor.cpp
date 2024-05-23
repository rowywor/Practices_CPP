// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		setlocale(LC_ALL, "spanish");
		int tamano, valor_mayor = 0;
		
		cout << "<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>" << endl;
		cout << "    VALOR MAYOR DEL ARREGLO <<>> IMPRIMIR   " << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>" << endl;
		
		cout << "Tamaño del arreglo: "; 
		cin >> tamano;
		
		int valor[tamano];
		
		for(int i = 0; i < tamano; i++) {
			cout << "VALOR "<< i+1 <<": ";
			cin >> valor[i];
			
				if(valor[i] > valor_mayor) {
					valor_mayor = valor[i];
				}
		}
		cout << endl;
		cout << "EL VALOR MAYOR DEL ARREGLO ES: "<<valor_mayor<<"." << endl;
	}
