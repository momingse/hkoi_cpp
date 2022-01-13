#include <iostream>
using namespace std;

bool checkwin(const char x[3][3], char s){
    for(int i = 0; i < 3; i++)
        if (x[i][0] == s && x[i][1] == s && x[i][2] == s)
            return true;
    for(int i = 0; i < 3; i++)
        if (x[0][i] == s && x[1][i] == s && x[2][i] == s)
            return true;
    if ((x[0][0] == s && x[1][1] == s && x[2][2] == s) || (x[2][0] == s && x[1][1] == s && x[0][2] == s))
        return true;

    return false;
}

bool ended(const char x[3][3]){
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if(x[i][j] == '.'){
                return true;
            }

    return false;
}

int main(){
    char c;
    char x[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cin.get(x[i][j]);
        cin.get(c);
    }

    if(checkwin(x, 'X'))
        cout << "X wins" << endl;
    else if (checkwin(x, 'O'))
        cout << "O wins" << endl;
    else if (ended(x))
        cout << "Not ended" << endl;
    else
        cout << "Draw" << endl;
    return 0;
}