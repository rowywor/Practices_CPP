// RowywoR //
#include <iostream>
using namespace std; 

	main() {
		int n, final, band;
			
		cout << "Dame numero entero: " << endl;
		cin >> n;
		
		do {
				
			if (n % 2 == 0) {
				n = n / 2;
			}
			else {
				n = ( n * 3 ) + 1;
			}
			
		final = n;
		cout << final << endl; 
			
		} while(final != 1);

    	cout << "RESULTADO FINAL: " << final;

}
