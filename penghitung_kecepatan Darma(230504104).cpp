#include <iostream>
using namespace std;

int main() {
    double jarak, waktu, kecepatan;

    // Meminta input dari pengguna
    cout << "Masukkan jarak tempuh (kilometer): ";
    cin >> jarak;

    cout << "Masukkan waktu tempuh (jam): ";
    cin >> waktu;

    // Menghitung kecepatan
    kecepatan = jarak / waktu;

    // Menampilkan hasil kecepatan
    cout << "Kecepatan adalah: " << kecepatan << " km/jam" << endl;

    return 0;
}

