// RowywoR //
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
	// INICIO //
	main() {
		
		int eleccion_primaria;
		do {
		
		eleccion_primaria = 0;
		system("cls");
		setlocale(LC_ALL, "spanish");
		srand(time(0));
		// PRESENTACION //
		cout << "  /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/  " << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << "          << MANEJO CON ARREGLOS >>        " << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/  " << endl;
		cout << endl;
		// INTRODUCCION Y ELECCION //
		int eleccion;
		cout << "Se generara un arreglo aleatorio y se buscaran estos valores: " << endl;
			cout << "-----> { Mostrar todo el arreglo. }" << endl;
			cout << "-----> { Cantidad de elementos pares del arreglo. }" << endl;
			cout << "-----> { Cantidad de elementos impares del arreglo. }" << endl;
			cout << "-----> { Suma de todos los Pares. }" << endl;
			cout << "-----> { Suma de todos los Impares. }" << endl;
			cout << "-----> { Posición y valor del Mayor número Par. }" << endl;
			cout << "-----> { Posición y valor del Menor número impar. }" << endl;
			cout << "***************************************************" << endl;
			cout << endl;
		
		cout << "¿DESEAS CONTINUAR? (1 === SI | 2 === NO): "; cin >> eleccion;
		// INICIO DE RESOLUCIONES //
		if(eleccion == 1) {
		
		system("cls");
		int longitud = 20;
		int alpha[longitud];
		
		// VALORES "RANDOM" DELIMITADOS POR RESIDUO //
		for(int z = 0; z < longitud; z++) {
			alpha[z] = rand() % 10;
		}
		
			// IMPRIMIR EL ARREGLO COMPLETO //
			cout << "ESTE ES EL ARREGLO ALEATORIO ACTUAL: " << endl;
			for(int z = 0; z < longitud; z++) {
				cout << alpha[z] <<" | ";
			}
			
			// IMPRIME SOLO SI LOS VALORES DEL ARREGLO, SON PARES //
			cout << endl << endl;
			cout << "ELEMENTOS PARES DEL ARREGLO: " << endl;
			for(int z = 0; z < longitud; z++) {
				if(alpha[z] % 2 == 0) {
					cout << alpha[z] <<" | "; 
				}
			}
			
			// IMPRIME SOLO SI LOS VALORES DEL ARREGLO, SON IMPARES //
			cout << endl << endl;
			cout << "ELEMENTOS IMPARES DEL ARREGLO: " << endl;
			for(int z = 0; z < longitud; z++) {
				if(alpha[z] % 2 == 1) {
					cout << alpha[z] <<" | ";
				}
			}
			
			// SI LOS VALORES DEL ARREGLO SON PARES, SUMA ESE VALOR AL ACUMULADO "SUMA_PARES" //
			cout << endl << endl;
			int suma_pares = 0;
			cout << "SUMA DE TODOS LOS ELEMENTOS PARES: ";
			for(int z = 0; z < longitud; z++) {
				if(alpha[z] % 2 == 0) {
					suma_pares += alpha[z];
				}
			}
			cout << suma_pares << endl;
			
			// SI LOS VALORES DEL ARREGLO SON IMPARES, SUMA ESE VALOR AL ACUMULADO "SUMA_IMPARES" //
			int suma_impares = 0;
			cout << "SUMA DE TODOS LOS ELEMENTOS IMPARES: ";
			for(int z = 0; z < longitud; z++) {
				if(alpha[z] % 2 == 1) {
					suma_impares += alpha[z];
				}
			}
			cout << suma_impares << endl << endl;
			
			// SI EL VALOR EL PAR Y SI ES MAYOR AL MAYOR PREDETERMINADO, SE REEMPLAZA POR EL NUEVO MAYOR //
			int pos;
			int mayor = 0;
			cout << "POSICION Y VALOR DEL MAYOR NUMERO PAR: " << endl;
			for(int z = 0; z < longitud; z++) {
				if(alpha[z] % 2 == 0) {
					if(alpha[z] > mayor) {
						mayor = alpha[z];
					}
				}
			}		// YA QUE TENEMOS EL MAYOR PAR, BUSCARA EL PRIMERO EN CASO DE REPETIRSE Y SE DETENDRA //
					for(int z = 0; z < longitud; z++) {
						if(mayor == alpha[z]) {
							pos = z+1;
							z = 21;
						}
					}
					cout << "Valor mayor: " << mayor << " | ";
					cout << "Posicion en: " << pos << endl << endl;
			
			// SI EL VALOR EL IMPAR Y SI ES MENOR AL MENOR PREDETERMINADO, SE REEMPLAZA POR EL NUEVO MENOR //
			pos = 0;
			int menor = mayor;
			cout << "POSICION Y VALOR DEL MENOR NUMERO IMPAR: " << endl;
			for(int z = 0; z < longitud; z++) {
				if(alpha[z] % 2 == 1) {
					if(alpha[z] < menor) {
						menor = alpha[z];
					}
				}
			}		// YA QUE TENEMOS EL MENOR IMPAR, BUSCARA EL PRIMERO EN CASO DE REPETIRSE Y SE DETENDRA //
					for(int z = 0; z < longitud; z++) {
						if(menor == alpha[z]) {
							pos = z+1;
							z = 21;
						}
					}
					cout << "Valor menor: " << menor << " | ";
					cout << "Posicion en: " << pos << endl;	
		}	
		
		// CONDICIONAL PARA CUMPLIR EL "WHILE" DE INICIO DE PROGRAMA //
		if(eleccion == 1) {
		cout << endl;
		cout << "¿DESEAS REINICIAR? (1 === SI | 2 === NO): "; cin >> eleccion_primaria;
		}
		
		// CONDICIONAL PARA CUMPLIR EL "WHILE" Y LA CONDICION DE CONTINUAR DE INICIO DE PROGRAMA //
		if(eleccion == 2 || eleccion_primaria == 2) {
			cout << "\n¡Hasta la proxima! :)" << endl;
		}
		
	} while(eleccion_primaria == 1);
} // FINAL //
