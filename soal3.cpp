// SOAL : Buat program yang menerima input panjang, lebar, dan tinggi sebuah balok. Program harus menghitung volume dan luas permukaan balok, kemudian menampilkan hasilnya dengan format yang rapi.
// Modifikasi : Memilih bidang dan dihitung sesuai rumus bidang tersebut. Misal, balok, tabung, kubus, dan kerucut.

#include <iostream>
#include <iomanip>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

int main()
{
    string bentuk;
    double panjang, lebar, tinggi, jariJari, volume, luas;

    cout << "Pilih bidang (balok, tabung, kubus, kerucut): ";
    cin >> bentuk;

    if (bentuk == "balok")
    {
        cout << "Masukkan Nilai Panjang Balok: ";
        cin >> panjang;
        cout << "Masukkan Nilai Lebar Balok: ";
        cin >> lebar;
        cout << "Masukkan Nilai Tinggi Balok: ";
        cin >> tinggi;

        volume = panjang * lebar * tinggi;
        luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
    }
    else if (bentuk == "tabung")
    {
        cout << "Masukkan Nilai Jari-Jari Tabung: ";
        cin >> jariJari;
        cout << "Masukkan Nilai Tinggi Tabung: ";
        cin >> tinggi;

        volume = M_PI * pow(jariJari, 2) * tinggi;
        luas = 2 * M_PI * jariJari * (jariJari + tinggi);
    }
    else if (bentuk == "kubus")
    {
        cout << "Masukkan Nilai Sisi Kubus: ";
        cin >> panjang;

        volume = pow(panjang, 3);
        luas = 6 * pow(panjang, 2);
    }
    else if (bentuk == "kerucut")
    {
        cout << "Masukkan Nilai Jari-Jari Kerucut: ";
        cin >> jariJari;
        cout << "Masukkan Nilai Tinggi Kerucut: ";
        cin >> tinggi;

        volume = (1.0 / 3.0) * M_PI * pow(jariJari, 2) * tinggi;
        luas = M_PI * jariJari * (jariJari + sqrt(pow(tinggi, 2) + pow(jariJari, 2)));
    }
    else
    {
        cout << "Bentuk tidak valid!" << endl;
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << right << setw(20) << "Bentuk  |" << setw(20) << "Volume  |" << setw(20) << "Luas Permukaan" << endl;
    cout << right << setw(17) << bentuk << "  |" << setw(17) << volume << "  |" << setw(17) << luas << endl;

    return 0;
}

// Note :
// M_PI = Menyebut nilai Phi
// pow = Menyebut nilai pangkat
// sqrt = Menyebut nilai akar