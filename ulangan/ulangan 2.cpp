#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    //sebelum pertukaran

    cout << "Sebelum pertukaran:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // setelah pertukaran
    c = a;
    a = b;
    b = c;

    cout << "Setelah pertukaran:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
