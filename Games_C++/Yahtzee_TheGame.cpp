// RowywoR //
// YAHTZEE!: The Game. //

// Librerias. //
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctime>  
#include <windows.h>

// Colores definidos para <windows.h> //
#define ROJO "\x1b[31m"
#define AMARILLO "\x1b[33m"
#define NARANJA "\x1B[38;2;255;128;0m"
#define MAGENTA "\x1b[35m"
#define VERDE "\x1b[32m"
#define BRILLO "\x1b[97m"    
#define BLANCO "\x1b[37m"             
using namespace std;

// Funciones. //
void Inicializar0(int[][2]); // Inicializa el tablero completo del Juego en "0" cada que reinicia el juego. //
void InicializarPOST(int[], int[], int[]); // Inicializa los arreglos de MaquinaRandom[], NumConservar[], NumAleatorio[] en "0" en cada turno. //
int SeleccionPlayer(int, string[]); // Actualiza las rondas segun la seleccion del modo de juego: 1 Jugador ||| 2 Jugadores y pide los nombres. //
void TableroActual(int, int[][2], string[]); // Imprime el tablero completo: Vacios en "Blanco" | con Valor en "Verde". //
void LanzarDados(int, int[]); // Genera numeros aleatorios en NumAleatorio[] del 1 al 6. //
void ImprimirDados(int[]); // Segun el valor de NumAleatorio[], imprime el dibujo ASCII el correspondiente. //
void ConservarDados(int[], int[]); // Borra el valor de NumAleatorio[] y valida un indicador; si el indicador es verdadero, guarda el valor seleccionado en NumConservar[]. //
void TusDados(int[]); // Imprime los dados que guardaste en NumConservar[]. //
void AcomodarDados(int[]); // Acomoda los dados en orden, para validar las condiciones de Jugadas. //
void SumaCasilla(int, int, int, int[][2], int[], string[]); // Condiciones de todas las Jugadas de Yahtzee! //
void VS_Maquina(int[], int[][2]); // En caso de seleccionar el modo de juego: 1 Jugador; esta funcion genera los resultados del "Rival". //
int JuegosDisponibles(int, int, int[][2], string[], int[]); // Valida cuales Jugadas puedes realizar y las imprime en listado. //
int SumaTotalJugador1(int[][2]); // Al finalizar, realiza la suma de los puntajes del jugador 1. //
int SumaTotalJugador2(int[][2]); // Al finalizar, realiza la suma de los puntajes del jugador 2. //
void Celebracion(int, int, string[]); // Recibe los valores de SumaTotalJugador1() y SumaTotalJugador2() y festeja al ganador. //
void Despedida(); // El programa se despide con una despedida dibujada en ASCII. //
void Bienvenida(); // Mensaje de bienvenida dibujada en ASCII. //
void Mensajes(int); // Listado de mensajes que se mandan a llamar segun la variable como parametro. //

// Variable global: Nombres de las Jugadas. //
string nombreResultados[13] = {"(1) UNOs      ", "(2) DOSes     ", "(3) TRESes    ", "(4) CUATROS   ", "(5) CINCOs    ", "(6) SEISes    ", "(7) 3-IGUALES ", "(8) 4-IGUALES ", "(9) FULL-HOUSE", "(10)ESC.CORTA ", "(11)ESC.LARGA ", "(12)BASURA    ", "(13)YAHTZEE!  "};

