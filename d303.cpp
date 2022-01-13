#include <iostream>

using namespace std;

int main(){
    int len;
    string word, pal = "";
    getline(cin, word);

    // for (int i = 0; i < word.size(); i++){
    //     cout << word.at(i) << endl;
    // }

    len = word.size();

    for (int i = len-1; i >= 0; i--){
        cout << word.at(i);
        pal += word.at(i);
    }
    cout << endl;

    if (word == pal)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}