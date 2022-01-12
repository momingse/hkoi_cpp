#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    double a, b, C, ans;

    cin >> a;
    cin >> b;
    cin >> C;

    ans = (0.5) * a * b * sin(C*M_PI/180);
    cout << setprecision(3) << fixed;
    cout << ans << endl;

    return 0;
}