main() {
	string nombreJugador[2] = {"", "Rival"}; // Si es 1 Jugador: Solo se llena el primero [0]; Si es 2 Jugadores: Se llenan ambos espacios [0][1]. //
	int repeat = 0; // Variable para repetir el Juego: YAHTZEE! //
	int dados_contados = 0; // Contador que llega a "5" en caso de tener el arreglo de dados almacenados completo. //
	int select; // Seleccion de modo de juego: 1 Jugador o 2 Jugadores. //
	int opcion; // Opcion: Para tomar o no mas dados. //
	int contador; // Contador para los 3 tiros de dados. //
	int s; // Variable de seleccion de jugadas ----> SumaCasilla(int.....). //
	int ronda_jugador; // Rondas pares == Jugador 1 ||| Rondas Impares == Jugador 2 //
	int todasCasillas[13][2]; // Tablero completo del Juego. //
	int NumAleatorio[5]; // Arreglo de dados aleatorios tras tiro. //
	int NumConservar[5]; // Arreglo de dados almacenados post-tiro. //
	int MaquinaRandom[5]; // Arreglo de dados aleatorios para "Rival". //
	
	// Do-While por si quieres seguir jugando, se repita. //
	do {
	// Inicializar al comienzo, todo en "0". //
	Inicializar0(todasCasillas);
	InicializarPOST(NumAleatorio, NumConservar, MaquinaRandom);	
		
	ronda_jugador = 0; // Iniciar rondas en "0". //
	repeat = 0; // Iniciar la opcion de volver a jugar en "0". //
	setlocale(LC_ALL, "");
	system("cls");
		
		// Mensaje de bienvenida. //
		Bienvenida(); 
		cout << ROJO << "Selecciona el modo de juego: " << BLANCO << endl;
		cout << VERDE << "(1)" << BLANCO << " -------------> UN JUGADOR. " << endl;
		cout << VERDE << "(2)" << BLANCO << " -------------> DOS JUGADORES. " << endl;
		cout << " >>> ";
		cin >> select;
		
		// Condicionales para evitar errores. //
			if(select > 2) {
			select = 2;
			}
			if(select < 1) {
			select = 1;
			}
		
		// Cantidad de rondas segun "n" Jugadores y/o modo de juego. //
		int rounds = SeleccionPlayer(select, nombreJugador); 
		
		// Inicio del juego. Cantidad de rondas segun "rounds". //
		for(int x = 0; x < rounds; x++) {
			system("cls");
			TableroActual(select, todasCasillas, nombreJugador);
			
			// Imprimir los turnos de 2 Jugadores. //
			if(rounds == 26) {
				if(ronda_jugador % 2 == 0) {
				cout << endl;
				cout << VERDE << "<<<<<< TURNO DE " << nombreJugador[0] << " >>>>>>" << BLANCO << endl;
				cout << "_________________________________________________" << endl;
				}
				if(ronda_jugador % 2 == 1) {
				cout << endl;
				cout << VERDE << "<<<<<< TURNO DE " << nombreJugador[1] << " >>>>>>" << BLANCO << endl;
				cout << "_________________________________________________" << endl;
				}
			}
			
			// Imprimir los turnos de 1 Jugador vs Maquina. //
			else {
				cout << endl;
				cout << VERDE << "<<<<<< TURNO no. " << ronda_jugador+1 << " >>>>>>" << BLANCO << endl;
				cout << "_________________________________________________" << endl;
			}
			
				// Inicio de las tres tiradas de dados. //
				int contador = 0; 
				while(contador != 3 && dados_contados != 5) { 
					// Lanzar e imprimir dados en ASCII segun el valor. //
					LanzarDados(dados_contados, NumAleatorio); 
					ImprimirDados(NumAleatorio); 
						cout << "Deseas conservar algun dado? "<< VERDE <<"\n(1)"<< BLANCO <<" === SI "<< ROJO <<"\n(2)"<< BLANCO <<" === NO \n >>> "; 
						cin >> opcion;
						system("cls");
						
						// Condicionales para evitar errores. //
							if(opcion > 2) {
							opcion = 2;
							}
							if(opcion < 1) {
							opcion = 1;
							}
						
						// Si quiere conservar algun dado... //
						while(opcion == 1) { 
							dados_contados = 0;
							opcion = 0;
								ImprimirDados(NumAleatorio); // Dados actuales. //
								ConservarDados(NumAleatorio, NumConservar); // Elegir tus dados. //
						
									// Si el arreglo de dados almacenados esta lleno, break; //
									for(int i = 0; i < 5; i++) {
										if(NumConservar[i] != 0) {
											dados_contados++;
										}
									}
									if(dados_contados == 5) {
										break;
									}
							
								system("cls");
								ImprimirDados(NumAleatorio); // Dados restantes que PUEDES tomar. //
								TusDados(NumConservar); // Imprimir los dados que posees. //
						
						// En caso de tener aun espacio, preguntar... //	
							if(dados_contados != 5) { 
								cout << "¿Quieres seleccionar otro dado? "<< VERDE <<"\n(1)"<< BLANCO <<" === SI "<< ROJO <<"\n(2)"<< BLANCO <<" === NO \n >>> "; 
								cin >> opcion;
							
							// Condicionales para evitar errores. //
								if(opcion > 2) {
								opcion = 2;
								}
								if(opcion < 1) {
								opcion = 1;
								}							
							}
						}

					// Opcion para continuar o detenerse con los 3 tiros. //
					if(opcion == 2) {
					system("cls");
					cout << "No se han seleccionado dados." << endl;
						
						// "enough" valida si quieres quedarte con estos dados. //
						int enough; 
						TusDados(NumConservar); 
						cout << ROJO <<"\n<<< A D V E R T E N C I A >>>"<< BLANCO <<" \n¿Te quedas con estos dados? "<< VERDE <<"\n(1)"<< BLANCO <<" === SI "<< ROJO <<"\n(2)"<< BLANCO <<" === VOY POR MAS... \n >>> ";
						cin >> enough;
						
						// Condicionales para evitar errores. //
							if(enough > 2) {
							enough = 2;
							}
							if(enough < 1) {
							enough = 1;
							}
					
						// Detener WHILE de los 3 tiros. (2+1=3) //
						if(enough == 1) {
							contador = 2; 
						}
					}
			// Se aumenta una tirada. //		
			contador++; 
			}
			
			system("cls");
			cout << "Se marca de color "<< VERDE <<"VERDE"<< BLANCO <<" las casillas "<< ROJO <<"NO DISPONIBLES."<< BLANCO <<" \nSELECCIONA EL "<< NARANJA <<"NUMERO DE JUEGO DISPONIBLE:\n" << BLANCO;
			
				// Se acomodan los dados, imprime los juegos disponibles en color ROJO y te muestra tus dados. //
				AcomodarDados(NumConservar);
				JuegosDisponibles(ronda_jugador, select, todasCasillas, nombreJugador, NumConservar);
				TusDados(NumConservar);
			
			// Almacena tu juego y manda como parametro "s" a SumaCasilla(); para validar condicionales. //	
			cout << "Tu juego: >>> "; cin >> s;
			
			// Condicionales para evitar errores. //
				if(s < 1) {
				s = 1;
				}
				if(s > 13) {
				s = 13;
				}
			SumaCasilla(s, select, ronda_jugador, todasCasillas, NumConservar, nombreJugador);
			
				// Jugador 1 VS Maquina //
				if(rounds == 13) { 
					VS_Maquina(MaquinaRandom, todasCasillas);
				}
			
			// Aumenta la ronda en 1+, Inicializa en "0" los arreglos NumAleatorio[], NumConservar[], MaquinaRandom[] y los "dados_contados" para la siguiente ronda. //
			ronda_jugador++;
			InicializarPOST(NumAleatorio, NumConservar, MaquinaRandom);
			dados_contados = 0;
		}
		
		// Final del juego. //
		int j1 = SumaTotalJugador1(todasCasillas); // De funcion SumaTotalJugador1(), lo mando a Celebracion() //
		int j2 = SumaTotalJugador2(todasCasillas); // De funcion SumaTotalJugador2(), lo mando a Celebracion() //
		
		// Imprime un mensaje en ASCII con los resultados en J1 y J2. //
		system("cls");
		Mensajes(4);
			cout << BRILLO << "RESULTADOS FINALES: " << BLANCO << endl;
			cout << ROJO << "--------------> " << BLANCO << nombreJugador[0] << ": " << VERDE << j1 << " PUNTOS. " << BLANCO << endl;
			cout << ROJO << "--------------> " << BLANCO << nombreJugador[1] << ": " << VERDE << j2 << " PUNTOS. " << BLANCO << endl;
			cout << endl;
			cout << BRILLO << "<<< Presiona "<< AMARILLO <<"CUALQUIER BOTON"<< BLANCO <<" para celebrar al ganador! >>>" << endl;
		getch();
		
		// Festejo al ganador. //
		Celebracion(j1, j2, nombreJugador);
	
	// Bandera para repetir el juego. //
	cout << "¿Deseas repetir "<< ROJO <<"'YAHTZEE: "<< VERDE <<"EL JUEGO'"<< VERDE <<"\n(1)"<< BLANCO <<" === SI "<< ROJO <<"\n(2)"<< BLANCO <<" === NO \n >>> ";
	cin >> repeat;	
	} while(repeat == 1);
	
	// Si termina el juego, aparece la despedida. //
	Despedida();
}

/////////////////////////////
// Contenido de FUNCIONES //
///////////////////////////

// FUNCION: Inicializar en "0" el tablero. //
void Inicializar0(int todasCasillas[][2]) {
	for(int i = 0; i < 13; i++) {
		for(int h = 0; h < 2; h++) {
			todasCasillas[i][h] = 0;
		}
	}	
}

