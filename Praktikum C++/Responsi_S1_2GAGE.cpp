/* 
 * Program: Writeup Responsi SMT 1 Angka Ganjil Genap - Nomor 2
 * Ditulis Oleh: Fajar Ru <rohmad.f@students.amikom.ac.id>
 * Algoritma dan Pemrograman - Universitas Amikom Yogyakarta 2018
 */

#include <iostream>
using namespace std;

int main()
{
    string platNomor;
    int jamMasuk, jamKeluar, lamaParkir, uangBayar, totalBayar = 0;

    cout << "PROGRAM MENENTUKAN BIAYA PARKIR" << endl << endl;

    // INPUT PLAT NOMOR
    cout << "Plat No. Anda: ";
    getline(cin, platNomor);

    // INPUT JAM MASUK
    cout << "Jam Masuk (bilangan bulat): ";
    cin >> jamMasuk;

    // INPUT JAM KELUAR
    cout << "Jam Keluar (bilangan bulat): ";
    cin >> jamKeluar;

    cout << endl;

    // OUTPUT LAMA PARKIR
    // -- Hasil yang tidak diinginkan akan keluar
    // -- jika memasukkan jam keluar lebih kecil dari
    // -- jam masuk. Ini karena rumus ini tidak diharapkan
    // -- untuk menghitung lama parkir lebih dari satu hari (0-24)
    lamaParkir = (jamKeluar - jamMasuk);
    cout << "Lama Parkir: " << lamaParkir << " Jam" << endl;

    // OUTPUT PLAT NOMOR
    cout << "Plat Nomor: " << platNomor << endl;

    // OUTPUT BAYAR PARKIR
    // -- Dalam soal, ditentukan bahwa biaya parkir pada
    // -- satu jam pertama adalah 2000, dan satu jam seterusnya 500. 
    // -- 
    // -- Karena perhitungan lama parkir dihitung per satu jam, 
    // -- dan angkanya bulat maka kita bisa langsung menghitung
    // -- biaya parkirnya menjadi satu jam.
    // --
    // -- Dan jika lama parkirnya lebih dari satu jam maka
    // -- kita tinggal menghitung lama parkir dikurangi satu dan
    // -- hasilnya dikali 500. Kemudian hasilnya ditambahkan
    // -- ke biaya parkir satu jam pertama.
    totalBayar = 2000;
    if (((lamaParkir - 1) > 0))
        totalBayar += (500 * lamaParkir);
    cout << "Biaya Parkir: " << totalBayar << endl;

    cout << endl;

    // INPUT PEMBAYARAN
    cout << "--- Silahkan Bayar ---" << endl;
    cout << "Uang anda: ";
    cin >> uangBayar;

    // OUTPUT KEMBALIAN
    cout << "Kembalian anda: " << (uangBayar - totalBayar) << endl;
    cout << "Terimakasih sudah parkir disini!";

    return 0;
}
