#include <iostream>

using namespace std;

int main(){
    int y1, y2, m1, m2, d1, d2;
    long first, second;

    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;

    first = y1 * 10000 + m1 * 100 + d1;
    second = y2 * 10000 + m2 * 100 + d2;

    if (first > second)
        cout << "After" << endl;
    else if (first == second)
        cout << "Same" << endl;
    else
        cout << "Before" << endl;

    return 0;
}