// FUNCION: Inicializar en "0" los arreglos. //
void InicializarPOST(int NumAleatorio[], int NumConservar[], int MaquinaRandom[]) {
	for(int i = 0; i < 5; i++) {
		NumAleatorio[i] = 0;
		NumConservar[i] = 0;
		MaquinaRandom[i] = 0;
	}
}

// FUNCION: Asignacion de rondas para el juego y request de nombres. //
int SeleccionPlayer(int select, string nombreJugador[]) { // Pide los nombres segun la seleccion de jugadores
	int rounds = 0;
	system("cls");
	Bienvenida();
	
	if(select == 1) {
		rounds = 13; // rondas para un jugador //
		for(int i = 0; i < 1; i++) {
			cout << VERDE << "NOMBRE DE JUGADOR "<<i+1<<": " << BLANCO; cin >> nombreJugador[i];
		}
	}
	else if(select == 2) {
		rounds = 26; // rondas para dos jugadores //
		for(int i = 0; i < 2; i++) {
			cout << VERDE << "NOMBRE DE JUGADOR "<<i+1<<": " << BLANCO; cin >> nombreJugador[i];
		}
	}
	return(rounds);
}

// FUNCION: Imprimir el tablero completo del juego. //
void TableroActual(int select, int todasCasillas[][2], string nombreJugador[]) { 

	cout << AMARILLO <<"########################################################################" << BLANCO << endl;
	cout << NARANJA << "########################################################################" << BLANCO << endl;
	cout << ROJO <<    "########################################################################" << BLANCO << endl;
	cout << "                       "<<nombreJugador[0]<<"    "<<nombreJugador[1]<<"  " <<endl;
	for(int i = 0; i < 13; i++) {
		cout <<"      "<<nombreResultados[i]; 
		if(todasCasillas[i][0] == 0) {
			cout << "   [ "<<todasCasillas[i][0]<<" ]   ";
		}
		else {
			cout << "   [ "<< VERDE <<todasCasillas[i][0]<< BLANCO <<" ]   ";
		}
		
		if(todasCasillas[i][1] == 0) {
			cout << "   [ "<<todasCasillas[i][1]<<" ]" << endl;
		}
		else {
			cout << "   [ "<< VERDE <<todasCasillas[i][1]<< BLANCO <<" ]" << endl;
		}

	}
	cout << endl;
	cout << ROJO <<    "########################################################################" << BLANCO << endl;
	cout << NARANJA << "########################################################################" << BLANCO << endl;
	cout << AMARILLO <<"########################################################################" << BLANCO << endl;
}

// FUNCION: Generar valores aleatorios del 1 al 6 de los dados. //
void LanzarDados(int dados_contados, int NumAleatorio[]) { 
	srand(time(0));
	cout << "Presiona CUALQUIER BOTON para lanzar los dados." << endl;
	getch();
	for(int i = 0; i < 5 -dados_contados; i++) {
		NumAleatorio[i] = rand() % 7;
		if(NumAleatorio[i] == 0) { // Si arroja un valor "0", sera como si hubiese caido "1" //
			NumAleatorio[i] = 1;
		}
	}
}

// FUNCION: Imprimir los dados en dibujo ASCII, segun su condicional con NumAleatorio[]. //
void ImprimirDados(int NumAleatorio[]) {
	system("cls");
	for(int i = 0; i < 5; i++) {
		if(NumAleatorio[i] == 1) {
			cout << BRILLO << "  -------  " << endl;
			cout << " |       | " << endl;
			cout << " |   o   | " << endl;
			cout << " |       | " << endl;
			cout << "  -------  " << endl;
		}
		if(NumAleatorio[i] == 2) {
			cout << BRILLO << "      -------  " << endl;
			cout << "     | o     | " << endl;
			cout << "     |       | " << endl;
			cout << "     |     o | " << endl;
			cout << "      -------  " << BLANCO << endl;
		}
		if(NumAleatorio[i] == 3) {
			cout << BRILLO << "          -------  " << endl;
			cout << "         | o     | " << endl;
			cout << "         |   o   | " << endl;
			cout << "         |     o | " << endl;
			cout << "          -------  " << BLANCO << endl;
		}
		if(NumAleatorio[i] == 4) {
			cout << BRILLO << "              -------  " << endl;
			cout << "             | o   o | " << endl;
			cout << "             |       | " << endl;
			cout << "             | o   o | " << endl;
			cout << "              -------  " << BLANCO << endl;
		}
		if(NumAleatorio[i] == 5) {
			cout << BRILLO << "                  -------  " << endl;
			cout << "                 | o   o | " << endl;
			cout << "                 |   o   | " << endl;
			cout << "                 | o   o | " << endl;
			cout << "                  -------  " << BLANCO << endl;
		}
		if(NumAleatorio[i] == 6) {
			cout << BRILLO << "                      -------  " << endl;
			cout << "                     | o   o | " << endl;
			cout << "                     | o   o | " << endl;
			cout << "                     | o   o | " << endl;
			cout << "                      -------  " << BLANCO << endl;
		}
	}
}

// FUNCION: Imprimir los dados almacenados segun NumConservar[]. //
void TusDados(int NumConservar[]) {
	cout << "TUS DADOS: " << endl;
	for(int i = 0; i < 5; i++) {
	cout << "Dado " <<i+1<< ": "<< AMARILLO << "[" <<NumConservar[i] << "]" << BLANCO << endl;	
	}
}

// FUNCION: Acomodar los dados en el orden correcto. //
void AcomodarDados(int NumConservar[]) {
	int mantener; 
	for(int z = 0; z < 4; z++) { 
		for(int i = 0; i < 4; i++) { 
			if(NumConservar[i] >= NumConservar[i+1]) {
				mantener = NumConservar[i];
				NumConservar[i] = NumConservar[i+1];
				NumConservar[i+1] = mantener;
			}
		}
	}
}

// FUNCION: Validacion entre NumAleatorio[] y NumConservar[] para obtener tus dados. //
void ConservarDados(int NumAleatorio[], int NumConservar[]) {
	int dado_select, indicador = 0;
	cout << "Selecciona el valor del dado: "; cin >> dado_select;
			
	for(int i = 0; i < 5; i++) {
		if(dado_select == NumAleatorio[i]) {
			NumAleatorio[i] = 0; // "0" Para que ya no imprima esto. //
			indicador = 1; // Para añadirlo al nuevo arreglo. //
			break;
		}
	}
	for(int x = 0; x < 5; x++) {
		if(NumConservar[x] == 0 && indicador == 1) {
			NumConservar[x] = dado_select; // Como se valido, se guarda. //
			break;
		}
	}
}

