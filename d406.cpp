#include <clocale>
#include <iostream>
using namespace std;

bool found(int a[], int t, int l){
    for (int i = 0; i < l; i++){
        if (a[i] == t)
            return true;
    }
    return false;
}

int main(){
    int num, temp, dup=0, pt=1;
    cin >> num;

    const int LEN = num;
    int nums[num];

    cin >> nums[0];
    for (int i = 1; i < LEN; i++){
        cin >> temp;
        if (found(nums, temp, i))
            dup++;
        else {
            nums[pt] = temp;
            pt++;
        }
    }

    cout << dup << endl;
    for (int i = 0; i < pt; i++)
        cout << nums[i] << ' ';
    cout << endl;

    return 0;
}