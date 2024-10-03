// SOAL : Buat program yang menerima input panjang, lebar, dan tinggi ruangan dalam meter. Program harus menghitung luas permukaan total dinding ruangan, jumlah liter cat yang dibutuhkan (dengan asumsi 1 liter cat dapat mengecat 10 m²), dan total biaya untuk membeli cat berdasarkan harga per liter. Program akan menampilkan hasil dengan format desimal dua digit.
// Modifikasi : Memberikan informasi tambahan tentang kategori jumlah cat yang dibutuhkan. Jika jumlah cat lebih dari 10 liter, tampilkan "Banyak Cat Dibutuhkan". Jika jumlah cat antara 5 hingga 10 liter, tampilkan "Sedang". Jika jumlah cat kurang dari 5 liter, tampilkan "Sedikit".

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double panjang;
    double lebar;
    double tinggi;
    double luas;
    double jumlahLiterCat;
    double hargaCat;
    string kategoriCat;

    cout << "Masukkan Nilai Panjang Balok: ";
    cin >> panjang;
    cout << "Masukkan Nilai Lebar Balok: ";
    cin >> lebar;
    cout << "Masukkan Nilai Tinggi Balok: ";
    cin >> tinggi;

    luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
    jumlahLiterCat = luas / 10;
    hargaCat = jumlahLiterCat * 5000;

    if (jumlahLiterCat > 10)
    {
        kategoriCat = "Banyak Cat Dibutuhkan";
    }
    else if (jumlahLiterCat >= 5 && jumlahLiterCat <= 10)
    {
        kategoriCat = "Sedang";
    }
    else
    {
        kategoriCat = "Sedikit";
    }

    cout << right << setw(20) << "Panjang Balok  |" << setw(20) << "Lebar Balok  |" << setw(20) << "Tinggi Balok  " << endl;
    cout << right << setw(17) << panjang << "  |" << setw(17) << lebar << "  |" << setw(17) << tinggi << "  " << endl;
    cout << left << setw(25) << "Luas Permukaan Dinding" << ": " << fixed << setprecision(2) << luas << " m²" << endl;
    cout << left << setw(25) << "Jumlah Liter Cat" << ": " << fixed << setprecision(2) << jumlahLiterCat << " liter" << endl;
    cout << left << setw(25) << "Total Biaya" << ": Rp." << fixed << setprecision(2) << hargaCat << endl;
    cout << left << setw(25) << "Kategori Cat" << ": " << kategoriCat << endl;

    return 0;
}