// FUNCION: Proceso automatico de seleccion de puntos para la maquina A.K.A tu rival. //
void VS_Maquina(int MaquinaRandom[], int todasCasillas[][2]) {
	int s, suma_maquina = 0, repetido[13];
	for(int machine = 0; machine < 5; machine++) {
		MaquinaRandom[machine] = rand() % 7; // Generar valores aleatorios de dados (Rival). //
		if(MaquinaRandom[machine] == 0) {
			MaquinaRandom[machine] = 1;
		}
	}
	
	s = rand() % 14; // Seleccion aleatoria de Maquina de 1 a 13. //
	if(s == 0) {
		s = 1;
	}
	
	for(int i = 0; i < 13; i++) {
		while(repetido[i] == s) {
			s = rand() % 14; // Generar una eleccion aleatoria que no se repita. //
			if(s == 0) {
				s = 1;
			}
		}
		if(repetido[i] == 0) { // Guardar en siguiente valor disponible y que no vuelva a repetirse. //
			if(s != 10 || s != 11 || s != 13) { // Por la dificultad de estos, NO LOS GUARDA. //
				repetido[i] = s;
				break;
			}
		}
	}
	
	if(s == 1 || s == 2 || s == 3 || s == 4 || s == 5 || s == 6) { // Generacion de dados de opciones 1s,2s,3s,4s,5s,6s. //
		for(int i = 0; i < 5; i++) {
			if(s == 1) {
				suma_maquina += MaquinaRandom[i];
				if(suma_maquina > 4) { // Resta el ultimo valor disponible, para que sea justo. //
					suma_maquina = 4-MaquinaRandom[4]; 
				}
			}
			else if(s == 2) {
				suma_maquina += MaquinaRandom[i];
				if(suma_maquina > 8) {
					suma_maquina = 8-MaquinaRandom[4];
				}
			}
			else if(s == 3) {
				suma_maquina += MaquinaRandom[i];
				if(suma_maquina > 12) {
					suma_maquina = 12-MaquinaRandom[4];
				}
			}
			else if(s == 4) {
				suma_maquina += MaquinaRandom[i];
				if(suma_maquina > 16) {
					suma_maquina = 16-MaquinaRandom[4];
				}
			}
			else if(s == 5) {
				suma_maquina += MaquinaRandom[i];
				if(suma_maquina > 20) {
					suma_maquina = 20-MaquinaRandom[4];
				}
			}
			else if(s == 6) {
				suma_maquina += MaquinaRandom[i];
				if(suma_maquina > 24) {
					suma_maquina = 24-MaquinaRandom[4];
				}
			}				
		}
	}
	if(s == 7) { // Generacion de valores en opciones 3-IGUALES. //
		suma_maquina = rand() % 29;
		if(suma_maquina <= 6) {
			suma_maquina = 7;
		}
	}
	if(s == 8) { // Generacion de valores en opciones 4-IGUALES. //
		suma_maquina = rand() % 30;
		if(suma_maquina <= 5) {
			suma_maquina = 6;
		}
	}
	if(s == 9 || s == 10 || s == 11 || s == 13) { // Generacion de valores en opciones FULL-HOUSE,ESC.CORTA,ESC.LARGA,YAHTZEE! //
		int diff; // Dificultad de puntos. //
		diff = rand() % 50+1;
		
		if(s == 13) { // YAHTZEE! //
			if(diff == 10 || diff == 20 || diff == 30 || diff == 40 || diff == 50) {
			suma_maquina = 50; 
			}
		}
		if(s == 11) { // ESC.LARGA //
			if(diff == 5 || diff == 9 || diff == 15 || diff == 19 || diff == 25 || diff == 29 || diff == 35 || diff == 39 || diff == 45 || diff == 49) {
			suma_maquina = 40; 
			}
		}
		if(s == 10) {
			if(diff == 1 || diff == 2 || diff == 11 || diff == 12 || diff == 21 || diff == 22 || diff == 31 || diff == 32 || diff == 41 || diff == 42) {
			suma_maquina = 30; // ESC.CORTA //
			}
		}
		if(s == 9) {
			suma_maquina = 25; // FULL-HOUSE //
		}
	}
	if(s == 12) { // Generacion de valores en opcion BASURA. //
		suma_maquina = rand() % 30;
	}
	
	
	if(todasCasillas[s-1][1] == 0) { // Solo si la casilla es "0" //
		todasCasillas[s-1][1] = suma_maquina;
		system("cls");
		Mensajes(1);
		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
		cout << "El Rival obtuvo << "<< ROJO << suma_maquina << BLANCO <<" PUNTOS >> en: " << VERDE << nombreResultados[s-1] << BLANCO << " !!!" << endl;
		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
		cout << "Presiona CUALQUIER BOTON para continuar..." << endl;
		getch();
	}
}

