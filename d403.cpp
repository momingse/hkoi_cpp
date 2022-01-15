#include <iostream>
using namespace std;

const int prime[26] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};

int toint(char c){
    int num = c - 'A';
    return prime[num];
}

int main(){
    int clen, len, num;
    long long n, ncharacters = 1;
    string characters, temp;

    getline(cin, characters);
    clen = characters.size();

    for (int i = 0; i < clen; i++)
        ncharacters *= toint(characters.at(i));

    // cout << ncharacters << endl;

    cin >> num;
    cin.ignore();
    for (int i = 0; i < num; i++){
        getline(cin, temp);

        n = 1;
        bool match = true;
        len = temp.size();

        for (int j = 0; j < len; j++){
            n *= toint(temp.at(j));
            // cout << toint(temp.at(j)) << endl;
        }

        if (ncharacters % n == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}