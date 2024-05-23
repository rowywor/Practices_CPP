// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		int cuantosNUM, numero, total = 0;
		
		cout << "  |||||||||||||||||||||||||   " << endl; 
		cout << "***************************** " << endl; 
		cout << "--- NUMEROS PARES CON FOR --- " << endl;
		cout << "***************************** " << endl;
		cout << "  |||||||||||||||||||||||||   " << endl; 
		
		cout << "Cuantos numeros enteros vas a ingresar? >>> "; cin >> cuantosNUM;
		cout << "INGRESA LOS NUMEROS A CONTINUACION: " << endl;
		
		for (int contar = 0; contar < cuantosNUM; contar++) {
			cout << " >>> "; cin >> numero;
			
			if (numero % 2 == 0) {
				total++;
				}
			}
			
			cout << "El total de numeros pares fue = "<<total<<"." << endl;
		}
