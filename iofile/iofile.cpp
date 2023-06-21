#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	// membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("C:\\infile pemdas\\contohfile.txt");

	cout << "<= Menulis File, \'q\' untuk keluar" << endl;
	 
	// unlimitade loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan q
		if (baris == "q") break;
		// menulis dan memasukkan nilai dari 'baris' ke dalam file 
		outfile << baris << endl;
	}
	//selesai damam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode membaca 
	ifstream infile;
	//menunjuk ke sebuah file 
	infile.open("C:\\infile pemdas\\contohfile.txt");
	cout << endl << ">= Membuka dan Membaca file" << endl;
	//jika file ada maka 
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini 
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai 
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}
