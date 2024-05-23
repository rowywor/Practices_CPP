// RowywoR //
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

	main() {
		setlocale(LC_ALL, "spanish");
		int tamano, band;
		
		cout << "|||||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << " Obtener posición de un valor del arreglo. " << endl;
		cout << "|||||||||||||||||||||||||||||||||||||||||||" << endl;
		
		cout << "Inserte el tamaño del arreglo: "; 
		cin >> tamano; 
		
		int z[tamano]; // Cantidad de valores/espacios en Z //
		srand(time(0)); // Semilla usando funcion de ctime //
		
		for(int pos = 0; pos < tamano; pos++) {
			z[pos] = rand() % 10; // Genera valores aleatorios delimitados por % para menor tamaño del valor //
		}
		
		do {
			band = 0; // En cada vuelta, band regresa a "O", para evitar un error al ingresar un valor correcto dentro del arreglo //
			system("cls"); // Limpia pantalla por estetica //
			
			cout << "ESTOS SON LOS VALORES DE TU ARREGLO: " << endl;
			for(int pos = 0; pos < tamano; pos++) {
				cout << z[pos] << " ";
			}
		
			int select; // Valor a buscar //
		
			cout << endl;
			cout << "*************************************************************" << endl;
			cout << "Inserte el valor, para saber su posicion en el ARREGLO >> "; cin >> select;
			cout << endl;
		
			int valor_encontrado; // Comodin en caso de que no exista en el arreglo //
			int tamano_anterior = tamano; // Comodin para almacenar tamaño, y usar tamaño para detener en caso de encontrar valor //
		
			for(int pos = 0; pos < tamano; pos++) {
				if(select == z[pos]) {
					cout << "El primer valor seleccionado >> " << select << " << se encuentra en la posicion "<< pos+1 <<". =)" << endl;
					valor_encontrado = select; // Se almacena para evitar que se cumpla "IF" no encontrado //
					tamano = 0; // Evitar que continue una vez encontrado el valor //
				}
			}
			
			tamano = tamano_anterior; // regreso el valor de tamano, para uso del siguiente for //
			
			for(int pos = tamano-1; pos >= 0; pos--) {
				if(select == z[pos]) {
					cout << "El ultimo valor seleccionado >> " << select << " << se encuentra en la posicion "<< pos+1 <<". =)" << endl;
					pos = 0; // Evitar la continuacion del For //
				}
			}
			
			if(valor_encontrado == select) { // Condicional para que solo imprima el texto "todos" si comodin valor_encontrado es igual al numero a buscar //
				cout << "ESTOS SON TODOS LOS VALORES ENCONTRADOS DEL NUMERO INGRESADO DEL ARREGLO: " << endl;
					for(int pos = 0; pos < tamano; pos++) {
						if(select == z[pos]) {
						cout << " -----------> " << select << " en posicion "<< pos+1 <<"." << endl;
						}
					}
			}
			
			if(valor_encontrado != select) { // Como no se cumplio "Select == Z[pos]", son diferentes, por ende, no se encontro el valor en arreglo //
				cout << "Tu numero " << select << " no existe en el arreglo (ERROR_NOT_FOUND)" << endl;
				cout << "¿Deseas volver a intentarlo? (1 = SI | 2 = NO): "; cin >> band;
		
				if(band == 2) { // En caso de no continuar //
					cout << "HASTA LUEGO >:D" << endl;
				}
			}
			
		} while(band == 1); // En caso de continuar, se repite desde "DO", el programa termina si el valor es encontrado porque BAND = 0 //
	}
