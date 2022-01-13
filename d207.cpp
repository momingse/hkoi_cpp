#include <iostream>

using namespace std;

int main(){
    int a, b, r;
    long long lcm;

    cin >> a >> b;

    if (a < b){
        int temp = a;
        a = b;
        b = temp;
    }

    lcm = a * b;
    r = a % b;
    while(r != 0){
        a = b;
        b = r;
        r = a % b;
    }

    lcm /= b;
    cout << b << endl;
    cout << lcm <<endl;

    return 0;
}