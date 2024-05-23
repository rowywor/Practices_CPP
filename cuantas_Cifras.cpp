// RowywoR //
#include <iostream>
using namespace std;
int num;

	main() { 
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "VAMOS A IMPRIMIR LA CANTIDAD DE DIGITOS QUE TIENE TU NUMERO =)" << endl;
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "Puedes ingresar el numero a continuacion: "; cin >> num;
	
	if( num > 0 && num < 10 ) {
		cout << "Tu numero tiene un solo digito." << endl;
	}
	else if( num >= 10 && num <= 99 ) {
		cout << "Tu numero tiene dos digitos." << endl;
	}
	else if( num >= 100 && num <= 999 ) {
		cout << "Tu numero tiene tres digitos." << endl;
    }
    else if( num >= 1000 && num <= 9999 ) {
		cout << "Tu numero tiene cuatro digitos." << endl;
    }
    else if( num >= 10000 && num <= 32700 ) {
		cout << "Tu numero tiene cinco digitos." << endl;
    }
    else {
    	cout << "FIN DEL PROGRAMA. " << endl;
	}
}
