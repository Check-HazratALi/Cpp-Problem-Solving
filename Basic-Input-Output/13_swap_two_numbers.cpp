#include<iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout<<"Input two number :";
    cin>>x>>y;
    
    // Swap using temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After Swap: a = " << a << ", b = " << b << endl;
    return 0;
}