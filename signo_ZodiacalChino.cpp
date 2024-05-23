// RowywoR //
#include <iostream>
using namespace std;
int nac, signo_zodiac, neg_a_pos = -1;

	main() {
	
	setlocale(LC_ALL, "");
	
	
		cout << "/////////////////////////////////// " << endl;
		cout << "CUAL ES TU SIGNO ZODIACAL CHINO?... " << endl;
		cout << "/////////////////////////////////// " << endl;
		
		cout << "Ingresa tu año de nacimiento: >>> "; cin >> nac;
		
		if (nac < 0) {
        	nac = nac * neg_a_pos;
        	signo_zodiac = nac % 12;
    	} 
		else {
        	signo_zodiac = nac % 12;
    	}
		
		switch(signo_zodiac) {
			case 0: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: MONO.";
				break;
			case 1: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: GALLO.";
				break;
			case 2: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: PERRO.";
				break;
			case 3: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: CERDO.";
				break;
			case 4: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: RATA.";
				break;
			case 5: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: BUEY.";
				break;
			case 6: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: TIGRE.";
				break;
			case 7: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: CONEJO.";
				break;
			case 8: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: DRAGON.";
				break;
			case 9: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: SERPIENTE.";
				break;
			case 10: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: CABALLO.";
				break;
			case 11: cout << "\nSegun tu AÑO DE NACIMIENTO: "<< nac <<", tu SIGNO ZODIACAL CHINO es: CABRA.";
				break;
			default: cout << "ERROR... PRESIONE CUALQUIER TECLA PARA SALIR.";
				break;
		}
}
