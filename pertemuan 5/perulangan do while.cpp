#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang paling atas: ";
    cin >> n;

    // Membuat pola dengan perulangan do-while
    int i = n;
    do {
        // Cetak spasi
        int j = 0;
        while (j < n - i) {
            cout << " ";
            j++;
        }
        // Cetak bintang
        int k = 0;
        do {
            cout << "*";
            k++;
        } while (k < (2 * i - 1));

        cout << endl;
        i--;
    } while (i > 0);

    return 0;
}
