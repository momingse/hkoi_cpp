#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int MAX_ITEM = 100;
    int num_item, num_product;
    long long codes[MAX_ITEM];
    long long code;
    double prices[MAX_ITEM];
    double ans = 0;
    double price;

    cin >> num_product;
    for (int i = 0; i < num_product; i++){
        cin >> codes[i] >> prices[i];
    }

    // for (int i = 0; i < num_product; i++){
    //     cout << codes[i] << ' ' << prices[i] << endl; 
    // }

    cin >> num_item;
    for (int i = 0; i < num_item; i++){
        cin >> code;
        for (int j = 0; j < num_product; j++)
            if (codes[j] == code){
                ans += prices[j];
                break;
            }
    }

    cout << setprecision(1) << fixed << ans << endl;

    return 0;
}