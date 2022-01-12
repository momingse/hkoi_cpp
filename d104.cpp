#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main(){
    double a, b, c, d, ans1, ans2;
    cin >> a >> b >> c;

    d = b*b - 4*a*c; 
    
    cout << setprecision(3) << fixed; 
    if (d > 0){
        ans1 = (-b - sqrt(d)) / (2 * a);
        ans2 = (-b + sqrt(d)) / (2 * a);
        if (ans1 > ans2){
            double temp = ans1;
            ans1 = ans2;
            ans2 = temp;
        }
        cout << ans1 << ' ' << ans2 << endl;
    } else if (d == 0){
        ans1 = (-b) / (2 * a);
        cout << ans1 << endl;
    } else {
        cout << "None" << endl;
    }

    return 0;
        
}
