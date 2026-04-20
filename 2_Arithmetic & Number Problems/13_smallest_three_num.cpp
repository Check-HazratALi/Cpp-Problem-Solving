#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
        cout << "Smallest number = " << a << endl;
    else if (b <= a && b <= c)
        cout << "Smallest number = " << b << endl;
    else
        cout << "Smallest number = " << c << endl;

    return 0;
}