// RowywoR //
#include <iostream>
using namespace std;

int num1, num2, result, opcion;
void sum(); // Funcion para sumar
void rest(); // Funcion para restar
void mult(); // Funcion para multiplicar
void div(); // Funcion para dividir
void opc(); // Funcion para mostrar menu de opciones

	main() {
		cout << " // ********************** // " << endl;
		cout << " // OPERACIONES BASICAS... // " << endl;
		cout << " // ********************** // " << endl;
		
		cout << "\nUsemos dos valores, segun operacion seleccionada." << endl;
		cout << "PRIMER VALOR: "; cin >> num1;
		cout << "SEGUNDO VALOR: "; cin >> num2;
		opc();
		
	}
	
void sum() {
	result = num1 + num2;
	cout << "La suma de tus valores es: "<<result<<"." << endl;
}
void rest() {
	result = num1 - num2;
	cout << "La resta de tus valores es: "<<result<<"." << endl;
}
void mult() {
	result = num1 * num2;
	cout << "La multiplicacion de tus valores es: "<<result<<"." << endl;
}
void div() {
	result = num1 / num2;
	cout << "La division de tus valores es: "<<result<<"." << endl;
}
void opc() {
	cout << endl;
	cout << "VALORES ALMACENADOS CORRECTAMENTE... \nSelecciona la opcion: " << endl;
	cout << "--------> 1: SUMA" << endl;
	cout << "--------> 2: RESTA" << endl;
	cout << "--------> 3: MULTIPLICACION" << endl;
	cout << "--------> 4: DIVISION" << endl;
	cout << " >>>> "; cin >> opcion;	
	
	switch(opcion) {
			case 1:
				sum(); 
			break;
			
			case 2:
				rest(); 
			break;
			
			case 3:
				mult();
			break;
			
			case 4:
				div(); 
			break;
	}
}

