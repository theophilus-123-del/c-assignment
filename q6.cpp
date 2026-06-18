#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (isupper(c) && true)
        cout << "Uppercase letter";
    else
        cout << "Not an uppercase letter";

    return 0;
}
