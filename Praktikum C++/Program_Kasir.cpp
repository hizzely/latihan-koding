/* 
 * Program: Studi Kasus Aplikasi Kasir
 * Ditulis oleh: Fajar Ru <kzofajar@gmail.com> @27-Oct-2018
 * 
 * Note:
 * Program ini hanya uji coba dan belum didesain untuk bisa
 * menghandle nilai uang yang besar.
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int jumlahBarang, qtyBarang, totalTransaksi = 0;
	double hargaBarang, hargaDiskon, totalBayar = 0;
	bool isProgramFinished = false;
	char reinputConfirm;
	
	do {
		cout << "Berapa barang yang anda beli? ";
		cin >> jumlahBarang;
		totalTransaksi += jumlahBarang;
		
		for (int i = 1; i <= jumlahBarang; i++)
		{
			cout << endl << "BARANG KE-" << i << endl;
			
			cout << "< Masukkan Harga: ";
			cin >> hargaBarang;
			
			cout << "< Masukkan Kuantitas: ";
			cin >> qtyBarang;
			
			// Harga barang satuan dikali jumlah kuantitas barang.
			hargaBarang *= qtyBarang;

			// Penerapan Diskon fix 10%
			hargaDiskon = ((hargaBarang * 10) / 100);
			hargaBarang -= hargaDiskon;
			cout << "> Dapat Diskon 10%: Rp" << hargaDiskon << endl;
			
			cout << "> Subtotal: Rp" 
				 << hargaBarang << endl;
			
			// Nilai totalBayar saat ini ditambah dengan 
			// nilai hasil kalkulasi harga barang saat ini.
			totalBayar += hargaBarang;
		}
		
		cout << endl << "Input barang lagi? (Y/N): ";
		cin >> reinputConfirm;
		// Jika huruf kecil, ubah menjadi huruf besar
		reinputConfirm = toupper(reinputConfirm);
		
		switch (reinputConfirm)
		{
			case 'Y':
				break;
			case 'N':
				isProgramFinished = true;
				break;
			default:
				cout << "Pilihan Salah!" << endl;
				break;
		}
		
	} while (!isProgramFinished);
	
	// Akhir transaksi
	cout << endl
		 << "----- Transaksi Selesai -----" << endl
		 << "Total transaksi: " << totalTransaksi << endl
		 << "Total bayar: Rp" << totalBayar;
	
	return 0;
}