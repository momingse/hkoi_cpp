#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char dump;
    double money;
    int ans;

    cin.get(dump);
    cin >> money;
    
    ans = static_cast<int>(money*10);

    if (ans % 2 == 0)
        money /= 2;
    else 
        money = money / 2;

    cout << setprecision(1) << fixed;
    cout << dump << money << endl;

    return 0;
}
