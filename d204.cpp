#include <iostream>

using namespace std;

int main(){
    int s, h, l, r;

    cin >> s;

    h = s / 2;
    l = h;
    r = h;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < s; j++)
            if  (j == l || j == r)
                cout << "#";
            else 
                cout << ' ';
        cout << endl;
        l--;
        r++;
    }

    for (int i = 0; i < h+1; i++){
        for (int j = 0; j < s; j++)
            if  (j == l || j == r)
                cout << "#";
            else 
                cout << ' ';
        cout << endl;
        l++;
        r--;
    }

    return 0;

}