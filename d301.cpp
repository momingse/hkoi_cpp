#include <iostream>

using namespace std;

int main(){
    string a, b, c, d, e;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    getline(cin, d);
    getline(cin, e);

    cout << "My name is " << a << '.' << endl;
    cout << "I study at " << e << " Secondary School." << endl;
    cout << "I go to school by "<< d <<" with my classmate "<< b << "." << endl;
    cout << "We both like "<< c <<"." << endl;

    return 0;
}