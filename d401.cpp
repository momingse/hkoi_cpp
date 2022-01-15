#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;

    cin >> num;
    bitset<10000000> bset1;

    for (int i = 2; i <= num; i++){
        if (!bset1[i]){
            cout << i << endl;
            int counter = i * 2;
            while (counter <= num){
                bset1[counter] = '1';
                counter += i;
            }
        }
    }

    return 0;
}