#include <exception>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int snum, qnum;
    
    cin >> snum;
    const int MAX_LEN = snum;
    double prices[snum][snum];

    for (int i = 0; i < snum; i++)
        for (int j = 0; j < snum; j++)
            cin >> prices[j][i];

    cin >> qnum;
    cout << setprecision(1) << fixed;
    for (int i = 0; i < qnum; i++){
        int x, y;
        char z;
        cin >> x >> y >> z;

        if (z == 'A')
            if (y > x)
                cout << prices[y-1][x-1]  << endl;   
            else
                cout << prices[x-1][y-1] << endl;
        else
            if (y < x)
                cout << prices[y-1][x-1]  << endl;   
            else
                cout << prices[x-1][y-1] << endl;
    }
        
    return 0;
}