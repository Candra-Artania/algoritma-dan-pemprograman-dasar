#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;

    while (n > 0) {
        cout << n << " ";
        n--;
    }

    cout << "liftoff!" << endl;
    return 0;
}
