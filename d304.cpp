#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int len;
    char c;
    string word, ans="";
    getline(cin, word);

    len = word.size();
    for (int i = 0; i < len; i++){
        ans += '_';
    }

    while (word != ans){
        cin.get(c);
        for (int i = 0; i < len; i++){
            if (word.at(i) == c)
                ans.at(i) = c;
        }
        cout << ans << endl;
        cin.ignore();
    }

    return 0;
}