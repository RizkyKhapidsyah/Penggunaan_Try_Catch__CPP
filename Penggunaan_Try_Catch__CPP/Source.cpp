#include <iostream>
#include <exception>
#include <conio.h>

using namespace std;

int main() {
    try {
        int x, y;

        cout << "Masukkan 2 Angka : ";
        cin >> x >> y;

        if (y == 0) {
            throw runtime_error("division by zero!, hehe");
        }

        cout << x / y << endl;
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }

    _getch();
    return 0;
}