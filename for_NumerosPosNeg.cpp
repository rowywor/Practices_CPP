// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		int contador, numero, numero_neg = 0, numero_pos = 0, div;
		
		cout << " ||||||||||||||||||||||||||||||| " << endl; 
		cout << " SUMA DE NEG --- PROMEDIO DE POS " << endl;
		cout << " ||||||||||||||||||||||||||||||| " << endl;

		
		for (contador = 0; contador < 6; contador++) {
			cout << "Numero " <<contador+1<< ": "; cin >> numero;
			
			if(numero < 0) {
				numero_neg += numero;
			}
			else {
				numero_pos += numero;
				div++;
			}
		}
		if (numero_pos > 0) {
			numero_pos = numero_pos / div;
		}
		cout << "La suma de negativos es: "<< numero_neg << endl;
		cout << "El promedio de positivos es: "<< numero_pos << endl;
	}
