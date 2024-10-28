#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang paling atas: ";
    cin >> n;

    // Membuat pola dengan perulangan while
    int i = n;
    while (i > 0) {
        // Cetak spasi
        int j = 0;
        while (j < n - i) {
            cout << " ";
            j++;
        }
        // Cetak bintang
        int k = 0;
        while (k < (2 * i - 1)) {
            cout << "*";
            k++;
        }
        cout << endl;
        i--;
    }

    return 0;
}
