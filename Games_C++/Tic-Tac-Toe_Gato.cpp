// RowywoR //
// TIC-TAC-TOE_GATO //
int Cruz_Circulo(int, int, char[][3]); // Un valor para pedir posicion, y arreglo bidimensional //
void Imprimir(char[][3]);
bool Jugadas(bool, char[][3]);

#include <iostream>
#include <cstdlib>
#include <windows.h>
#define BRILLO "\x1b[97m"
#define ROJO "\x1b[31m"
#define VERDE "\x1b[32m"
using namespace std;

	main() {
		int turno = 0;
		char opc = '0';
		char Gato[3][3];
		bool final = false;
		
		// Generar valores del 1 al 9 para cada espacio (En CHAR). //
		int valor = 1;
		for(int z = 0; z < 3; z++) {
			for(int x = 0; x < 3; x++) {
				Gato[z][x] = valor+'0';
			valor++;
			}
		}
		
		// Rondas del juego. //	
		for(int y = 0; y < 10; y++) {
		// Tablero del Gato. //
		Imprimir(Gato);
		// Se asigna a "comprobar", el valor retornado del booleano en "Jugadas()"; //
		bool comprobar = Jugadas(final, Gato);	
		
		if(comprobar == true) {
			cout << BRILLO <<"............................" << endl;
			cout << "F I N    D E L    J U E G O." << endl;
			cout << "''''''''''''''''''''''''''''" << endl;
			break;
		}	
			
		if(turno % 2 == 0) {
			cout << BRILLO << "TURNO DE LAS << X >>" << endl;
			cout << "*-----------------------*" << endl;
		}
		if(turno % 2 != 0) {
			cout << BRILLO << "TURNO DE LOS << O >>" << endl;
			cout << "*-----------------------*" << endl;
		}
			cout << "Donde quieres colocar tu signo: ";
			cin >> opc;
			Cruz_Circulo(turno, opc, Gato);
		turno++;
	}
}

// FUNCION: Imprimir 'X' o 'O' segun sea el caso. //
int Cruz_Circulo(int turno, int opc, char Gato[][3]) {
	for(int z = 0; z < 3; z++) {
		for(int x = 0; x < 3; x++) {
			if(opc == Gato[z][x]) {
				if(turno % 2 == 0) {
					Gato[z][x] = 'X'; // Jugador 1 //
				}
				if(turno % 2 != 0) {
					Gato[z][x] = 'O'; // Jugador 2 //
				}
			}
		}
	}
}

// FUNCION: Posibles jugadas. //
bool Jugadas(bool final, char Gato[][3]) {
	// Posibles ganar. //
			for(int i = 0; i < 3; i++) { 
			// Horizontales y verticales == X. //
				if(Gato[i][0] == 'X' && Gato[i][1] == 'X' && Gato[i][2] == 'X' || Gato[0][i] == 'X' && Gato[1][i] == 'X' && Gato[2][i] == 'X') {
				cout << VERDE << "\nGANA << X >> !" << endl;
				final = true;
			}
			// Horizontales y Verticales == O. //
				if(Gato[i][0] == 'O' && Gato[i][1] == 'O' && Gato[i][2] == 'O' || Gato[0][i] == 'O' && Gato[1][i] == 'O' && Gato[2][i] == 'O') {
				cout << VERDE << "\nGANA << O >> !" << endl;
				final = true;
			}
			//  Diagonales == X. //
				if(Gato[i][0] == 'X' && Gato[i+1][1] == 'X' && Gato[i+2][2] == 'X' || Gato[0][i+2] == 'X' && Gato[1][i+1] == 'X' && Gato[2][i] == 'X') {
				cout << VERDE << "\nGANA << X >> !" << endl;
				final = true;	
			}
			//  Diagonales == O. //
				if(Gato[i][0] == 'O' && Gato[i+1][1] == 'O' && Gato[i+2][2] == 'O' || Gato[0][i+2] == 'O' && Gato[1][i+1] == 'O' && Gato[2][i] == 'O') {
				cout << VERDE << "\nGANA << O >> !" << endl;
				final = true;	
			}
		}
	return(final);
}

// FUNCION: Imprimir el Gato. //
void Imprimir(char Gato[][3]) {
	system("cls");
	cout << "|||||||||||||    |||||||||||||    |||||||||||||" << endl;
	cout << "|||       |||    |||       |||    |||       |||" << endl;
	cout << "|||   "<< VERDE << Gato[0][0] << BRILLO <<"   |||    |||   "<< ROJO << Gato[1][0] << BRILLO <<"   |||    |||   "<< VERDE << Gato[2][0] << BRILLO <<"   |||" << endl;
	cout << "|||       |||    |||       |||    |||       |||" << endl;
	cout << "|||||||||||||    |||||||||||||    |||||||||||||" << endl;
	cout << endl << endl;
	cout << "|||||||||||||    |||||||||||||    |||||||||||||" << endl;
	cout << "|||       |||    |||       |||    |||       |||" << endl;
	cout << "|||   "<< ROJO << Gato[0][1] << BRILLO <<"   |||    |||   "<< VERDE << Gato[1][1] << BRILLO <<"   |||    |||   "<< ROJO << Gato[2][1] << BRILLO <<"   |||" << endl;
	cout << "|||       |||    |||       |||    |||       |||" << endl;
	cout << "|||||||||||||    |||||||||||||    |||||||||||||" << endl;
	cout << endl << endl;
	cout << "|||||||||||||    |||||||||||||    |||||||||||||" << endl;
	cout << "|||       |||    |||       |||    |||       |||" << endl;
	cout << "|||   "<< VERDE << Gato[0][2] << BRILLO <<"   |||    |||   "<< ROJO << Gato[1][2] << BRILLO <<"   |||    |||   "<< VERDE << Gato[2][2] << BRILLO <<"   |||" << endl;
	cout << "|||       |||    |||       |||    |||       |||" << endl;
	cout << "|||||||||||||    |||||||||||||    |||||||||||||" << endl;
}
