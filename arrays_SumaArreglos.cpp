// RowywoR //
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

	main() {
		setlocale(LC_ALL, "spanish");
		int tamano;
		
		cout << "|||||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
		cout << "           SUMATORIA DE ARREGLOS           " << endl;
		cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
		cout << "|||||||||||||||||||||||||||||||||||||||||||" << endl;
		
		cout << "TAMAÑO DEL ARREGLO: "; 
		cin >> tamano;
		
		int arreglo_UNO[tamano];
		int arreglo_DOS[tamano];
		
		srand(time(0)); // Semilla usando funcion de ctime //
		
		for(int indice = 0; indice < tamano; indice++) {
			arreglo_UNO[indice] = rand() % 500; // Genera valores aleatorios //
			arreglo_DOS[indice] = rand() % 500; // Delimitadas de 0 a 499 por %, dando el residuo del numero aleatorio, para que no sean tan grandes los valores //
		}
		
		cout << "\n________________________________" << endl;
		cout << "ARREGLO 1: " << endl;
			for(int indice = 0; indice < tamano; indice++) {
				cout << arreglo_UNO[indice] << " ";
			}
		cout << "\n________________________________" << endl;
		cout << "ARREGLO 2: " << endl;
			for(int indice = 0; indice < tamano; indice++) {
				cout << arreglo_DOS[indice] << " ";
			}
		
		int arreglos_SUMA[tamano];
		
		cout << endl;
		cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
		cout << "SUMATORIA DE AMBOS ARREGLOS: " << endl;
		cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
			for(int indice = 0; indice < tamano; indice++) { // Arreglos_SUMA en Posicion 0 es la suma de Arreglo1 y Arreglo2 en posicion 0//
				arreglos_SUMA[indice] = arreglo_UNO[indice] + arreglo_DOS[indice];
				cout << arreglos_SUMA[indice] << " ";
			}	
	}
