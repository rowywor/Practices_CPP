// RowywoR //
#include <iostream>
using namespace std;
int num1, num2, num3, num4, num5;

	main() { 
	cout << "**************************************************************" << endl;
	cout << "Analicemos cual numero es mayor y cual es menor de 5 numeros.." << endl;
	cout << "**************************************************************" << endl;
	cout << "Puedes ingresar el primer numero: "; cin >> num1;
	cout << "Puedes ingresar el segundo numero: "; cin >> num2;
	cout << "Puedes ingresar el tercer numero: "; cin >> num3;
	cout << "Puedes ingresar el cuarto numero: "; cin >> num4;
	cout << "Puedes ingresar el quinto numero: "; cin >> num5;
	
	// Para los numeros mayores =) //
	if( num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 ) {
		cout <<"\n"<<num1<<" Es el mayor numero." << endl;
	}
	if( num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 ) {
		cout <<"\n"<<num2<<" Es el mayor numero." << endl;
	}
	if( num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 ) {
		cout <<"\n"<<num3<<" Es el mayor numero." << endl;
	}
	if( num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 ) {
		cout <<"\n"<<num4<<" Es el mayor numero." << endl;
	}
	if( num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4 ) {
		cout <<"\n"<<num5<<" Es el mayor numero." << endl;
	}
	
	// Para los numeros menores =) //
	if( num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5 ) {
		cout <<"\n"<<num1<<" Es el menor numero." << endl;
	}
	if( num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5 ) {
		cout <<"\n"<<num2<<" Es el menor numero." << endl;
	}
	if( num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5 ) {
		cout <<"\n"<<num3<<" Es el menor numero." << endl;
	}
	if( num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5 ) {
		cout <<"\n"<<num4<<" Es el menor numero." << endl;
	}
	if( num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4 ) {
		cout <<"\n"<<num5<<" Es el menor numero." << endl;
	}
}
