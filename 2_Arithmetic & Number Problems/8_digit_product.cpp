#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int Product = 1;

    while (n != 0) {
        int digit = n % 10; 
        Product = Product + digit;  
        n = n / 10;         
    }

    cout<<"Product of digits="<<Product;

    return 0;
}