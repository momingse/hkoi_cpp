#include <iostream>
using namespace std;

int main(){
    int hlen, len, ocounter = 0, counter = 0, pt;
    string hstring, sub;

    getline(cin, hstring);
    getline(cin, sub);

    hlen = hstring.size();
    len = sub.size();

    for (int i = 0; i < hlen - len + 1; i++){
        if (hstring.at(i) == sub.at(0)){
            bool match = true;
            for (int j = 1; j < len; j++)
                if (hstring.at(i+j) != sub.at(j))
                    match = false;
            if (match)
                counter++;
        }
    }

    for (int i = 0; i < hlen - len + 1; i++){
        if (hstring.at(i) == sub.at(0)){
            bool match = true;
            for (int j = 1; j < len; j++)
                if (hstring.at(i+j) != sub.at(j))
                    match = false;
            if (match){
                ocounter++;
                i += len - 1;
            }
        }
    }

    cout << counter << endl;
    cout << ocounter << endl;

    return 0;
}