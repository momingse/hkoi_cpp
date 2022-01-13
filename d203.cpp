#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    for (int i = 1; i <= 100; i++){
        if ((i % 10 == num) || (i / 10 == num) || (i % num == 0))
            cout << "Clap ";
        else
            cout << i << ' ';
        if (i % 10 == 0)
            cout << endl;
    }

    return 0;
}