// RowywoR //
#include <iostream>
using namespace std;
int A, B, C, comodin;

	main() {
	
		cout << "     A      BBBBB    CCCC  " << endl;
    	cout << "    A A     B    B  C      " << endl;
    	cout << "   A   A    BBBBB   C      " << endl;
    	cout << "  AAAAAAA   B    B  C      " << endl;
    	cout << " A       A  BBBBB    CCCC  " << endl;
    	cout << "                           " << endl;
    	cout << "   MENOR    MEDIO   MAYOR  " << endl;
    	
		cout << "\nAcomodemos los valores de A(Menor); B(Medio); C(Mayor);" << endl;
		cout << "      Ingresa un valor para A >>> "; cin >> A;
		cout << "      Ingresa un valor para B >>> "; cin >> B;
		cout << "      Ingresa un valor para C >>> "; cin >> C;

/* --------------------------------------------------------------------------------------------- */	
		if( A < B && B < C ) {
			cout << "\nLos valores que ingresaste tienen un orden exacto." <<endl;
		}
/* -------------------------------------------------------------- */		
		if ( A > B ) {
        	comodin = A;
        	A = B;
        	B = comodin;
    	}
/* -------------------------------------------------------------- */   	
    	if ( B > C ) {
        	comodin = B;
        	B = C;
        	C = comodin;

    		if ( A > B ) {
        		comodin = A;
        		A = B;
        		B = comodin;
    		}
    	}
/* -------------------------------------------------------------- */		
		cout << "\nVALORES EN EL ORDEN CORRECTO: " <<endl;
		cout << "A = " << A <<endl;
		cout << "B = " << B <<endl;
		cout << "C = " << C <<endl;
/* -------------------------------------------------------------- */		
		
		cout << "\nFIN DEL PROGRAMA... PRESIONA CUALQUIER TECLA PARA SALIR." << endl;	
		
	}
