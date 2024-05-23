// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		char x;
		
		cout << "***************************** " << endl; 
		cout << "----- A L F A B E T O S -----" << endl;
		cout << "***************************** " << endl; 
		
		cout << "----------- ALFABETO DESCENDENTE ------------" << endl;
		for (x = 'A'; x <= 'Z'; x++) {
			cout << "---> "<<x<<" <---" <<endl;
		}
		
		cout << "----------- ALFABETO DESCENDENTE ------------" << endl;
		for (x = 'Z'; x >= 'A'; x--) {
			cout << "---> "<<x<<" <---" <<endl;
		}
}
