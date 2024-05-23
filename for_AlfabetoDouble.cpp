// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		char contar, alfa = 90, convertir;
		
		cout << "  |||||||||||||||||||||||||   " << endl; 
		cout << "***************************** " << endl;
		cout << "A L F A B E T O ( Aa Bb Cc..) " << endl;
		
		for (contar = 65; contar <= alfa; contar++) {
			cout << contar;
			convertir = contar + 32;
			cout << convertir << " ";
		}
	}
