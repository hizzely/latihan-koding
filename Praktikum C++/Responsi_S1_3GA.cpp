/* 
 * Program: Writeup Responsi SMT 1 Angka Ganjil - Nomor 3
 * Ditulis Oleh: Fajar Ru <rohmad.f@students.amikom.ac.id>
 * Algoritma dan Pemrograman - Universitas Amikom Yogyakarta 2018
 */

#include <iostream>
using namespace std;

int main()
{
    int pilihan;

    cout << "Menu Pilihan: " << endl
         << "1. Segitiga 1" << endl
         << "2. Segitiga 3" << endl
         << "3. Segitiga 5" << endl
         << "4. Segitiga 6" << endl
         << "5. Keluar" << endl
         << "Pilihan Anda: ";
    cin >> pilihan;

    /*
     * Cara memahami bagaimana cara kerja membuat 
     * segitiganya adalah, dengan membuat for-loop pertama 
     * yang mengatur jumlah baris (tinggi segitiga).
     * 
     * Kemudian membuat for-loop didalamnya dengan 
     * membayangkan for-loop tersebut menggambar segitiga 
     * dengan urutan perbaris.
     */
    switch(pilihan)
    {
        case 1:
            for (int a = 0; a < 6; a++)
            {
                for (int b = 0; b < a; b++)
                {
                    cout << "*";
                }

                cout << endl;
            }
            break;
        case 2:
            for (int a = 0; a < 6; a++)
            {
                for (int b = (6 - a); b > 0; b--)
                {
                    cout << " ";
                }

                for (int c = 0; c < a; c++)
                {
                    cout << "*";
                }

                cout << endl;
            }
            break;
        case 3:
            // BONUS. Dalam soal tidak ada contoh output.
            // yang artinya boleh tidak dikerjakan.
            for (int a = 0; a < 6; a++)
            {
                for (int b = (6 - a); b > 0; b--)
                {
                    cout << " ";
                }

                for (int c = 0; c < a; c++)
                {
                    cout << "*";
                }

                for (int d = 1; d < a; d++)
                {
                    cout << "*";
                }

                cout << endl;
            }
            break;
        case 4:
            for (int a = 0; a < 6; a++)
            {
                for (int b = 0; b < a; b++)
                {
                    cout << " ";
                }

                for (int c = a; c < 6; c++)
                {
                    cout << "*";
                }

                for (int d = a; d < (6 - 1); d++)
                {
                    cout << "*";
                }

                cout << endl;
            }
            break;
        default:
            cout << "Program selesai!";
            break;
    }

    return 0;
}
