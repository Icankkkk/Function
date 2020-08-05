#include <iostream>
#include <iomanip>
using namespace std;

void header() {
	cout << "1. Calculator\n"
		 << "2. Convert Desimal\n"
		 << "===================\n";
}

void headerCalculator() {
	cout << "\n1. Penjumlahan\n"
		 << "2. Pengurangan\n"
		 << "3. Perkalian\n"
		 << "4. Pembagian\n";
}
void headerDesimal() {
	cout << "\n1. Decimal to binary\n"
		 << "2. Decimal to octal\n"
		 << "3. Decimal to hexadecimal\n\n";
}

void prosesDes(int &n) {
	cout << "Masukan bilangan desimal : "; cin >> n;
}
void proses(long long int &a, long long int &b) {
	cout << "Masukan angka pertama\t: "; cin >> a;
	cout << "Masukan angka kedua\t: "; cin >> b;
}
void pilih(int &p) {
	cout << "Masukan pilihan anda : "; cin >> p;
}
// function" convert decimal
void desimalToBinary(int n) {
	int binaryNum[32];
	int i = 0;
	while(n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++; 
	}
	for(int j = i - 1; j >= 0; j--) 
		cout << binaryNum[j];
}
void desimalToOctal(int n) {
	cout << oct << n;
}
void desimalToHex(int n) {
	cout << hex << n;
}

long long int penjumlahan(long long int a, long long int b) {
	return a + b; // fungsi untuk penjumlahan
}
long long int pengurangan(long long int a, long long int b) {
	return a - b; // fungsi untuk pengurangan
}
long long int perkalian(long long int a, long long int b) {
	return a * b; // fungsi untuk perkalian
}
long double pembagian(long double a, long double b) {
	return a / b; // fungsi untuk pembagian
}

int main(int argc, char const *argv[])
{
	// tipe data
	int pil, n;
	long long int a, b; 
	char pilihan;
	
	do{
		header(); // call function void (header)
		cout << "Masukan pilihan : "; cin >> pil;
		switch(pil) {
		case 1:
		do{
			headerCalculator(); // call function header pattern
			cout << endl;
			proses(a,b); // pemrosesan 
			pilih(pil); // call function
			// pernyataan
			if(pil == 1) {
				cout << "Hasil penjumlahan = " << penjumlahan(a,b) << endl;
			}else 
				if(pil == 2) {
					cout << "Hasil pengurangan = " << pengurangan(a,b) << endl;
				}else
					if(pil == 3) {
						cout << "Hasil perkalian = " << perkalian(a,b) << endl;
					}else
						if(pil == 4) {
							cout << "Hasil pembagian = " << pembagian(a,b) << endl;
						}
			cout << "\nIngin mengulang [y/n].. ? "; cin >> pilihan;
		}while(pilihan == 'y'); // perulangan
		break;
		case 2:
		do{
			headerDesimal();
			prosesDes(n);
			pilih(pil);
				if(pil == 1) {
					cout << "Hasil convert to binary = "; desimalToBinary(n); cout << endl;
				}else if(pil == 2) {
					cout << "Hasil convert to octal = "; desimalToOctal(n); cout << endl;
				}else if(pil == 3) {
					cout << "Hasil convert to hexadecimal = "; desimalToHex(n); cout << endl;
				}else {
					cout << "Pilihan tidak tersedia :( " << endl;
				}
			cout << "\nIngin mengulang [y/n].. ? "; cin >> pilihan;
		}while(pilihan == 'y');
		break;
		default:
			cout << "Pilihan tidak tersedia :( " << endl;
	}	
	cout << "Ingin kembali ke menu awal [y/n].. ? "; cin >> pilihan;
	system("clear"); // clear screen
}while(pilihan == 'y'); // perulangan

	return 0;
}