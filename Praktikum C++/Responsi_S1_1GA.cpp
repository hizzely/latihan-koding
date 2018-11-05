/* 
 * Program: Writeup Responsi SMT 1 Angka Ganjil - Nomor 1
 * Ditulis Oleh: Fajar Ru <rohmad.f@students.amikom.ac.id>
 * Algoritma dan Pemrograman - Universitas Amikom Yogyakarta 2018
 */

#include <iostream>
using namespace std;

int main()
{
    int jumlahInput, angkaSaatIni, angkaRata, jumlahAngka = 0;

    // User memasukkan jumlah perulangan
    cout << "Masukkan jumlah perulangan: ";
    cin >> jumlahInput;

    for (int i = 1; i <= jumlahInput; i++)
    {
        // User memasukkan nilai angka saat ini.
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angkaSaatIni;

        // Nilai dari jumlahAngka saat ini ditambah 
        // dengan nilai dari angkaSaatIni
        jumlahAngka += angkaSaatIni;
    }

    // Hitung rata-rata dengan cara membagi
    // jumlahAngka dengan jumlahInput
    // -- nb. contoh program dalam soal menampilkan
    // -- hasil rata-rata dalam bilangan bulat.
    // -- sehingga program ini juga begitu.
    angkaRata = (jumlahAngka / jumlahInput);

    cout << "Jumlah Angka: " << jumlahAngka << endl
         << "Rata-rata: " << angkaRata;

    return 0;
}
