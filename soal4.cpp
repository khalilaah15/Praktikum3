// SOAL : Buat program yang menerima input jumlah uang dalam Rupiah dan kurs konversi ke Dollar. Program harus menghitung jumlah dalam Dollar dan menampilkan hasilnya dengan dua digit desimal.
// Modifikasi : Memilih mata uang tujuan konversi, dolar, euro, yen, rupe, rial, won, ringgit, dan bath.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double jumlahRupiah;
    double jumlahKonversi;
    string mataUang;

    cout << "Masukkan Nominal Rupiah: ";
    cin >> jumlahRupiah;

    cout << "Pilih Mata Uang Tujuan (dolar, euro, yen, rupe, rial, won, ringgit, bath): ";
    cin >> mataUang;

    if (mataUang == "dolar")
    {
        jumlahKonversi = jumlahRupiah / 15000;
    }
    else if (mataUang == "euro")
    {
        jumlahKonversi = jumlahRupiah / 17084.48;
    }
    else if (mataUang == "yen")
    {
        jumlahKonversi = jumlahRupiah / 105.38;
    }
    else if (mataUang == "rupe")
    {
        jumlahKonversi = jumlahRupiah / 184.13;
    }
    else if (mataUang == "rial")
    {
        jumlahKonversi = jumlahRupiah / 4120.44;
    }
    else if (mataUang == "won")
    {
        jumlahKonversi = jumlahRupiah / 11.59;
    }
    else if (mataUang == "ringgit")
    {
        jumlahKonversi = jumlahRupiah / 3500;
    }
    else if (mataUang == "bath")
    {
        jumlahKonversi = jumlahRupiah / 466.94;
    }
    else
    {
        cout << "Mata uang tidak valid!" << endl;
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << right << setw(25) << "Nominal Rupiah  |" << setw(25) << "Nominal " << mataUang << endl;
    cout << right << setw(22) << jumlahRupiah << "  |" << setw(22) << jumlahKonversi << endl;

    return 0;
}
