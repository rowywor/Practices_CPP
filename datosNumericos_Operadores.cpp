// RowywoR //
#include <iostream>
using namespace std;
int numbers;

	main() {
		cout << "                    1" << endl;
    	cout << "                   11" << endl;
    	cout << "                  111" << endl;
    	cout << "                 1111" << endl;
    	cout << "                   11" << endl;
    	cout << "                   11" << endl;
    	cout << "                   11" << endl;
    	cout << "                   11" << endl;
    	cout << "                   11" << endl;
    	cout << "                11111111" << endl;
    	
		cout << "\nINGRESA UN NUMERO ENTERO, Y VEAMOS SI..." << endl;
		cout << "      1) El numero es cero, positivo o negativo." << endl;
		cout << "      2) El numero es par o impar (siendo positivo)." << endl;
		cout << "      3) El numero es multiplo de 7 o no lo es (siendo impar).\n" << endl;
		cout << ">>>: "; cin >> numbers;
		
		if( numbers % 2 == 1 && numbers % 7 >= 1 && numbers % 7 <= 6 ) {
			cout << "El numero ingresado: "<< numbers <<" NO es M U L T I P L O   D E  ((7))." << endl;
		}
		if( numbers % 2 == 1 && numbers % 7 == 0 ) {
			cout << "El numero ingresado: "<< numbers <<" es M U L T I P L O   D E  ((7))." << endl;
		}
		if( numbers % 2 == 0 && numbers != 0 && numbers >= 1 ) {
			cout << "El numero ingresado: "<< numbers <<" es P A R." << endl;
		}
		if( numbers % 2 == 1 && numbers >= 1 ) {
			cout << "El numero ingresado: "<< numbers <<" es I M P A R." << endl;
		}	
		if( numbers < 0 ) {
			cout << "El numero ingresado: "<< numbers <<" es N E G A T I V O." << endl;
		}
		if( numbers > 0 ) {
			cout << "El numero ingresado: "<< numbers <<" es P O S I T I V O." << endl;
		}
		if( numbers == 0 ) {
			cout << "El numero ingresado: "<< numbers <<" es C E R O." << endl;
		}	
		
		cout << "\nFIN DEL PROGRAMA... PRESIONA CUALQUIER TECLA PARA SALIR." << endl;	
		
	}
