// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		setlocale(LC_ALL, "spanish");
		int longi;
		
		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
		cout << "   PALINDROMO: PALABRA DERECHO Y ALREVES.. " << endl;
		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
		
		cout << "Tamaño de la palabra palindromo: "; 
		cin >> longi;
		
		int sen;
		char palindromo[longi];
		
		cout << "<<<< Ingresa a continuacion, las letras del palindromo >>>>" << endl;
		for(int x = 0; x < longi; x++) {
			cout << "LETRA " << x + 1 <<": "; cin >> palindromo[x];
		}
		
		for(int x = 0, y = longi-1; x < longi; x++, y--) {
			if(palindromo[x] == palindromo[y]) {
				sen++;
			}
		}
		
		cout << "TU PALABRA ES: " << endl;
		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
		for(int x = 0; x < longi; x++) {
			cout << palindromo[x];
		}
		
		cout << endl;
		if(sen == longi) {
			cout << "Tu palabra es un PALINDROMO: Palabra que se lee al derecho y al reves igual :))" << endl;
		}
		else {
			cout << "Tu palabra NO ES UN PALINDROMO :((" << endl;
			cout << "(Asegurate de que sean todas minusculas o todas mayusculas)" << endl;
		}
		
	}
