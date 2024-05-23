// RowywoR //
#include <iostream>
using namespace std; 
int opcion, dia;

	main() {

		cout << "     <<<< CUAL ES TU MES DE NACIMIENTO? >>>>     " << endl;
		
		cout << "\nIngresa un numero segun la opcion: " << endl;
		cout << "------ 1. ENERO -------------" << endl;
		cout << "------ 2. FEBRERO -----------" << endl;
		cout << "------ 3. MARZO -------------" << endl;
		cout << "------ 4. ABRIL -------------" << endl;
		cout << "------ 5. MAYO --------------" << endl;
		cout << "------ 6. JUNIO -------------" << endl;
		cout << "------ 7. JULIO -------------" << endl;
		cout << "------ 8. AGOSTO ------------" << endl;
		cout << "------ 9. SEPTIEMBRE --------" << endl;
		cout << "------ 10. OCTUBRE ----------" << endl;
		cout << "------ 11. NOVIEMBRE --------" << endl;
		cout << "------ 12. DICIEMBRE --------" << endl;
		cout << "------ 13. Salir del programa" << endl;
		cout << ">>> "; cin >> opcion;
		
		switch(opcion) {
			case 1:
				cout << " <<<< ENERO... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 20) {
						cout << "Segun los datos que me proporcionaste...\nERES CAPRICORNIO." <<endl;
					} 
					else if (dia >= 21 && dia <= 31) {
						cout << "Segun los datos que me proporcionaste...\nERES ACUARIO." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 2:
				cout << " <<<< FEBRERO... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 19) {
						cout << "Segun los datos que me proporcionaste...\nERES ACUARIO." <<endl;
					} 
					else if (dia >= 20 && dia <= 29) {
						cout << "Segun los datos que me proporcionaste...\nERES PISCIS." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 3:
				cout << " <<<< MARZO... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 20) {
						cout << "Segun los datos que me proporcionaste...\nERES PISCIS." <<endl;
					} 
					else if (dia >= 21 && dia <= 31) {
						cout << "Segun los datos que me proporcionaste...\nERES ARIES." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 4:
				cout << " <<<< ABRIL... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 20) {
						cout << "Segun los datos que me proporcionaste...\nERES ARIES." <<endl;
					} 
					else if (dia >= 21 && dia <= 30) {
						cout << "Segun los datos que me proporcionaste...\nERES TAURO." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 5:
				cout << " <<<< MAYO... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 20) {
						cout << "Segun los datos que me proporcionaste...\nERES TAURO." <<endl;
					} 
					else if (dia >= 21 && dia <= 31) {
						cout << "Segun los datos que me proporcionaste...\nERES GEMINIS." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 6:
				cout << " <<<< JUNIO... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 21) {
						cout << "Segun los datos que me proporcionaste...\nERES GEMINIS." <<endl;
					} 
					else if (dia >= 22 && dia <= 30) {
						cout << "Segun los datos que me proporcionaste...\nERES CANCER." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 7:
				cout << " <<<< JULIO... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 22) {
						cout << "Segun los datos que me proporcionaste...\nERES CANCER." <<endl;
					} 
					else if (dia >= 23 && dia <= 31) {
						cout << "Segun los datos que me proporcionaste...\nERES LEO." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 8:
				cout << " <<<< AGOSTO... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 23) {
						cout << "Segun los datos que me proporcionaste...\nERES LEO." <<endl;
					} 
					else if (dia >= 24 && dia <= 31) {
						cout << "Segun los datos que me proporcionaste...\nERES VIRGO." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 9:
				cout << " <<<< SEPTIEMBRE... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 22) {
						cout << "Segun los datos que me proporcionaste...\nERES VIRGO." <<endl;
					} 
					else if (dia >= 23 && dia <= 30) {
						cout << "Segun los datos que me proporcionaste...\nERES LIBRA." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 10:
				cout << " <<<< OCTUBRE... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 22) {
						cout << "Segun los datos que me proporcionaste...\nERES LIBRA." <<endl;
					} 
					else if (dia >= 23 && dia <= 31) {
						cout << "Segun los datos que me proporcionaste...\nERES ESCORPIO." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 11:
				cout << " <<<< NOVIEMBRE... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 22) {
						cout << "Segun los datos que me proporcionaste...\nERES ESCORPIO." <<endl;
					} 
					else if (dia >= 23 && dia <= 30) {
						cout << "Segun los datos que me proporcionaste...\nERES SAGITARIO." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 12:
				cout << " <<<< DICIEMBRE... Y QUE DIA? >>>> :"; cin >> dia;
					if (dia >= 1 && dia <= 21) {
						cout << "Segun los datos que me proporcionaste...\nERES SAGITARIO." <<endl;
					} 
					else if (dia >= 22 && dia <= 31) {
						cout << "Segun los datos que me proporcionaste...\nERES CAPRICORNIO." <<endl;
					}
					else {
						cout << "ERROR: DATO NO VALIDO." <<endl;
					}
			break;
			
			case 13:
				cout << " SALIENDO DEL PROGRAMA... PRESIONA CUALQUIER BOTON PARA SALIR.";
			break;
			
			default:
				cout << " OPCION NO VALIDA: ERROR.";
		}

}
