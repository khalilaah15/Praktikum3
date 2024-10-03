// SOAL : Buat program yang menerima input harga barang dan persentase diskon. Program harus menghitung harga setelah diskon dan menampilkan hasilnya dalam format dengan dua digit di belakang koma.
// Modifikasi : Harga disesuaikan dengan nama barang. Misal berbagai macam barang-barang rumah/kos beserta harganya.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string namaBarang;
    double hargaBarang = 0;
    double hargaDiskon = 0;
    double hargaSetelahDiskon;

    cout << "- kasur\n";
    cout << "- meja\n";
    cout << "- kursi\n";
    cout << "- lemari\n";
    cout << "- lampu\n";
    cout << "Masukkan nama barang dari pilihan di atas: ";
    getline(cin, namaBarang);

    if (namaBarang == "kasur")
    {
        hargaBarang = 1000000;
        hargaDiskon = hargaBarang * 0.10;
    }
    else if (namaBarang == "meja")
    {
        hargaBarang = 500000;
        hargaDiskon = hargaBarang * 0.20;
    }
    else if (namaBarang == "kursi")
    {
        hargaBarang = 250000;
        hargaDiskon = hargaBarang * 0.05;
    }
    else if (namaBarang == "lemari")
    {
        hargaBarang = 750000;
        hargaDiskon = hargaBarang * 0.15;
    }
    else if (namaBarang == "lampu")
    {
        hargaBarang = 100000;
        hargaDiskon = hargaBarang * 0.07;
    }
    else
    {
        cout << "Barang tidak ditemukan!" << endl;
        return 1;
    }

    hargaSetelahDiskon = hargaBarang - hargaDiskon;

    cout << fixed << setprecision(2);
    cout << right << setw(25) << "Nama Produk  |" << setw(25) << "Harga Barang  |" << setw(25) << "Harga Diskon  |" << setw(25) << "Harga Jual" << endl;
    cout << right << setw(22) << namaBarang << "  |" << setw(22) << hargaBarang << "  |" << setw(22) << hargaDiskon << "  |" << setw(22) << hargaSetelahDiskon << endl;

    return 0;
}