// FUNCION: Todas las condicionales de todas las jugadas del juego. //
void SumaCasilla(int s, int select, int ronda_jugador, int todasCasillas[][2], int NumConservar[], string nombreJugador[]) {
	int mensaje_J;
	int suma = 0, contador = 0;
	
	if(s == 1) { // Condicional para UNOs //
		for(int i = 0; i < 5; i++) {
			if(NumConservar[i] == 1) {
				suma += NumConservar[i];
			}
		}
	}
	if(s == 2) { // Condicional para DOSes //
		for(int i = 0; i < 5; i++) {
			if(NumConservar[i] == 2) {
				suma += NumConservar[i]; 
			}
		}
	}
	if(s == 3) { // Condicional para TRESes //
		for(int i = 0; i < 5; i++) {
			if(NumConservar[i] == 3) {
				suma += NumConservar[i]; 
			}
		}
	}
	if(s == 4) { // Condicional para CUATROs //
		for(int i = 0; i < 5; i++) {
			if(NumConservar[i] == 4) {
				suma += NumConservar[i]; 
			}
		}
	}
	if(s == 5) { // Condicional para CINCOs //
		for(int i = 0; i < 5; i++) {
			if(NumConservar[i] == 5) {
				suma += NumConservar[i]; 
			}
		}
	}
	if(s == 6) { // Condicional para SEISes //
		for(int i = 0; i < 5; i++) {
			if(NumConservar[i] == 6) {
				suma += NumConservar[i]; 
			}
		}
	}
	if(s == 7) { // Condicional para 3-IGUALES //
		for(int i = 0; i < 1; i++) { // Solo es necesaria una iteracion de comprobacion //
			if(NumConservar[i] == NumConservar[i+1] && NumConservar[i+1] == NumConservar[i+2]) { // [0][1][2] Son iguales //
				for(int h = 0; h < 5; h++) { 
				suma += NumConservar[h];
				}
			break;
			}
			if(NumConservar[i+1] == NumConservar[i+2] && NumConservar[i+2] == NumConservar[i+3]) { // [1][2][3] Son iguales //
				for(int h = 0; h < 5; h++) {
				suma += NumConservar[h];
				}
			break;
			}
			if(NumConservar[i+2] == NumConservar[i+3] && NumConservar[i+3] == NumConservar[i+4]) { // [2][3][4] Son iguales //
				for(int h = 0; h < 5; h++) {
				suma += NumConservar[h];
				}
			break;
			}
			if(NumConservar[i] == NumConservar[i+1] && NumConservar[i+1] == NumConservar[i+2] && NumConservar[i+2] == NumConservar[i+3]) { // Si tiene 4-IGUALES ocupado. //
				for(int h = 0; h < 5; h++) { 
				suma += NumConservar[h];
				}
			break;
			}
			if(NumConservar[i+1] == NumConservar[i+2] && NumConservar[i+2] == NumConservar[i+3] && NumConservar[i+3] == NumConservar[i+4]) { // Si tiene 4-IGUALES ocupado. //
				for(int h = 0; h < 5; h++) {
				suma += NumConservar[h];
				}
			break;
			}
		}
	}
	if(s == 8) { // Condicional para 4-IGUALES //
		for(int i = 0; i < 1; i++) { // Solo es necesaria una iteracion de comprobacion //
			if(NumConservar[i] == NumConservar[i+1] && NumConservar[i+1] == NumConservar[i+2] && NumConservar[i+2] == NumConservar[i+3]) { // [0][1][2][3] Son iguales //
				for(int h = 0; h < 5; h++) { 
				suma += NumConservar[h];
				}
			break;
			}
			if(NumConservar[i+1] == NumConservar[i+2] && NumConservar[i+2] == NumConservar[i+3] && NumConservar[i+3] == NumConservar[i+4]) { // [1][2][3][4] Son iguales //
				for(int h = 0; h < 5; h++) {
				suma += NumConservar[h];
				}
			break;
			}
		}
	}
	if(s == 9) { // Condicional para FULL-HOUSE //
		for(int i = 0; i < 1; i++) { // Solo es necesaria una iteracion de comprobacion //
			if(NumConservar[i] == NumConservar[i+1] && NumConservar[i+1] == NumConservar[i+2] && NumConservar[i] != 0) { // [0][1][2] Son iguales //
				if(NumConservar[i+3] == NumConservar[i+4] && NumConservar[i] != 0) { // [3][4] Son iguales por separado //
					suma = 25;
				}
			}
			if(NumConservar[i+2] == NumConservar[i+3] && NumConservar[i+3] == NumConservar[i+4] && NumConservar[i] != 0) { // [2][3][4] Son iguales //
				if(NumConservar[i] == NumConservar[i+1] && NumConservar[i] != 0) { // [0][1] Son iguales por separado //
					suma = 25;
				}
			}
		}
	}
	if(s == 10) { // Condicional para ESC.CORTA //
		for(int i = 0; i < 5; i++) { // Recorrer todo el arreglo para contar //
			if(NumConservar[i]+1 == NumConservar[i+1] && NumConservar[i] != 0) { // Si el numero actual + 1 == al siguiente, tiene una secuencia 1,2,3,4... (Si es "0" no cuenta) //
				contador++;	// 1+1==2 (contador=1); 2+1==3 (contador=2); 3+1==4 (contador=3); 1,2,3,4... //
			} 							
		}
		for(int i = 0; i < 1; i++) { // Solo una iteracion para comprobar condicionales //
			if(contador == 3 && NumConservar[i+1]+1 == NumConservar[i+2] && NumConservar[i+2]+1 == NumConservar[i+3] && NumConservar[i+3]+1 == NumConservar[i+4]) { 
			suma = 30; // Si guarda 4 dados, e inicia en 0, solo puede validar del [i=1] hasta [i=4]
			}
			else if(contador == 3 && NumConservar[i]+1 == NumConservar[i+1] && NumConservar[i+1]+1 == NumConservar[i+2] && NumConservar[i+2]+1 == NumConservar[i+3]) { 
			suma = 30; // Si guarda los 5 dados, validar del [i=0] hasta [i=3]
			}
			else if(contador == 4) { 
			suma = 30; // Por si tienes escalera grande y ya pusiste en escalera grande algo //
			}
		}
	}
	if(s == 11) { // Condicional para ESC.LARGA //
		for(int i = 0; i < 5; i++) { 
			if(NumConservar[i]+1 == NumConservar[i+1] && NumConservar[i] != 0) { // Si el numero actual + 1 == al siguiente, tiene una secuencia 1,2,3,4,5... //
				contador++;
				if(contador == 4) { // 1+1==2 (contador=1); 2+1==3 (contador=2); 3+1==4 (contador=3); 4+1==5 (contador=4); 1,2,3,4,5... //
					suma = 40;
				}
			}
		}
	}
	if(s == 12) { // Condicional para BASURA //
		for(int i = 0; i < 5; i++) {
			suma += NumConservar[i];
		}
	}
	if(s == 13) { // Condicional para YAHTZEE! //
		for(int i = 0; i < 5; i++) {
			if(NumConservar[i] == NumConservar[i+1] && NumConservar[i] != 0) {
				contador++;
				if(contador == 4) { // [i]=5 && [i+1]=5 == contador++; Si contador llega a 4, significa que 5 numeros son iguales (YAHTZEE!) //
					suma = 50;
				}
			}
		}
	}

	// Recorrer el arreglo bidimensional del tablero de puntuacion para segun "s-1", agregarlo. //
	int indicador = 0;
	
	// Condicionales para BONUS: Yahtzee! +100 puntos. //
	if(ronda_jugador % 2 == 0) {
		if(todasCasillas[s-1][0] == 50 && s == 13) {
			todasCasillas[s-1][0] += 100; // 100+ Puntos BONUS! //
		}
	}
	if(ronda_jugador % 2 == 1) {
		if(todasCasillas[s-1][1] == 50 && s == 13) {
			todasCasillas[s-1][1] += 100; // 100+ Puntos BONUS! //
		}
	}
	
	for(int i = 0; i < 13; i++) {
		for(int j = 0; j < 2; j++) {
			if(select == 1) { // Suma en Jugador 1 //
				if(todasCasillas[s-1][0] == 0) { // Agrega valor si solo es "0" //
					todasCasillas[s-1][0] = suma;
					indicador = 1;	
				}
			}
			if(select == 2) {
				if(ronda_jugador % 2 == 0) { // Suma en Jugador 1 //
					if(todasCasillas[s-1][0] == 0) { // Agrega valor si solo es "0" //
						todasCasillas[s-1][0] = suma;	
						indicador = 1;
					}
				}
				else if(ronda_jugador % 2 != 0) { // Suma en Jugador 2 //
					if(todasCasillas[s-1][1] == 0) { // Agrega valor si solo es "0" //
						todasCasillas[s-1][1] = suma;
						indicador = 1;					
					}
				}
			}
		}
	}
	
	if(select == 1) { // 1 Jugador //
		if(indicador == 1) { // Si se realizo la suma, imprime esto. //
			system("cls");
			mensaje_J = 2;
			Mensajes(mensaje_J);
				cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
				cout << nombreJugador[0] <<" obtuvo << "<< ROJO << suma << BLANCO <<" PUNTOS >> en: " << VERDE << nombreResultados[s-1] << BLANCO << " !!!" << endl;
				cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
				cout << "Presiona CUALQUIER BOTON para continuar..." << endl;
				getch();
		}
	}
	if(select == 2) { // 2 Jugadores //
		if(ronda_jugador % 2 == 0 && indicador == 1) { // Si se realizo la suma, imprime esto. //
			system("cls");
			mensaje_J = 2;
			Mensajes(mensaje_J);
				cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
				cout << nombreJugador[0] <<" obtuvo << "<< ROJO << suma << BLANCO <<" PUNTOS >> en: " << VERDE << nombreResultados[s-1] << BLANCO << " !!!" << endl;
				cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
				cout << "Presiona CUALQUIER BOTON para continuar..." << endl;
				getch();
		}
		
		if(ronda_jugador % 2 != 0 && indicador == 1) { // Si se realizo la suma, imprime esto. //
			system("cls");
			mensaje_J = 3;
			Mensajes(mensaje_J);
				cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
				cout << nombreJugador[1] <<" obtuvo << "<< ROJO << suma << BLANCO <<" PUNTOS >> en: " << VERDE << nombreResultados[s-1] << BLANCO << " !!!" << endl;
				cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
				cout << "Presiona CUALQUIER BOTON para continuar..." << endl;
				getch();
		}	
	}		
}

