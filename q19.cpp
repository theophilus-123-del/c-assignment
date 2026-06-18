#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, rem;
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

int main() {
    int binary;
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    cout << "Decimal: " << decimal << endl;
    cout << "Octal: " << oct << decimal << endl;
    cout << "Hex: " << hex << decimal << endl;

    return 0;
}
