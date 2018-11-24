/*
	Program: Challenge Sorting Nilai dalam Array Satu Dimensi
	Ditulis Oleh: Rohmad Fajarudin <rohmad.f@students.amikom.ac.id>
	Algoritma dan Pemrograman - Universitas Amikom Yogyakarta 2018
	
	Penggunaan program ini menggunakan library <algorithm.h> yang diinclude
	dibawah <iostream>
 */
 
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int jumlahInput;
	
	cout << "Masukkan Jumlah Input: ";
	cin >> jumlahInput;
	
	// Gunakan input user sebagai nilai size
	// untuk inisialisasi array satu dimensi
	int angka[jumlahInput];
	
	for (int i = 0; i < jumlahInput; i++)
	{
		int urutan = i + 1;
		
		cout << "Angka ke-" << urutan << " : ";
		cin >> angka[i];
	}
	
	// Memanggil fungsi sort() untuk
	// mengurutkan nilai didalam array
	// dalam urutan Ascending (kecil ke besar)
	sort(angka, angka + jumlahInput);
	
	// Output kecil ke besar
	cout << "Angka terkecil -> terbesar" << endl;
	for (int i = 0; i < jumlahInput; i++)
	{
		cout << angka[i] << endl;
	}
	
	// Karena Kecil ke Besar sudah urut, maka 
	// Untuk mendapatkan Besar ke Kecil
	// bisa langsung dioutputkan secara terbalik
	cout << "Angka terbesar -> terkecil" << endl;
	for (int i = jumlahInput - 1; i >= 0; i--)
	{
		cout << angka[i] << endl;
	}
	
	return 0;
}