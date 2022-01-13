#include <iostream>

using namespace std;

int main(){
    char c;
    int len = 0, word = 0;

    cin.get(c);
    while (c != '\n'){
        if (c == ' ')
            word++;
        len++;
        cin.get(c);
    }
    word++;

    cout << len << endl;
    cout << word << endl;

    return 0;
}