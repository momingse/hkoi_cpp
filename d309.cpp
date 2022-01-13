#include <iostream>
using namespace std;

void lower(string &s){
    int len = s.size();
    char c;
    for (int i = 0; i < len; i++)
        if (s.at(i) >= 'a')
            s.at(i) = s.at(i) - 32;
}

int main(){
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    lower(s1);
    lower(s2);

    if (s1 > s2)
        cout << "Greater" << endl;
    else if (s1 < s2)
        cout << "Smaller" << endl;
    else
        cout << "Equal" << endl;;
    
    return 0;
}