// RowywoR //
#include <iostream>
#include <cstdlib>
using namespace std; 

	main() {
		setlocale(LC_ALL, "spanish");
		int tamano, continuar;
		
		cout << "จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ" << endl;
		cout << "              MANEJO DE ARREGLOS 2            " << endl;
		cout << "จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ" << endl;
		
		cout << "Tama๑o del arreglo: "; 
		cin >> tamano;
		
		int zeta[tamano];
		
		for(int i = 0; i < tamano; i++) {
			cout << "DATO "<< i+1 <<": ";
			cin >> zeta[i];
		}
		
	do {
		// CONTINUAR = 0 PARA REPETIR EL PROGRAMA "N" VECES //
		continuar = 0;
		
		cout << endl;
		cout << "ESTE ES EL ARREGLO ACTUAL: " << endl;
		for(int i = 0; i < tamano; i++) {
			cout << zeta[i] << " ";
		}
		
		int opcion, agregar, eliminar, indicador = tamano+1;
		
		cout << "\nฟDeseas insertar o borrar un dato del arreglo?" << endl;
		cout << "----------------------------------------------" << endl;
		cout << "        * Presiona 1 para INSERTAR.           " << endl;
		cout << "        * Presiona 2 para BORRAR.             " << endl;
		cout << " >>> "; cin >> opcion;
		
		switch(opcion) {
			case 1: 
				// IMPRIME EL ARREGLO PARA VISUALIZAR //
				cout << "ARREGLO ACTUAL: " << endl;
				for(int i = 0; i < tamano; i++) {
					cout << zeta[i] << " ";
				}
				
				// BUSCA AGREGAR EL VALOR, EN CASO DE ENCONTRAR UN ESPACIO VACIO (NULL) //
				cout << "\nIngresa el valor que deseas agregar: "; cin >> agregar;
				for(int i = 0; i < tamano; i++) {
					if(zeta[i] == NULL) {
						indicador = i; // INDICADOR PARA AGREGARLO //
					}
					if(i == indicador) {
						zeta[i] = agregar;
						cout << "\nSe ha a๑adido el valor en posicion: " << i+1 << endl;
						
						// ARREGLO CORREGIDO Y CON LA OPERACION REALIZADA EXITOSAMENTE //
						cout << "NUEVO ARREGLO: " << endl;
						for(int i = 0; i < tamano; i++) {
							cout << zeta[i] << " ";
						}
						break;
					}
				}
				
				// SI EL INDICADOR SIEMPRE FUE EL MISMO, POR ENDE, NO ENCONTRO EL VALOR VACIO (NULL) //
				if(indicador == tamano+1) {
					cout << "ERROR. No hay espacio en el arreglo." << endl;
				}
				indicador = tamano+1; // REGRESAMOS EL VALOR PREDETERMINADO //
			break;
			

			case 2:
				// IMPRIME EL ARREGLO PARA VISUALIZAR //
				cout << "ARREGLO ACTUAL: " << endl;
				for(int i = 0; i < tamano; i++) {
					cout << zeta[i] << " ";
				}
				
				// BUSCA EL VALOR A ELIMINAR, COINCIDENCIA CON ZETA[I], Y LO ELIMINA //
				cout << "\nIngresa el valor que deseas eliminar: "; cin >> eliminar;
				for(int i = 0; i < tamano; i++) { 
					if(zeta[i] == eliminar) {
						indicador = i; // INDICADOR PARA ANALIZAR SI SE REALIZO LA OPERACION O NO //
						zeta[i] = NULL;
						cout << "\nSe ha eliminado el valor en posicion: " << i+1 << endl;
						
							// RECORRE LOS VALORES DEL ARREGLO HACIA LA IZQUIERDA //
							for(i = indicador; i < tamano; i++) {
								zeta[i] = zeta[i+1];
							}
							// DETERMINAR QUE EL ULTIMO ESPACIO DEL ARREGLO, ESTE REALMENTE VACIO Y NO UN VALOR ALEATORIO //
							for(i = indicador; i < tamano; i++) {
								if(i = tamano-1) {
									zeta[i] = NULL;
								}
							}
						
						// ARREGLO CORREGIDO Y CON LA OPERACION REALIZADA EXITOSAMENTE //
						cout << "NUEVO ARREGLO: " << endl;
						for(int i = 0; i < tamano; i++) {
							cout << zeta[i] << " ";
						}
						break;
					}
				}
				
				// SI EL INDICADOR SIEMPRE FUE EL MISMO, POR ENDE, NO ENCONTRO COINCIDENCIAS //
				if(indicador == tamano+1){
					cout << "ERROR. No se encontro el valor en el arreglo." << endl;
				}
				indicador = tamano+1;
			break;
			
			
			default:
				cout << "OPCION NO VALIDA." << endl;
			break;
		}
		
		// OPCION PARA REGRESAR //
		cout << endl;
		cout << "*------------------------------------------------*" << endl;
		cout << "ฟDeseas regresar al MENU? (1 == SI | 2 == NO): "; cin >> continuar;
		system("cls");
		
		// EN CASO DE NO QUERER CONTINUAR //
		if(continuar == 2) {
			cout << "BYE BYE. =)" << endl;
		}
	} while(continuar == 1);
}
