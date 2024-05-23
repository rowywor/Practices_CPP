// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		setlocale(LC_ALL, "spanish");
		int tamano, valor, cantidad_pares = 0, cantidad_impares = 0, suma_par = 0, multi_impar = 1;
		
		cout << "********************************************" << endl;
		cout << "     Acomodo de numeros pares e impares     " << endl;
		cout << "********************************************" << endl;
		
		cout << "Tamaño del arreglo: "; 
		cin >> tamano;
		
		int todos[tamano];
		int par[tamano];
		int impar[tamano];
		
		for(int i = 0; i < tamano; i++) {
			cout << "Numero "<< i+1 <<": ";
			cin >> valor;
			todos[i] = valor;
			
				if(valor % 2 == 0) {
					par[cantidad_pares] = valor;
					cantidad_pares++;
				}
				else if(valor % 2 != 0){
					impar[cantidad_impares] = valor;
					cantidad_impares++;
				}
		}
		
		cout << endl;
   		cout << "Arreglo de todos los numeros ingresados: " << endl;
    	for (int i = 0; i < tamano; i++) {
        	cout << todos[i] <<" ";
    	}
		
		cout << endl;
		cout << "Arreglo de numeros pares: " << endl;
		for(int i = 0; i < cantidad_pares; i++) {
			cout << par[i] <<" ";
			suma_par = suma_par + par[i];
		}
		
		cout << endl;
		cout << "Arreglo de numeros impares: " << endl;
		for(int i = 0; i < cantidad_impares; i++) {
			cout << impar[i] <<" ";
			multi_impar = multi_impar * impar[i];
		} 
		
		cout << endl << endl;
		cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
		cout << "SUMA DE LOS NUMEROS PARES: " << suma_par << "." << endl;
		cout << "MULTIPLICACION DE LOS NUMEROS IMPARES: " << multi_impar << "." << endl;
		cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;	
			
	}
