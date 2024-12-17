#include <iostream>

using namespace std;

// deklarasi penjumlahan
int penjumlahan(int a, int b);

// deklarasi perkalian
int perkalian(int a, int b);

// deklarasi pengurangan
void pengurangan(int a, int b);

// deklarasi pembagian
void pembagian(int a, int b);

int main() {
    int pilih, num1, num2;

    while (true) {
        // Display menu
        cout << "Menu:\n";
        cout << "1. penjumlahan\n";
        cout << "2. pengurangan\n";
        cout << "3. perkalian\n";
        cout << "4. pembagian\n";
        cout << "5. Exit\n";
        cout << "pilih kebutuhan anda: ";
        cin >> pilih;

        // jika pengguna memilih exit maka akan break
        if (pilih == 5) {
            break;
        }

        cout << "masukan angka pertama: ";
        cin >> num1;
        cout << "masukan angka kedua: ";
        cin >> num2;

        // melakukan operasi yang dipilih
        switch (pilih) {
            case 1: {
                // penjumlahan
                int sum = penjumlahan(num1, num2);
                cout << "Sum: " << sum << endl;
                break;
            }
            case 2: {
                // pengurangan
                pengurangan(num1, num2);
                break;
            }
            case 3: {
                // perkalian
                int product = perkalian(num1, num2);
                cout << "Product: " << product << endl;
                break;
            }
            case 4: {
                // pembagian
                pembagian(num1, num2);
                break;
            }
            default: {
                cout << "pilihan tidak valid, silahkan coba lagi." << endl;
                break;
            }
        }

        cout << endl;
    }

    return 0;
}

// penjumlahan
int penjumlahan(int a, int b) {
    return a + b;
}

// perkalian
int perkalian(int a, int b) {
    return a * b;
}

// pengurangan
void pengurangan(int a, int b) {
    int result = a - b;
    cout << "Difference: " << result << endl;
}

// Procedure (void function) definition for division
void pembagian(int a, int b) {
    if (b != 0) {
        double result = static_cast<double>(a) / b;
        cout << "Quotient: " << result << endl;
    } else {
        cout << "Error: " << endl;
    }
}
