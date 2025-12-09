#include <iostream>
using namespace std;

int main()
{
    string namaLengkap;
    cout << "<Masukan Nama Lengkap> : ";
    getline(cin, namaLengkap);

    int spasiPertama = namaLengkap.find(" ");
    int spasiTerakhir = namaLengkap.rfind(" ");

    string namaDepan = namaLengkap.substr(0, spasiPertama);

    string namaTengah = "";
    if (spasiPertama != spasiTerakhir)
    {
        namaTengah = namaLengkap.substr(spasiPertama + 1, spasiTerakhir - spasiPertama - 1);
    }

    string namaBelakang = namaLengkap.substr(spasiTerakhir + 1);

    string npm ="2410010280";
    string tahun = npm.substr(0, 2);
    string kodeprodi = npm.substr(2, 4);
    string registrasi = npm.substr(6, 4);

    string prodi = (kodeprodi == "1001") ? "Teknik Informatika" : "Sistem Informasi";

    cout << "Nama Depan     : " << namaDepan << endl;
    cout << "Nama Tengah    : " << namaTengah << endl;
    cout << "Nama Belakang  : " << namaBelakang << endl;
    cout << "Tahun Angkatan : 20" << tahun << endl;
    cout << "Kode Prodi     : " << kodeprodi << endl;
    cout << "No Registrasi  : " << registrasi << endl;
    cout << "Prodi          : " << prodi << endl;

    return 0;
}