// FUNCION: Mostrar cuales juegos estan disponibles segun sea "0" y tengas dados que coincidan. //	
int JuegosDisponibles(int ronda_jugador, int select, int todasCasillas[][2], string nombreJugador[], int NumConservar[]) { 
	int cont = 0;
	int j = 2;
	TableroActual(select, todasCasillas, nombreJugador);
		
		if(ronda_jugador % 2 == 0) {
			j = 0; // Posibilidades para Jugador 1. //
		}
		if(ronda_jugador % 2 == 1 && select == 2) {
			j = 1; // Posibilidades para Jugador 2. //
		}
		
		cout << BRILLO << "JUEGOS DISPONIBLES: " << BLANCO << endl;
		
		for(int r = 0; r < 5; r++) { // Disponibilidad de UNOs //
			if(NumConservar[r] == 1 && todasCasillas[0][j] == 0) { 
				cout << ROJO << nombreResultados[0] << BLANCO << endl;
				break;
			}
		}
		for(int r = 0; r < 5; r++) { // Disponibilidad de DOSes //
			if(NumConservar[r] == 2 && todasCasillas[1][j] == 0) { 
				cout << ROJO << nombreResultados[1] << BLANCO << endl;
				break;
			}
		}
		for(int r = 0; r < 5; r++) { // Disponibilidad de TRESes //
			if(NumConservar[r] == 3 && todasCasillas[2][j] == 0) { 
				cout << ROJO << nombreResultados[2] << BLANCO << endl;
				break;
			}
		}
		for(int r = 0; r < 5; r++) { // Disponibilidad de CUATROs //
			if(NumConservar[r] == 4 && todasCasillas[3][j] == 0) { 
				cout << ROJO << nombreResultados[3] << BLANCO << endl;
				break;
			}
		}
		for(int r = 0; r < 5; r++) { // Disponibilidad de CINCOs //
			if(NumConservar[r] == 5 && todasCasillas[4][j] == 0) { 
				cout << ROJO << nombreResultados[4] << BLANCO << endl;
				break;
			}
		}
		for(int r = 0; r < 5; r++) { // Disponibilidad de SEISes //
			if(NumConservar[r] == 6 && todasCasillas[5][j] == 0) { 
				cout << ROJO << nombreResultados[5] << BLANCO << endl;
				break;
			}
		}
		for(int r = 0; r < 1; r++) { // Disponibilidad de 3-IGUALES //
			if(NumConservar[r] == NumConservar[r+1] && NumConservar[r+1] == NumConservar[r+2] && NumConservar[r+1] != 0) {
				if(todasCasillas[6][j] == 0) { 
					cout << ROJO << nombreResultados[6] << BLANCO << endl;
					break;
				}
			}
			else if(NumConservar[r+1] == NumConservar[r+2] && NumConservar[r+2] == NumConservar[r+3] && NumConservar[r+1] != 0) {
				if(todasCasillas[6][j] == 0) { 
					cout << ROJO << nombreResultados[6] << BLANCO << endl;
					break;
				}
			}
			else if(NumConservar[r+2] == NumConservar[r+3] && NumConservar[r+3] == NumConservar[r+4] && NumConservar[r+1] != 0) {
				if(todasCasillas[6][j] == 0) { 
					cout << ROJO << nombreResultados[6] << BLANCO << endl;
					break;
				}
			}
			else if(NumConservar[r] == NumConservar[r+1] && NumConservar[r+1] == NumConservar[r+2] && NumConservar[r+2] == NumConservar[r+3] && NumConservar[r+1] != 0) {
				if(todasCasillas[6][j] == 0) { 
					cout << ROJO << nombreResultados[6] << BLANCO << endl;
				}
			}
			else if(NumConservar[r+1] == NumConservar[r+2] && NumConservar[r+2] == NumConservar[r+3] && NumConservar[r+3] == NumConservar[r+4] && NumConservar[r+1] != 0) {
				if(todasCasillas[6][j] == 0) { 
					cout << ROJO << nombreResultados[6] << BLANCO << endl;
				}
			}
		}
		for(int r = 0; r < 1; r++) { // Disponibilidad de 4-IGUALES //
			if(NumConservar[r] == NumConservar[r+1] && NumConservar[r+1] == NumConservar[r+2] && NumConservar[r+2] == NumConservar[r+3] && NumConservar[r+1] != 0) {
				if(todasCasillas[7][j] == 0) { 
					cout << ROJO << nombreResultados[7] << BLANCO << endl;
				}
			}
			else if(NumConservar[r+1] == NumConservar[r+2] && NumConservar[r+2] == NumConservar[r+3] && NumConservar[r+3] == NumConservar[r+4] && NumConservar[r+1] != 0) {
				if(todasCasillas[7][j] == 0) { 
					cout << ROJO << nombreResultados[7] << BLANCO << endl;
				}
			}
		}
		for(int r = 0; r < 1; r++) { // Disponibilidad de FULL-HOUSE //
			if(NumConservar[r] == NumConservar[r+1] && NumConservar[r+1] == NumConservar[r+2] && NumConservar[r+1] != 0) {
				if(NumConservar[r+3] == NumConservar[r+4] && NumConservar[r+3] != NumConservar[r] && NumConservar[r+1] != 0) {
					if(todasCasillas[8][j] == 0) { 
					cout << ROJO << nombreResultados[8] << BLANCO << endl;
					}
				}
			}
			if(NumConservar[r+2] == NumConservar[r+3] && NumConservar[r+3] == NumConservar[r+4] && NumConservar[r+1] != 0) {
				if(NumConservar[r] == NumConservar[r+1] && NumConservar[r] != NumConservar[r+2] && NumConservar[r+1] != 0) {
					if(todasCasillas[8][j] == 0) { 
					cout << ROJO << nombreResultados[8] << BLANCO << endl;
					}
				}
			}
		}
		for(int r = 0; r < 5; r++) { // Disponibilidad de ESC.CORTA //
			if(NumConservar[r]+1 == NumConservar[r+1] && NumConservar[r+1] != 0) { 
				cont++;
			}
		}
		for(int r = 0; r < 1; r++) { 
			if(cont == 3 && NumConservar[r+1]+1 == NumConservar[r+2] && NumConservar[r+2]+1 == NumConservar[r+3] && NumConservar[r+3]+1 == NumConservar[r+4]) { 
				if(todasCasillas[9][j] == 0) { 
					cout << ROJO << nombreResultados[9] << BLANCO << endl;
				}
			}
			else if(cont == 3 && NumConservar[r]+1 == NumConservar[r+1] && NumConservar[r+1]+1 == NumConservar[r+2] && NumConservar[r+2]+1 == NumConservar[r+3]) { 
				if(todasCasillas[9][j] == 0) { 
					cout << ROJO << nombreResultados[9] << BLANCO << endl;
				}
			}
			else if(cont == 4) { 
				if(todasCasillas[9][j] == 0) { 
					cout << ROJO << nombreResultados[9] << BLANCO << endl;
				}
			}
		}
		cont = 0;
		for(int r = 0; r < 5; r++) { // Disponibilidad de ESC.LARGA //
			if(NumConservar[r]+1 == NumConservar[r+1] && NumConservar[r+1] != 0) { 
				cont++;
				if(cont == 4) {
					if(todasCasillas[10][j] == 0) {
						cout << ROJO << nombreResultados[10] << BLANCO << endl;
					}
				}
			}
		}
		for(int r = 0; r < 1; r++) { // Disponibilidad de BASURA //
			if(todasCasillas[11][j] == 0 && NumConservar[r] != 0) {
				cout << ROJO << nombreResultados[11] << BLANCO << endl;	
			}
		}
		cont = 0;
		for(int r = 0; r < 5; r++) { // Disponibilidad de YAHTZEE! //
			if(NumConservar[r] == NumConservar[r+1] && NumConservar[r+1] != 0) {
				cont++;
				if(cont == 4) {
					if(todasCasillas[12][j] == 0) {
						cout << ROJO << nombreResultados[12] << BLANCO << endl;
					}
					if(todasCasillas[12][j] == 50) {
						cout << ROJO << nombreResultados[12] << VERDE << "(BONUS! 100+ puntos.)" << BLANCO << endl;
					}
				}
			}
		}
	cout << endl;	
}

