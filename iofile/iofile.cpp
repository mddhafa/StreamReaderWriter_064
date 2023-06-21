#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	// membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

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
}