// SOAL : Buat program yang menerima input nama karyawan, jumlah jam kerja, dan tarif perjam. Program harus menghitung gaji total setiap karyawan dan menampilkan output dengan format tabel yang rapi menggunakan manipulators.
// Modifikasi : Tarif per jam sesuai posisi karyawan. Misal, magang, staf junior, staf senior, team leader, dan kepala departemen.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string fullName, posisi;
    double jamKerja, tarif, gajiTotal;

    cout << "Masukkan Nama Lengkap Karyawan: ";
    getline(cin, fullName);
    cout << "Masukkan salah satu Posisi Karyawan berikut: ";
    getline(cin, posisi);
    cout << "Masukkan Durasi Jam Kerja: ";
    cin >> jamKerja;

    if (posisi == "magang")
    {
        tarif = 50000;
    }
    else if (posisi == "staf junior")
    {
        tarif = 75000;
    }
    else if (posisi == "staf senior")
    {
        tarif = 100000;
    }
    else if (posisi == "team leader")
    {
        tarif = 150000;
    }
    else if (posisi == "kepala departemen")
    {
        tarif = 200000;
    }
    else
    {
        cout << "Posisi tidak valid! Kalo ngisi yang bener dong! IQRO!!" << endl;
        return 1;
    }

    gajiTotal = jamKerja * tarif;

    cout << right << setw(25) << "Nama Karyawan  |" << setw(25) << "Posisi  |" << setw(25) << "Durasi Jam Kerja  |" << setw(25) << "Gaji Karyawan" << endl;
    cout << right << setw(22) << fullName << "  |" << setw(22) << posisi << "  |" << setw(22) << jamKerja << "  |" << setw(20) << gajiTotal << endl;

    return 0;
}
