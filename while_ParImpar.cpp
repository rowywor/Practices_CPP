// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		int entero, resultado_suma, resultado_product = 1;
		
		cout << "<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    	cout << "*--------------------------------------*" << endl;
    	cout << "  PARES: SUMA <<<>>> IMPARES: PRODUCTO  " << endl;
    	cout << "*--------------------------------------*" << endl;
    	cout << "<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    	
		cout << "\nIngresa un numero entero, el bucle se detendra si........." << endl;
        cout << "*-------- SUMA MAYOR A 50 Y PRODUCTO MAYOR A 150 --------* " << endl;
			
    		// UNA CONDICION U OTRA = VERDADERO, SI NINGUNA ES VERDADERA, SE DETIENE //
    		while (resultado_product <= 150 || resultado_suma <= 50) {
    			cout << "Numero >>> ";
        		cin >> entero;
        		
				// SUMA HASTA 50 //
        		if (entero % 2 == 0 && resultado_suma <= 50) {
            		resultado_suma += entero;
            		cout << "\nTu numero se SUMA = " << resultado_suma << "." << endl;
            		
            			if (resultado_suma > 50) {
							cout << "SE LLEGO A LA SUMA LIMITE" << endl;
						}
        		}
        		
				// PRODUCTO HASTA 150 //
        		if (entero % 2 != 0 && resultado_product <= 150) {
            		resultado_product *= entero;
            		cout << "\nTu numero se MULTIPLICA = " << resultado_product << "." << endl;
            		
						if (resultado_product > 150) {
							cout << "SE LLEGO A LA MULTIPLICACION LIMITE." << endl;
						}
        		}
    		}
    		
    		// RESULTADOS //
        	cout << "\nFINALIZANDO...... " << endl;
        	cout << "RESULTADO DE NUMEROS PARES: " << resultado_suma << "." << endl;
        	cout << "RESULTADO DE NUMEROS IMPARES: " << resultado_product << "." << endl;
        	
}

