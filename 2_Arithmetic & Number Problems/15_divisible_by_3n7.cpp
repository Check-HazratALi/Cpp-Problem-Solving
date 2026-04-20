#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 3 == 0 && n % 7 == 0)
        cout << "Divisible by both 3 and 7" << endl;
    else
        cout << "Not divisible by both" << endl;

    return 0;
}