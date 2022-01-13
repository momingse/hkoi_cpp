#include <iostream>

using namespace std;

int main(){
    int nums;

    cin >> nums;

    while (nums != 1){
        cout << nums << endl;
        if (nums % 2 == 0)
            nums /= 2;
        else 
            nums = 3 * nums + 1;
    }

    cout << nums << endl;

    return 0;
}