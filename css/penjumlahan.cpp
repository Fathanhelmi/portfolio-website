#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int hasilDigitAkhir(int a, int b) {
    int hasil_penjumlahan = a + b;
    int digit_terakhir = hasil_penjumlahan % 10;
    return digit_terakhir;
}

int main() {
    int a, b, skor = 0, hasil, jawab, soal = 0;
    string next;
    srand(time(0));

    do {
        soal++;
        // buat tambahin digit penjumlahannya tambahin digit dibawah sini
        a = rand() % 10;
        b = rand() % 10;
        cout << a << " + " << b << " = ";
        cin >> jawab;
        hasil = hasilDigitAkhir(a, b);

        if (hasil == jawab) {
            skor += 1;
            cout << "Jawaban benar!\n";
        } else {
            cout << "Jawaban salah. Jawaban yang benar adalah " << hasil << ".\n";
        }

        cout << "Ketik 'x' untuk keluar ";
        cin >> next;

    } while (next != "x");

    cout << "Skor akhir: " << skor << "/" << soal << endl;

    return 0;
}
