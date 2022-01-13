#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const int MAX_LEN = 100;
    int len;
    double area = 0;
    int x[MAX_LEN], y[MAX_LEN];  

    cin >> len;

    for (int i = 0; i < len; i++)  
        cin >> x[i] >> y[i];

    for (int i = 0; i < len - 1; i++)
        area += x[i] * y[i+1];
    area += x[len-1] * y[0];

    for (int i = 0; i < len - 1; i++)
        area -= x[i+1] * y[i];
    area -= x[0] * y[len-1];

    area /= 2;

    cout << setprecision(1) << fixed << area << endl;

    return 0;
}