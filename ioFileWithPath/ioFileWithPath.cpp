#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukkan Nama File :";
	cin >> NamaFile;

	// membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

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
	infile.open(NamaFile, ios::in);
	cout << endl << ">= Membuka dan Membaca file" << endl;
	//jika file ada maka 
	if (infile.is_open())
	{
		