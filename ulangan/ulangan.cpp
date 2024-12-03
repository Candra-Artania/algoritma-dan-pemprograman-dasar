#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta user untuk memasukkan angka
    cout << "enter the number of * to print: ";
    cin >> n;

     // Menampilkan "*" sebanyak angka yang diinputkan
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }

    return 0;
}

