// RowywoR //
#include <iostream>
#include <string>
using namespace std; 

string menu1 = "\n1. GRAMOS.    2. LIBRAS.    3. ONZAS.    4. PIEDRAS.";
string menu2 = "\n1. MILLA.    2. YARDA.    3. PIE.    4. PULGADA."; 
/*Guarde el menu, para evitar escribirlo en todos los Switch*/

int opc, sub_opc, sub_convert;
float cantidad;
	
	/* INICIO DE MAIN */
	main() {
	
		cout << "***************************************" << endl;
		cout << "    <<<< PESO - <> - LONGITUD >>>>     " << endl;
		cout << "         Que deseas convertir?         " << endl;
		cout << "***************************************" << endl;
		
		cout << "\nIngresa un numero segun la opcion: " << endl;
		cout << "1. Unidades de PESO." << endl;
		cout << "2. Unidades de LONGITUD." << endl;
		cout << "3. Salir del programa." << endl;
		cout << ">>> "; cin >> opc;
		
		/* INICIO DE OPCION PRINCIPAL */
		switch(opc) {
			
			/*----------------------------------------------------------------------------*/
			////////////////////   INICIO DE CASE 1: OPCION PRINCIPAL   ////////////////////
			/*----------------------------------------------------------------------------*/
			case 1:
				cout << "\n<<<< Seleccionaste: PESO. >>>>";
				cout << "\nIngresa la cantidad: "; cin >> cantidad;
					
				cout << "\nA que unidad PERTENECE tu cantidad: " << endl;
				cout << "1. GRAMOS. " << endl;
				cout << "2. LIBRAS. " << endl;
				cout << "3. ONZAS.  " << endl;
				cout << "4. PIEDRAS." << endl;
				
				cout << ">>> "; cin >> sub_opc;
				
				
				switch(sub_opc) {
					
					///////////////////////// CASE 1: SUB_OPCION ////////////////////////
					case 1:
						cout << "\n<<<< Seleccionaste: GRAMOS. >>>>";
						cout << "\nA que unidad lo quieres CONVERTIR: " << endl;
						cout << menu1 << endl;
						cout << ">>> "; cin >> sub_convert;
						
						switch(sub_convert) {
							case 1: 
								cout << "\n<<<< Seleccionaste: GRAMOS. >>>>" << endl;
								cout << "GRAMOS: "<< cantidad <<" <<<>>> GRAMOS: "<< cantidad <<"((Conversion no ejecutada))";
							break;
							
							case 2: 
								cout << "\n<<<< Seleccionaste: LIBRAS. >>>>" << endl;
								cout << "GRAMOS: "<< cantidad <<" <<<>>> LIBRAS: "<< cantidad / 453.592;
							break;
							
							case 3: 
								cout << "\n<<<< Seleccionaste: ONZAS. >>>>" << endl;
								cout << "GRAMOS: "<< cantidad <<" <<<>>> ONZAS: "<< cantidad / 28.3495;
							break;
							
							case 4: 
								cout << "\n<<<< Seleccionaste: PIEDRAS. >>>>" << endl;
								cout << "GRAMOS: "<< cantidad <<" <<<>>> PIEDRAS: "<< cantidad / 6.35029318;
							break;
							
							default:
								cout << "\nOPCION NO VALIDA. SALIENDO...";
						}
					break;
						
					///////////////////////// CASE 2: SUB_OPCION ////////////////////////
					case 2:
						cout << "\n<<<< Seleccionaste: LIBRAS. >>>>";
						cout << "\nA que unidad lo quieres CONVERTIR: " << endl;
						cout << menu1 << endl;
						cout << ">>> "; cin >> sub_convert;
						
						switch(sub_convert) {
							case 1: 
								cout << "\n<<<< Seleccionaste: GRAMOS. >>>>" << endl;
								cout << "LIBRAS: "<< cantidad <<" <<<>>> GRAMOS: "<< cantidad * 453.592;
							break;
							
							case 2: 
								cout << "\n<<<< Seleccionaste: LIBRAS. >>>>" << endl;
								cout << "LIBRAS: "<< cantidad <<" <<<>>> LIBRAS: "<< cantidad <<"((Conversion no ejecutada))";
							break;
							
							case 3: 
								cout << "\n<<<< Seleccionaste: ONZAS. >>>>" << endl;
								cout << "LIBRAS: "<< cantidad <<" <<<>>> ONZAS: "<< cantidad * 16;
							break;
							
							case 4: 
								cout << "\n<<<< Seleccionaste: PIEDRAS. >>>>" << endl;
								cout << "LIBRAS: "<< cantidad <<" <<<>>> PIEDRAS: "<< cantidad / 14;
							break;
							
							default:
								cout << "\nOPCION NO VALIDA. SALIENDO...";
						}
					break;
						
					///////////////////////// CASE 3: SUB_OPCION ////////////////////////
					case 3:
						cout << "\n<<<< Seleccionaste: ONZAS. >>>>";
						cout << "\nA que unidad lo quieres CONVERTIR: " << endl;
						cout << menu1 << endl;
						cout << ">>> "; cin >> sub_convert;
						
						switch(sub_convert) {
							case 1: 
								cout << "\n<<<< Seleccionaste: GRAMOS. >>>>" << endl;
								cout << "ONZAS: "<< cantidad <<" <<<>>> GRAMOS: "<< cantidad * 28.3495;
							break;
							
							case 2: 
								cout << "\n<<<< Seleccionaste: LIBRAS. >>>>" << endl;
								cout << "ONZAS: "<< cantidad <<" <<<>>> LIBRAS: "<< cantidad / 16;
							break;
							
							case 3: 
								cout << "\n<<<< Seleccionaste: ONZAS. >>>>" << endl;
								cout << "ONZAS: "<< cantidad <<" <<<>>> ONZAS: "<< cantidad <<"((Conversion no ejecutada))";
							break;
							
							case 4: 
								cout << "\n<<<< Seleccionaste: PIEDRAS. >>>>" << endl;
								cout << "ONZAS: "<< cantidad <<" <<<>>> PIEDRAS: "<< cantidad / 224;
							break;
							
							default:
								cout << "\nOPCION NO VALIDA. SALIENDO...";
						}
					break;
					
					///////////////////////// CASE 4: SUB_OPCION ////////////////////////
					case 4:
						cout << "\n<<<< Seleccionaste: PIEDRAS. >>>>";
						cout << "\nA que unidad lo quieres CONVERTIR: " << endl;
						cout << menu1 << endl;
						cout << ">>> "; cin >> sub_convert;
						
						switch(sub_convert) {
							case 1: 
								cout << "\n<<<< Seleccionaste: GRAMOS. >>>>" << endl;
								cout << "PIEDRAS: "<< cantidad <<" <<<>>> GRAMOS: "<< cantidad * 14 * 453.592;
							break;
							
							case 2: 
								cout << "\n<<<< Seleccionaste: LIBRAS. >>>>" << endl;
								cout << "PIEDRAS: "<< cantidad <<" <<<>>> LIBRAS: "<< cantidad * 14;
							break;
							
							case 3: 
								cout << "\n<<<< Seleccionaste: ONZAS. >>>>" << endl;
								cout << "PIEDRAS: "<< cantidad <<" <<<>>> ONZAS: "<< cantidad * 14 * 16;
							break;
							
							case 4: 
								cout << "\n<<<< Seleccionaste: PIEDRAS. >>>>" << endl;
								cout << "PIEDRAS: "<< cantidad <<" <<<>>> PIEDRAS: "<< cantidad <<"((Conversion no ejecutada))";
							break;
							
							default:
								cout << "\nOPCION NO VALIDA. SALIENDO...";
						}
					break;
					
					///////////////////////// DEFAULT: SUB_OPCION ////////////////////////
					default:
						cout << "\nOPCION NO VALIDA. SALIENDO...";
					
				}  /* FINAL DE SUB_OPCION */
			break; /* FINAL DE CASE 1 */
			
			/*----------------------------------------------------------------------------*/
			////////////////////   INICIO DE CASE 2: OPCION PRINCIPAL   ////////////////////
			/*----------------------------------------------------------------------------*/
			case 2:
				cout << "\n<<<< Seleccionaste: LONGITUD. >>>>";
				cout << "\nIngresa la cantidad: "; cin >> cantidad;
					
				cout << "\nA que medida PERTENECE tu cantidad: " << endl;
				cout << "1. MILLA. " << endl;
				cout << "2. YARDA. " << endl;
				cout << "3. PIE.  " << endl;
				cout << "4. PULGADA." << endl;
				
				cout << ">>> "; cin >> sub_opc;
				
				
				switch(sub_opc) {
					
					///////////////////////// CASE 1: SUB_OPCION ////////////////////////
					case 1:
						cout << "\n<<<< Seleccionaste: MILLAS. >>>>";
						cout << "\nA que unidad lo quieres CONVERTIR: " << endl;
						cout << menu2 << endl;
						cout << ">>> "; cin >> sub_convert;
						
						switch(sub_convert) {
							case 1: 
								cout << "\n<<<< Seleccionaste: MILLA. >>>>" << endl;
								cout << "MILLAS: "<< cantidad <<" <<<>>> MILLAS: "<< cantidad <<"((Conversion no ejecutada))";
							break;
							
							case 2: 
								cout << "\n<<<< Seleccionaste: YARDA. >>>>" << endl;
								cout << "MILLAS: "<< cantidad <<" <<<>>> YARDAS: "<< cantidad * 1760;
							break;
							
							case 3: 
								cout << "\n<<<< Seleccionaste: PIE. >>>>" << endl;
								cout << "MILLAS: "<< cantidad <<" <<<>>> PIES: "<< cantidad * 5280;
							break;
							
							case 4: 
								cout << "\n<<<< Seleccionaste: PULGADA. >>>>" << endl;
								cout << "MILLAS: "<< cantidad <<" <<<>>> PULGADAS: "<< cantidad * 63360;
							break;
							
							default:
								cout << "\nOPCION NO VALIDA. SALIENDO...";
						}
					break;
					
					///////////////////////// CASE 2: SUB_OPCION ////////////////////////
					case 2:
						cout << "\n<<<< Seleccionaste: YARDAS. >>>>";
						cout << "\nA que unidad lo quieres CONVERTIR: " << endl;
						cout << menu2 << endl;
						cout << ">>> "; cin >> sub_convert;
						
						switch(sub_convert) {
							case 1: 
								cout << "\n<<<< Seleccionaste: MILLA. >>>>" << endl;
								cout << "YARDAS: "<< cantidad <<" <<<>>> MILLAS: "<< cantidad / 1760;
							break;
							
							case 2: 
								cout << "\n<<<< Seleccionaste: YARDA. >>>>" << endl;
								cout << "YARDAS: "<< cantidad <<" <<<>>> YARDAS: "<< cantidad <<"((Conversion no ejecutada))";
							break;
							
							case 3: 
								cout << "\n<<<< Seleccionaste: PIE. >>>>" << endl;
								cout << "YARDAS: "<< cantidad <<" <<<>>> PIES: "<< cantidad * 3;
							break;
							
							case 4: 
								cout << "\n<<<< Seleccionaste: PULGADA. >>>>" << endl;
								cout << "YARDAS: "<< cantidad <<" <<<>>> PULGADAS: "<< cantidad * 36;
							break;
							
							default:
								cout << "\nOPCION NO VALIDA. SALIENDO...";
						}
					break;
					
					///////////////////////// CASE 3: SUB_OPCION ////////////////////////
					case 3:
						cout << "\n<<<< Seleccionaste: PIES. >>>>";
						cout << "\nA que unidad lo quieres CONVERTIR: " << endl;
						cout << menu2 << endl;
						cout << ">>> "; cin >> sub_convert;
						
						switch(sub_convert) {
							case 1: 
								cout << "\n<<<< Seleccionaste: MILLA. >>>>" << endl;
								cout << "PIES: "<< cantidad <<" <<<>>> MILLAS: "<< cantidad / 5280;
							break;
							
							case 2: 
								cout << "\n<<<< Seleccionaste: YARDA. >>>>" << endl;
								cout << "PIES: "<< cantidad <<" <<<>>> YARDAS: "<< cantidad / 3;
							break;
							
							case 3: 
								cout << "\n<<<< Seleccionaste: PIE. >>>>" << endl;
								cout << "PIES: "<< cantidad <<" <<<>>> PIES: "<< cantidad <<"((Conversion no ejecutada))";
							break;
							
							case 4: 
								cout << "\n<<<< Seleccionaste: PULGADA. >>>>" << endl;
								cout << "PIES: "<< cantidad <<" <<<>>> PULGADAS: "<< cantidad * 12;
							break;
							
							default:
								cout << "\nOPCION NO VALIDA. SALIENDO...";
						}
					break;
					
					///////////////////////// CASE 4: SUB_OPCION ////////////////////////
					case 4:
						cout << "\n<<<< Seleccionaste: PULGADA. >>>>";
						cout << "\nA que unidad lo quieres CONVERTIR: " << endl;
						cout << menu2 << endl;
						cout << ">>> "; cin >> sub_convert;
						
						switch(sub_convert) {
							case 1: 
								cout << "\n<<<< Seleccionaste: MILLA. >>>>" << endl;
								cout << "PULGADAS: "<< cantidad <<" <<<>>> MILLAS: "<< cantidad / 63360;
							break;
							
							case 2: 
								cout << "\n<<<< Seleccionaste: YARDA. >>>>" << endl;
								cout << "PULGADAS: "<< cantidad <<" <<<>>> YARDAS: "<< cantidad / 36;
							break;
							
							case 3: 
								cout << "\n<<<< Seleccionaste: PIE. >>>>" << endl;
								cout << "PULGADAS: "<< cantidad <<" <<<>>> PIES: "<< cantidad / 12;
							break;
							
							case 4: 
								cout << "\n<<<< Seleccionaste: PULGADA. >>>>" << endl;
								cout << "PULGADAS: "<< cantidad <<" <<<>>> PULGADAS: "<< cantidad <<"((Conversion no ejecutada))";
							break;
							
							default:
								cout << "\nOPCION NO VALIDA. SALIENDO...";
						}
					break;
					
					///////////////////////// DEFAULT: SUB_OPCION ////////////////////////
					default:
						cout << "\nOPCION NO VALIDA. SALIENDO...";			
			
				}  /* FINAL DE SUB_OPCION */
			break; /* FINAL DE CASE 2*/
			
			/* INICIO DE CASE 3: OPCION PRINCIPAL */
			case 3:
				cout << "\nSALIENDO DEL PROGRAMA... \nPRESIONA CUALQUIER TECLA PARA SALIR. =)";
			break;
			/* DEFAULT: OPCION PRINCIPAL */
			default:
				cout << "\nOPCION NO VALIDA. SALIENDO...";
				
		/* FINAL DE OPCION PRINCIPAL */
		
		}
/* FINAL DE MAIN */		 
}
