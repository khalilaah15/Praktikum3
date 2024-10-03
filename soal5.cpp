// SOAL : uat program untuk menghitung BMI seseorang berdasarkan berat badan dan tinggi badan. Program juga harus menentukan apakah berat badan seseorang sesuai dengan rentang berat badan ideal (Body Mass Index/BMI) antara 18,5 - 24,9.
// Modifikasi : Menentukan kategori BMI, kurang dari 18,5 berarti berat badan kurang (underweight). Antara 18,5 - 24,9 berarti berat badan normal. Antara 25-29,9 berarti berat badan berlebih (overweight). Di atas 30 berarti obesitas.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string fullName;
    double weight;
    double height;
    double bmi;
    string kategoriBMI;

    cout << "Masukkan Nama Lengkap :";
    getline(cin, fullName);
    cout << "Masukkan Berat Badan (kg): ";
    cin >> weight;
    cout << "Masukkan Tinggi Badan (cm): ";
    cin >> height;

    bmi = weight / ((height / 100) * (height / 100));

    if (bmi < 18.5)
    {
        kategoriBMI = "Underweight (Berat Badan Kurang)";
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        kategoriBMI = "Normal (Berat Badan Ideal)";
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        kategoriBMI = "Overweight (Berat Badan Berlebih)";
    }
    else
    {
        kategoriBMI = "Obesitas";
    }

    cout << left;
    cout << setw(20) << "Nama Lengkap" << ": " << fullName << endl;
    cout << setw(20) << "Tinggi Badan" << ": " << fixed << setprecision(1) << height << " cm" << endl;
    cout << setw(20) << "Berat Badan" << ": " << fixed << setprecision(1) << weight << " kg" << endl;
    cout << setw(20) << "Nilai BMI" << ": " << fixed << setprecision(2) << bmi << endl;
    cout << setw(20) << "Kategori BMI" << ": " << kategoriBMI << endl;

    return 0;
}
