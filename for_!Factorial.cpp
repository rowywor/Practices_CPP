// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		long long dato_uso, factorial;
		
		cout << "   B U C L E   F O R  " << endl;
		cout << "         ####         " << endl;
		cout << "         ####         " << endl;
		cout << "         ####         " << endl;
		cout << "         ####         " << endl;
		cout << "         ####         " << endl;
		cout << "          ##          " << endl;
		cout << "                      " << endl; 
		cout << "          ##          " << endl; 
		cout << "         ####         " << endl;
		cout << "         ####         " << endl; 
		cout << "   F A C T O R I A L  " << endl;
		cout << endl;
		
		cout << "Ingresa un numero para saber el factorial del mismo..." << endl;
		cout << " >>> "; cin >> dato_uso;
		
		factorial = dato_uso;
		
		for (int x = 1; x < dato_uso; x++) {
			factorial = factorial * x;
			cout << "----> " << x <<" x "<< dato_uso <<" ===== "<< factorial << endl; 
		}	
		
		cout << "-------------------------------------------------------------------" << endl;
		cout << "EL FACTORIAL DE "<< dato_uso <<" ES IGUAL A >>> ( "<< factorial <<" ) <<<";
		
		cout << "\nNota: !Factorial de un numero es:  ";
		for (int x = dato_uso; x >= 1; x--) {
			cout <<dato_uso<<"*";
			dato_uso -= 1; 
		}
	}
