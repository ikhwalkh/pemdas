#include <iostream>
using namespace std;

//Deklarasi
int angka;
int pilihan;

// Function untuk bilangan prima
bool cekprima(int n){
    if (n <= 1) {
        return false;
    }

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// function untuk cek fibonacci
bool cekfibonacci(int n) {
    int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// prosedur input angka
void inputangka() {
    cout << "masukkan angka ";
    cin >> angka;
}

// prosedur hasil prima
void tampilanprima() {
    if (cekprima(angka)) {
        cout << angka << " adalah bilangan prima" << endl;
    } else {
        cout << angka << " bukan bilangan prima" << endl;
    }
}

// prosedur hasil fibonacci
void tampilanfibonacci() {
    if (cekfibonacci(angka)) {
        cout << angka << " termasuk bilangan fibonacci" << endl;
    } else {
        cout << angka << " bukan bilangan fibonacci" << endl;
    }
}
 
