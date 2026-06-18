#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    float max = (a > b) ? a : b;
    cout << max;

    return 0;
}