// FUNCION: Suma total de jugador 1. //
int SumaTotalJugador1(int todasCasillas[][2]) {
	int suma_total = 0;
	for(int i = 0; i < 13; i++) {
		suma_total += todasCasillas[i][0];
	}
	return(suma_total);
}

// FUNCION: Suma total de jugador 2 y/o Rival. //
int SumaTotalJugador2(int todasCasillas[][2]) {
	int suma_total = 0;
	for(int i = 0; i < 13; i++) {
		suma_total += todasCasillas[i][1];
	}
	return(suma_total);
}

// FUNCION: Mensaje de celebracion segun quien tiene mas puntuacion. //
void Celebracion(int j1, int j2, string nombreJugador[]) {
	string ganador;
	if(j1 > j2) {
		ganador = nombreJugador[0];
	}
	else {
		ganador = nombreJugador[1];
	}
	
	system("cls");
	cout << VERDE <<  "  ######      ###    ##    ##    ###    ########   #######  ######## " << endl;
	cout << BRILLO << " ##    ##    ## ##   ###   ##   ## ##   ##     ## ##     ## ##     ##" << endl;
	cout << VERDE <<  " ##         ##   ##  ####  ##  ##   ##  ##     ## ##     ## ##     ##" << endl;
	cout << BRILLO << " ##   #### ##     ## ## ## ## ##     ## ##     ## ##     ## ######## " << endl;
	cout << VERDE <<  " ##    ##  ######### ##  #### ######### ##     ## ##     ## ##   ##  " << endl;
	cout << BRILLO << " ##    ##  ##     ## ##   ### ##     ## ##     ## ##     ## ##    ## " << endl;
	cout << VERDE <<  "  ######   ##     ## ##    ## ##     ## ########   #######  ##     ##" << endl;
	cout << BRILLO << "_____________________________________________________________________" << BLANCO << endl;
	cout << endl << endl << endl;
	cout << "                         ||||||||||||||||||||                        " << endl;
	cout << VERDE << "                                "<< ganador <<"                        " << BLANCO << endl;
	cout << "                         ||||||||||||||||||||                        " << endl;
	cout << endl << endl << endl;
}

