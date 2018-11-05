/* 
 * Program: Writeup Responsi SMT 1 Angka Genap - Nomor 1
 * Ditulis Oleh: Fajar Ru <rohmad.f@students.amikom.ac.id>
 * Algoritma dan Pemrograman - Universitas Amikom Yogyakarta 2018
 */

#include <iostream>
using namespace std;

int main()
{
    int jumlahInput, angkaTerkecil = 0, angkaTerbesar = 0, angkaSaatIni = 0;
    
    // User memasukkan jumlah perulangan
    cout << "Masukkan jumlah perulangan: ";
    cin >> jumlahInput;

    for (int i = 1; i <= jumlahInput; i++)
    {
        // User memasukkan nilai angka saat ini.
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angkaSaatIni;

        // Cek apakah nilai dari angkaSaatIni lebih besar dari nilai angkaTerbesar?
        if (angkaSaatIni > angkaTerbesar)
            angkaTerbesar = angkaSaatIni;

        // Cek apakah nilai dari angkaTerkecil saat ini nol?
        // atau nilai dari angkaSaatIni lebih kecil daripada nilai angkaTerkecil?
        if (angkaTerkecil == 0 || angkaSaatIni < angkaTerkecil)
            angkaTerkecil = angkaSaatIni;
    }

    cout << "Angka terbesar: " << angkaTerbesar << endl
         << "Angka terkecil: " << angkaTerkecil;

    return 0;
}
