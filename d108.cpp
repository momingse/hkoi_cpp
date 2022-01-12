#include <iostream>

using namespace std;

int op(long long x, long long y, char o){
    switch (o) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        default:
            return 0;
    }
}

int main(){
    long long x, y, z, ans;
    char o1, o2;

    cin >> x >> o1 >> y >> o2 >> z;
    // cout << x << o1 << y << o2 << z;

    if (o1 != '+' && o1 != '-'){
        ans = op(op(x,y,o1), z, o2);
    } else {
        if (o2 == '*')
            ans = op(x, op(y,z,o2),o1);
        else
        ans = op(op(x,y,o1),z,o2);
    }
    
    cout << ans << endl;

    return 0;
}