// FUNCION: Mensaje de despedida. //
void Despedida() {
	system("cls");
	cout << BRILLO << "    ###    ########  ####  #######   ######           ###  " << endl;
	cout << 		  "   ## ##   ##     ##  ##  ##     ## ##    ##            ## " << endl;
	cout << 		  "  ##   ##  ##     ##  ##  ##     ## ##          #####    ##" << endl;
	cout << 		  " ##     ## ##     ##  ##  ##     ##  ######              ##" << endl;
	cout <<		      " ######### ##     ##  ##  ##     ##       ##    #####    ##" << endl;
	cout << 		  " ##     ## ##     ##  ##  ##     ## ##    ##            ## " << endl;
	cout << 		  " ##     ## ########  ####  #######   ######           ###  " << BLANCO << endl;
}

// FUNCION: Mensaje de bienvenida. //
void Bienvenida() {
	system("cls");
	cout << "#######################################################################################" << endl;
	cout << "#######################################################################################" << endl;
	cout << "###                       Creado en C++ por Rafael Castanedo E.                     ###" << endl;
	cout << "###                                                                                 ###" << endl;
	cout << "###        --------------------> ¡BIENVENIDO AL JUEGO! <---------------------       ###" << endl;
	cout << "### "<<ROJO<<	  "        ##    ##    ###    ##     ## ######## ######## ######## ######## " <<BLANCO<<"       ###" << endl;
	cout << "### "<<AMARILLO<<"         ##  ##    ## ##   ##     ##    ##         ##  ##       ##       " <<BLANCO<<"       ###" << endl;
	cout << "### "<<MAGENTA<< "          ####    ##   ##  ##     ##    ##        ##   ##       ##       " <<BLANCO<<"       ###" << endl;
	cout << "### "<<VERDE<<   "           ##    ##     ## #########    ##       ##    ######   ######   " <<BLANCO<<"       ###" << endl;
	cout << "### "<<NARANJA<< "           ##    ######### ##     ##    ##      ##     ##       ##       " <<BLANCO<<"       ###" << endl;
	cout << "### "<<ROJO<<	  "           ##    ##     ## ##     ##    ##     ##      ##       ##       " <<BLANCO<<"       ###" << endl;
	cout << "### "<<AMARILLO<<"           ##    ##     ## ##     ##    ##    ######## ######## ######## " <<BLANCO<<"       ###" << endl;
	cout << "###        ------------------------------------------------------------------       ###" << endl;
	cout << "###                                                                                 ###" << endl;
	cout << "#######################################################################################" << endl;
	cout << "#######################################################################################" << endl;
}

// FUNCION: Mensajes segun el valor de opcion. //
void Mensajes(int opcion) {
	if(opcion == 1) {
		cout << ROJO <<   "______                _                _        _  ______  _                _    _ " << endl;
		cout << NARANJA <<"| ___                | |              | |      | | | ___  (_)              | |  | |" << endl;
		cout << ROJO <<   "| |_/ / _   _  _ __  | |_   ___     __| |  ___ | | | |_/ / _ __   __  __ _ | |  | |" << endl;
		cout << NARANJA <<"|  __/ | | | || '_   | __| / _     / _` | / _  | | |  _ / | |  | / / / _` || |  | |" << endl;
		cout << ROJO <<   "| |    | |_| || | | || |_ | (_) | | (_| ||  __/| | | |  | | |   V / | (_| || |  |_|" << endl;
		cout << NARANJA <<" _|      __,_||_| |_|  __|  ___/    __,_|  ___||_|  _|  _||_|   _/    __,_||_|  (_)" << endl;
		cout << ROJO <<   "________________________________________________________________________________________" << BLANCO << endl;
		cout << endl << endl;
	}
	if(opcion == 2) {
		cout << VERDE <<   "______                _                _        _     ___  __     _ " << endl;
		cout << AMARILLO <<"| ___                | |              | |      | |   |_  |/  |   | |" << endl;
		cout << VERDE <<   "| |_/ / _   _  _ __  | |_   ___     __| |  ___ | |     | |`| |   | |" << endl;
		cout << AMARILLO <<"|  __/ | | | || '_   | __| / _     / _` | / _  | |     | | | |   | |" << endl;
		cout << VERDE <<   "| |    | |_| || | | || |_ | (_) | | (_| ||  __/| | /|__/ /_| |_  |_|" << endl;
		cout << AMARILLO <<" _|      __,_||_| |_|  __|  ___/    __,_|  ___||_| |____/ |___/  (_)" << endl;
		cout << VERDE <<   "________________________________________________________________________________________" << BLANCO << endl;
		cout << endl << endl;
	}
	if(opcion == 3) {
		cout << NARANJA <<"______                _                _        _     ___  _____    _ " << endl;
		cout << MAGENTA <<"| ___                | |              | |      | |   |_  |/ __  |  | |" << endl;
		cout << NARANJA <<"| |_/ / _   _  _ __  | |_   ___     __| |  ___ | |     | |`' / /'  | |" << endl;
		cout << MAGENTA <<"|  __/ | | | || '_   | __| / _     / _` | / _  | |     | |  / /    | |" << endl;
		cout << NARANJA <<"| |    | |_| || | | || |_ | (_) | | (_| ||  __/| | /|__/ /./ /___  |_|" << endl;
		cout << MAGENTA <<" _|      __,_||_| |_|  __|  ___/    __,_|  ___||_| |____/ |_____/  (_)" << endl;
		cout << NARANJA <<"________________________________________________________________________________________" << BLANCO << endl;
		cout << endl << endl;
	}
	if(opcion == 4) {
		cout << ROJO     <<"______  _____  _   _   ___   _        ______  _____  _           ___  _   _  _____  _____  _____    _ " << endl;
		cout << AMARILLO <<"|  ___||_   _|| | | | / _   | |       |  _  ||  ___|| |         |_  || | | ||  ___||  __ ||  _  |  | |" << endl;
		cout << MAGENTA  <<"| |_     | |  |   | |/ /_|  | |       | | | || |__  | |           | || | | || |__  | |  |/| | | |  | |" << endl;
		cout << VERDE    <<"|  _|    | |  |   ` ||  _  || |       | | | ||  __| | |           | || | | ||  __| | | __ | | | |  | |" << endl;
		cout << NARANJA  <<"| |     _| |_ | |   || | | || |____   | |/ / | |___ | |____   ||__/ /| |_| || |___ | |_| || |_/ /  |_|" << endl;
		cout << ROJO     <<"|_|     |___| |_| |_/|_| |_/|_____/   |___/  |____/ |_____/   |____/   ___/ |____/ |_____/|____/   (_)" << endl;
		cout << AMARILLO <<"________________________________________________________________________________________" << BLANCO << endl;
		cout << endl << endl;
	}
}
