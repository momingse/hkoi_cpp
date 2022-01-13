#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double W, H, bmi;

    cin >> W >> H;

    bmi = W / (H*H);

    cout << setprecision(3) << fixed;
    cout << bmi << endl;

    if (bmi >= 25)
        cout << "Obese" << endl;
    else if (bmi >= 23)  
        cout << "Overweight" << endl;
    else if (bmi >= 18.5)
        cout << "Normal" << endl;
    else 
        cout << "Underweight" << endl;
    
    return 0;
}