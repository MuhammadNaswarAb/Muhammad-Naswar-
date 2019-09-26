#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    float x,y;
    int kode;

    menu :
    cout << "Muhammad Naswar Abbas";
    cout << "1829042089";
    cout << "Pilihan Menu : ";
    cout << "1.Penjumlahan (+)";
    cout << "2.Pengurangan (-)";
    cout << "3.Perkalian (*)";
    cout << "4.Pembagian (/)";
    cout << "Silahkan masukkan kode menu : ";cin >> kode;
    if (kode > 4 || kode < 1){
        cout << "\nKode yang anda masukkan tidak ada \nSilahkan masukkan ulang kode .";
        system("pause");
        system("cls");
        goto menu;
    }
    else {
        cout << "Masukkan angka pertama : ";cin >> x;
        cout << "Masukkan angka kedua   : ";cin >> y;
        if (kode == 1){
            cout << "\nHasil penjumlahan dari "<<x<<" + "<<y<<" adalah : "<<x+y<<endl;
        }
        else if (kode == 2){
            cout << "\nHasil pengurangan dari "<<x<<" - "<<y<<" adalah : "<<x-y<<endl;
        }
        else if (kode == 3){
            cout << "\nHasil perkalian dari "<<x<<" * "<<y<<" adalah : "<<x*y<<endl;
        }
        else if (kode == 4){
            cout << "\nHasil pembagian dari "<<x<<" / "<<y<<" adalah : "<<x/y<<endl;
        }
    }
    return 0;
}

