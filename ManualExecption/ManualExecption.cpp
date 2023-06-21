#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}

	catch (int a) {
		//blok ini akan di eksekusi
		cout << "Pengecualian akan di eksekusi" << endl;
	}

	catch (...) {
		/*jika selain integer maka blok ini akan dieksekusi*/
		cout << "default Pengecualian eksekusi" << endl;
	}

	return 0;
}