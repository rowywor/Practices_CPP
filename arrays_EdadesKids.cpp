// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		setlocale(LC_ALL, "spanish");
		int cantidad_ninos, nino_select;
		
		cout << "|||||||||||||||||||||||||" << endl;
		cout << "|||| EDADES DE NI�OS ||||" << endl;
		cout << "|||||||||||||||||||||||||" << endl;
		
		cout << "�De cuantos ni�os debemos saber su edad?: "; 
		cin >> cantidad_ninos;
		
		int x[cantidad_ninos];
		
		for(int i = 0; i < cantidad_ninos; i++) {
			cout << "Edad de ni�o "<< i+1 <<": ";
			cin >> x[i];
		}
		
		cout << "SELECCIONA EL NI�O DEL QUE DESEAS SABER SU EDAD: ";
		cin >> nino_select;
		
		cout << "***********************************" << endl;
		cout << "EDAD DEL NI�O: " <<nino_select<< " ---->>> " <<x[nino_select-1]<< endl;
		cout << "***********************************" << endl;
	}
