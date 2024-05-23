// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		int contador, cantidad_datos, numero_mayor, numero_menor, new_menor, new_mayor, numero;
		
		cout << " || ----------------------------------------------------------------------- || " << endl;
		cout << "  Determinar cual es el mayor y cual es el menor de numeros enteros positivos  " << endl;
		cout << " || ----------------------------------------------------------------------- || " << endl;


		cout << "Cuantos numeros enteros positivos quieres ingresar? >>> "; cin >> cantidad_datos;
		while (cantidad_datos <= 0) {
			cout << "ERROR. Ingresa un numero valido." << endl;
		} 
		
		for (contador = 0; contador < cantidad_datos; contador++) {
			cout << "DATO "<< contador + 1 << ": "; cin >> numero;
			
			if (contador == 0) {
        	// Si es la primera iteracion, los 2 valores de comparacion y los 2 de dato final valen numero (NEW_MAYOR && NEW_MENOR && NUMERO_MAYOR && NUMERO_MENOR = NUMERO) //
        		new_mayor = numero; 
        		new_menor = numero;
        		numero_mayor = numero; 
        		numero_menor = numero; 
    		} 
			else {
        	// Si no es la primera iteracion, hace las comprobaciones/comparaciones de MENOR-MAYOR //
        		if (numero >= new_mayor) {
            		numero_mayor = numero; // NUEVO valor final actual //
            		new_mayor = numero; // NUEVO valor de comparacion //
        		}
        		if (numero <= new_menor) {
            		numero_menor = numero; // NUEVO valor final actual //
            		new_menor = numero; // NUEVO valor de comparacion //
        		}
			}
		}
		cout << "*********************************" << endl;
		cout << "ESTOS SON LOS RESULTADOS FINALES." << endl;
		cout << "*********************************" << endl;
			
		cout << "Numero MAYOR >>>> " << numero_mayor << endl;
		cout << "Numero MENOR >>>> " << numero_menor << endl;
	}
