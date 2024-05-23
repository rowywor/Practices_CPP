// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		int number, find_primo, counter = 0;
		
		cout << "        /////////////         " << endl;  
		cout << "     ///////////////////      " << endl;
		cout << "  /////////////////////////   " << endl; 
		cout << "----   NUMEROS--PRIMOS   ---- " << endl;
		cout << "  /////////////////////////   " << endl;
		cout << "     ///////////////////      " << endl;
		cout << "        /////////////         " << endl;  
		cout << endl;
		
		cout << "Ingresa un numero para averiguar si es primo..." << endl;
		cout << " >>> "; cin >> number;
		
		for (find_primo = 1; find_primo <= number; find_primo++) {
			
			// SI NO TIENE RESIDUO && EJEMPLO: 11/11=1 || EJEMPLO: 11/1 = 11 //
			if (number%find_primo == 0 && (number/number == 1 || number/find_primo == number)) {
				counter++;
				cout << "DIVISIBLE 100% >> entre: "<< find_primo <<" ===== CORRECTO. " << endl;
			} 
			else {
				cout << "DIVISIBLE 100% >> entre: "<< find_primo <<" ===== ERROR. " << endl;
			}
		}	
		// NO HAY NUMERO QUE: NO SEA PRIMO Y QUE TENGA SOLO 2 DIVISORES: COUNTER VALIDACION //
		if (counter == 2) {
			cout << "Tu numero es: <<< PRIMO >>>." << endl;
			cout << "\n''''NOTA: Un numero primo tiene exactamente dos divisores: 1 y el mismo.''''"; 
		} 
		else {
			cout << "Tu numero NO ES PRIMO." << endl;
		}
	}
