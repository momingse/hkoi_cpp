#include <iostream>

using namespace std;

bool cvalid(int num, int pre){
    if (num <= 100 || num >= 50000)
        return false;
    if (num <= pre)
        return false;
    return true;
}

int main(){
    int len, pre, num;
    pre = 0;

    cin >> len;

    for (int i = 0; i < len; i++){
        if (!i)
            cin >> num;
        else {
            pre = num;
            cin >> num;
        }
        if(!cvalid(num, pre)){
            cout << "Invalid" << endl;
            return 0;
        }
        
    }

    cout << "Valid" << endl;
    return 0;
    
}