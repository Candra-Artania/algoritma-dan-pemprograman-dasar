#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang paling atas: ";
    cin >> n;

    // Membuat pola dengan perulangan for
    for (int i = n; i > 0; i--) {
        // Cetak spasi
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Cetak bintang
        for (int k = 0; k < (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
