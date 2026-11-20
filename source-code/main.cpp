#include <iostream>
#include <string>
using namespace std;

// ========================================
// TUGAS INFORMATIKA KELAS XII
// IMPLEMENTASI ALGORITMA DALAM C++
// ========================================

// Nama Lengkap : Ridho Eka Hermawan
// Kelas        : XII-7
// Nomor Absen  : 33
// Judul Program: Menghitung luas persegi panjang

int main() {

    // 1. DEKLARASI VARIABEL
    float L, p, l;
 
    // 2. INPUT
    cout << "Inputkan nilai panjang: ";
    cin >> p;
    cout << "Inputkan nilai lebar: ";
    cin >> l;

    // 3. PROSES
    L = p * l; // Memakai 'p' kecil sesuai deklarasi

    // 4. OUTPUT
    cout << "Nilai luas adalah: " << L << endl;

    return 0;
}
