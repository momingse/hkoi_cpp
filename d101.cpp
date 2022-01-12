#include <iostream>
using namespace std;

int main(){
    int phonenum, heading;
    cin >> phonenum;
    
    heading = phonenum / 10000000;
    switch(heading){
        case 2:
        case 3:
            cout << "Fixed" << endl;
            break;
        case 5:
        case 6:
        case 9:
            cout << "Mobile" << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
    }

    return 0;
}
