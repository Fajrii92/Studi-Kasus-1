#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main(){
	int pilihan, harga, hasil, total;
	string nama, jenis;
	bool loop = true;
	while(loop){
		cout << "1. Menu Utama " << endl;
		cout << "2. Keluar" << endl;
		cout << "Pilihan Menu : ";
		cin >> pilihan;
		switch(pilihan){
			case 1 :
				{
				cin.ignore();
				cout << "Masukkan Nama Pelanggan : ";
				cin >> nama;
				cout << "Masukkan Jenis Bensin : ";
				cin >> jenis;
				cout << "Masukkan Total Liter : ";
				cin >> total;
				cout << "Masukkan Harga Bensin : ";
				cin >> harga;
				hasil = total * harga;
				cout << "Subtotal :" << hasil << endl;
				ofstream pFile;
				pFile.open("Struk.txt");
				pFile << "Nama Pelanggan \t: " << nama << endl;
				pFile << "Jenis Bensin \t: " << jenis << endl;
				pFile << "Total Liter \t: " << total << endl;
				pFile << "Harga Bensin \t: " << harga << endl;
				pFile.close();
				break;
				}
			case 2 :
				{
				ofstream ofs;
				ofs.open("Struk.txt", ios::app);
				ofs << "Subtotal \t\t: " << hasil << endl;
				ofs.close();
				loop = false;
				break;
				}
		}
	}
	return 0;
}
