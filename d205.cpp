#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long num, root;
    bool first = true;

    cin >> num;

    root = sqrt(num);
    cout << num << '=';

    if (num % 2 == 0)
        while (num % 2 == 0){
            if (first){
                cout << 2;
                first = false;
            } else
                cout << '*' << 2;
            num /= 2;
        }

    for (int i = 3; num != 1 && i <= root; ++++i){
        if (num % i == 0)
            while (num % i == 0){
                if (first){
                    cout << i;
                    first = false;
                } else
                    cout << '*' << i;
                num /= i;
            }
    }
    if (num != 1)
        if (first)
            cout << num;
        else
            cout << '*' << num;
    cout << endl;

    return 0;
}