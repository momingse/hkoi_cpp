#include <iostream>
using namespace std;

int stringtoint(char c){
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 10;
    return c - '0';
}

int main(){
    int c, s = 0;
    string nums;
    getline(cin, nums);

    if (nums.size() == 8)
        for (int i = 0; i < 8; i++)
            s += (9-i)*stringtoint(nums.at(i));
    else {
        s += 9*36;
        for (int i = 0; i < 7; i++)
            s += (8-i)*stringtoint(nums.at(i));
    }

    c = s % 11;
    if (c)
        c = 11 - c;
    
    if (c == 10)
        cout << nums << "(A)" << endl;
    else
        cout << nums << '(' << c << ')' << endl;

    return 0;
}