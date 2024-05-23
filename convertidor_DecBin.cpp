// RowywoR //
#include <iostream>
#include <string>
using namespace std; 

	main() {
    	int n;
    	string numero_binario, resultado_final;
    
    	cout << "*************************************************************** " << endl;
    	cout << " ------------- INGRESA UN NUMERO ENTERO DECIMAL -------------- " << endl; 
    	cout << "*************************************************************** " << endl;
    	cout << " >>> "; cin >> n;
    	cout << endl;
    
    	do {
        	
        	if (n % 2 == 0) {
        		numero_binario = "0"; // N % 2 = 0
        		resultado_final = numero_binario + resultado_final;
        	}
        	else {
        		numero_binario = "1"; // N % 2 = 1
        		resultado_final = numero_binario + resultado_final; 
			}
			
        	n = n / 2; // DIVIDE HASTA QUE LLEGUE A 0
        	
    	} while(n != 0);
    	
    	cout << "############################################################### " << endl;
    	cout << "----------------- CONVERSION A NUMERO BINARIO ----------------- " << endl;
    	cout << "############################################################### " << endl;
    	cout << " === " <<resultado_final;
    	
	}
