// Soal : Buat program yang menampilkan tabel konversi dari meter ke sentimeter, millimeter, dan kilometer untuk nilai dari 1 hingga 10 meter. Gunakan manipulators untuk menyusun tabel dengan rapi.
// Modifikasi : Membuat pengguna untuk bisa memilih jenis konversi: meter ke sentimeter, meter ke milimeter, atau meter ke kilometer. Program akan melakukan konversi sesuai dengan pilihan pengguna dan menampilkan hasilnya. Misal tetapkan di awal inputan pengguna hanya meter, lalu pengguna bisa memilih konversi ke satuanyang lainnya.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float meter;
    float sentimeter;
    float milimeter;
    double kilometer;
    int pilihan;

    cout << "Masukkan nilai dalam Meter: ";
    cin >> meter;

    cout << "Pilih jenis konversi:\n";
    cout << "1. Meter ke Sentimeter\n";
    cout << "2. Meter ke Milimeter\n";
    cout << "3. Meter ke Kilometer\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        sentimeter = meter * 100;
        cout << fixed << setprecision(2);
        cout << right << setw(15) << "Meter" << setw(15) << "Sentimeter" << endl;
        cout << setw(15) << meter << setw(15) << sentimeter << endl;
        break;

    case 2:
        milimeter = meter * 1000;
        cout << fixed << setprecision(2);
        cout << right << setw(15) << "Meter" << setw(15) << "Milimeter" << endl;
        cout << setw(15) << meter << setw(15) << milimeter << endl;
        break;

    case 3:
        kilometer = meter / 1000;
        cout << fixed << setprecision(2);
        cout << right << setw(15) << "Meter" << setw(15) << "Kilometer" << endl;
        cout << setw(15) << meter << setw(15) << kilometer << endl;
        break;

    default:
        cout << "Pilihan tidak valid!" << endl;
        break;
    }

    return 0;
}
