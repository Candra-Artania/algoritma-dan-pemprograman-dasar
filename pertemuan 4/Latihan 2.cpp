#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter a number: ";
    cin >> num;

    switch (num){
    case 1 :
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    default:
        cout << "Other number" << endl;
}

    return 0;
}

// Kurang tanda (;) dibagian return 0 (line 20)
