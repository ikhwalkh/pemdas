//library
#include <iostream>
using namespace std;

//Deklarasi
int angka;
int pilihan;

// Function untuk bilangan prima    //ini untuk fuction bilangan prima ini juga sama kek anj*** bikin pusing
bool cekprima(int n){
    if (n <= 1) {                               //ini pemakaian if
        return false;
    }

    int i = 2;
    while (i < n) {                            //ini pemakaian while
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// function untuk cek fibonacci       //ini untuk cek fibonacci ini yang paling bikin pusing
bool cekfibonacci(int n) {
    int a = 0, b = 1, c;

    while (a <= n) {                        //....
        if (a == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// prosedur input angka      //ini untuk membuat input data/angka saya pusing
void inputangka() {
    cout << "masukkan angka ";
    cin >> angka;
}

// prosedur hasil prima           // ini untuk menampilkan hasil prima tolonnh saya pusing
void tampilanprima() {
    if (cekprima(angka)) {
        cout << angka << " adalah bilangan prima" << endl;
    } else {
        cout << angka << " bukan bilangan prima" << endl;
    }
}

// prosedur hasil fibonacci         //ini untuk menampilkan hasil fibonacci toloong saya puusing
void tampilanfibonacci() {
    if (cekfibonacci(angka)) {
        cout << angka << " termasuk bilangan fibonacci" << endl;
    } else {
        cout << angka << " bukan bilangan fibonacci" << endl;
    }
}

// menu                                        //ini buat memilih 
void menu() {
    cout << "\n===== menu =====" << endl;
    cout << "1 cek bilangan prima" << endl;
    cout << "2 cek bilangan fibonacci" << endl;
    cout << "0 keluar" << endl;
    cout << "pilih yang mana ";
}

 // main output nya && untuk menjalankan nya
 int main() {
    while (true) {
        menu();
        cin >> pilihan;

        switch (pilihan) {         //ini switch toolong saya pusing
            case 1:
            inputangka();
            tampilanprima();
            break;

            case 2:
            inputangka();
            tampilanfibonacci();
            break;

            case 0:
            cout << " program selesai. makasih yh saya pusing ni!!!!!" << endl;
            return 0;

            default:
            cout << "ngapain memilih yang tidak valid pilih yang ada saja dong" << endl;

        }
    }

    return 0;
 }