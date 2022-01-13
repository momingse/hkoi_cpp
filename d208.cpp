#include <iostream>

using namespace std;

int main(){
    int len, num, max = -2147483648, smax = -2147483648;

    cin >> len;
    for (int i = 0; i < len; i++){
        cin >> num;
        if (num > max){
            smax = max;
            max = num;
        } else if (num > smax){
            smax = num;
        }
    }

    cout << max << endl << smax << endl;

    return 0;
}