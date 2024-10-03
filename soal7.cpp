// SOAL : Buat program yang menerima input jarak tempuh (dalam km), konsumsi bahan bakar per km, dan harga bahan bakar per liter. Program harus menghitung total biaya bahan bakar untuk perjalanan dan menampilkannya dengan format mata uang.
// Modifikasi : Memberikan deskripsi tentang efisiensi bahan bakar. Jika konsumsi bahan bakar lebih dari 15 km/l, tampilkan "Efisien".Jika konsumsi bahan bakar antara 10 km/l dan 15 km/l, tampilkan "Cukup Efisien".Jika konsumsi bahan bakar kurang dari 10 km/l, tampilkan "Boros".

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double jarakTempuh;
    double konsumsiBahanBakar;
    double hargaBahanBakar;
    double kebutuhanBahanBakar;
    double totalBiaya;
    string deskripsiEfisiensi;

    cout << "Masukkan Jarak Tempuh (km): ";
    cin >> jarakTempuh;
    cout << "Masukkan Konsumsi Bahan Bakar per/km: ";
    cin >> konsumsiBahanBakar;
    cout << "Masukkan Harga Bahan Bakar per/liter: ";
    cin >> hargaBahanBakar;

    kebutuhanBahanBakar = jarakTempuh * konsumsiBahanBakar;
    totalBiaya = kebutuhanBahanBakar * hargaBahanBakar;

    if (konsumsiBahanBakar > 15)
    {
        deskripsiEfisiensi = "Efisien";
    }
    else if (konsumsiBahanBakar >= 10 && konsumsiBahanBakar <= 15)
    {
        deskripsiEfisiensi = "Cukup Efisien";
    }
    else
    {
        deskripsiEfisiensi = "Boros";
    }

    cout << left;
    cout << setw(20) << "Total biaya kebutuhan bahan bakar" << ": " << fixed
         << setprecision(2) << "Rp." << totalBiaya << endl;
    cout << setw(20) << "Deskripsi Efisiensi" << ": " << deskripsiEfisiensi << endl;

    return 0;
}
