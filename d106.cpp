#include <iostream>

using namespace std;

int main(){
    int num, digit;
    string suffix;

    cin >> num;

    digit = num % 10;
    switch(digit){
        case 1:
            suffix = "st";
            break;
        case 2:
            suffix = "nd";
            break;
        case 3:
            suffix = "rd";
            break;
        default:
            suffix = "th";
    }

    digit = num % 100 - digit;
    if (digit == 10)
        suffix = "th";
  
    cout << num << suffix << endl;

    return 0;
}
