#include <iostream>

using namespace std;

int main(){
    long a,b;

    cin >> a >> b;

    cout << (a | b) << endl;
    cout << (a & b) << endl;
    cout << (a ^ b) << endl;
    cout << ~a << endl;

    return 0;

}