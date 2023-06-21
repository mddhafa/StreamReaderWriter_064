#include <iostream>
#include <exception>
//untuk obyek yang akan di gunakan 
#include <array>
//untuk obyek yang akan di gunakan 
using namespace std;
int main() {
	cout << "awal program" << endl; // penanda 1
	try {
		array<int, 3> data = { 3, 5, 7 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkapan menggunakan obyek exception
		cout << e.what() << endl;
		/*akan di eksekusi karena array data hanya memiliki 3 elemen*/
	}
	cout << "Baris Program Yang terakhir" << endl;
	/*penanda 2: bahwa program berjalan tanpa berheti meskipun terjadi kesalahan*/

	return 0;
}
	