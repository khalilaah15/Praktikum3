// SOAL : Buat program yang menerima input lima angka dari pengguna, lalu menghitung nilai rata-rata dan standar deviasi dari angka-angka tersebut, dan menampilkan hasil dengan format desimal yang rapi.
// Modifikasi : Menilai apakah angka-angka tersebut memiliki variasi yang tinggi atau rendah berdasarkan nilai standar deviasi. Jika standar deviasi lebih dari 2, tampilkan "Variasi Tinggi".Jika standar deviasi kurang dari atau sama dengan 2, tampilkan "Variasi Rendah".

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    const int n = 5;
    double numbers[n];
    double sum = 0.0;
    double mean, variance = 0.0, std_dev;

    cout << "Masukkan lima angka:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Angka " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; ++i)
    {
        variance += (numbers[i] - mean) * (numbers[i] - mean);
    }
    variance /= n;

    std_dev = sqrt(variance);

    cout << fixed << setprecision(2);
    cout << "Rata-rata: " << mean << endl;
    cout << "Standar Deviasi: " << std_dev << endl;

    if (std_dev > 2)
    {
        cout << "Variasi Tinggi" << endl;
    }
    else
    {
        cout << "Variasi Rendah" << endl;
    }

    return 0;
}
