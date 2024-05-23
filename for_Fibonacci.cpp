// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		long long contador, alcance, pos_1 = 0, pos_2 = 1, pos_3;
		
		cout << "     ||||||||||||||||||||||||||||||     " << endl;
		cout << "   ||||||||||||||||||||||||||||||||||   " << endl;
		cout << " |||||||||||||||||||||||||||||||||||||| " << endl; 
		cout << "  LA FRECUENCIA DEL UNIVERSO: FIBONACCI " << endl;
		cout << " |||||||||||||||||||||||||||||||||||||| " << endl;
		cout << "   ||||||||||||||||||||||||||||||||||   " << endl;
		cout << "     ||||||||||||||||||||||||||||||     " << endl;

		cout << "EXTENSION del NUMERO AUREO --> (Introduce un numero): "; cin >> alcance;
		
		for (contador = 0; contador < alcance; contador++) {
			cout << pos_1 << " "; 	// Pos_1 = 0; Pos_2 = 1; Pos_3 = 1;
			pos_3 = pos_2 + pos_1;	// ---------- Pos_1 = 1; Pos_2 = 1; Pos_3 = 2;
			pos_1 = pos_2;		  	// --------------------- Pos_1 = 1; Pos_2 = 2; Pos_3 = 3;
			pos_2 = pos_3; 		  	// -------------------------------- Pos_1 = 2; Pos_2 = 3; Pos_3 = 5;
			// Recorriendo valores, mientras Pos_3 guarda la suma previa //
		}
	}
