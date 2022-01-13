#include <iostream>
using namespace std;

bool cusername(string email, int pt){
    for (int i = 0; i < pt; i++){
        char c = email.at(i);
        if (!(('0' <= c && '9' >= c) || ('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c) || c == '.' || c == '+'))
            return false;
        if (c == '.' && (i == 0 || i == pt-1))
            return false;
        if (c == '.' && (email.at(i-1) == '.' || email.at(i+1) == '.'))
            return false;
    }

    return true;
}

bool chost(string email, int pt, int len){
    bool found = false;

    for (int i = pt + 1; i < len; i++){
        char c = email.at(i);
        if (c == '.')
            found = true;
        if (!(('0' <= c && '9' >= c) || ('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c) || c == '.' || c == '-'))
            return false;
        if (c == '.' && (i == pt+1 || i == len-1))
            return false;
        if (c == '.' && (email.at(i-1) == '-' || email.at(i+1) == '-'))
            return false;
    }

    return found;
}

int main(){
    int pt, len;
    char c;
    string email;

    getline(cin, email);

    len = email.size();
    for (pt = 0; pt < len; pt++)
        if (email.at(pt) == '@')
            break;

    if (cusername(email, pt) && chost(email, pt, len))
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;
    return 0;
}