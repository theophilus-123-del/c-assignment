#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.find('a') != string::npos)
        cout << "Contains 'a'";
    else
        cout << "Does not contain 'a'";

    return 0;
}
