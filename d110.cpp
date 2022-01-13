#include <iostream>

using namespace std;

int max(int a, int b) {return a > b ? a : b;}

int abs(int a){return a > 0 ? a : -a;}

int main(){
    char start[2], end[2];

    cin >> start;
    cin >> end;

    cout << max(abs(start[0] - end[0]), abs(start[1] - end[1])) << endl;

    return 0;
}