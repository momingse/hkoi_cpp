#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long num, root, pt;
    const long long MAX_SIZE = 500000;

    cin >> num;

    root = sqrt(num);
    long long factors[MAX_SIZE] = {};
    pt = 0;

    for (int i = 1; i <= root; i++){
        if (num % i == 0){
            cout << i << endl;
            factors[pt] = num / i;
            pt++;
        }
    }
    
    if (root * root == num) pt--;
    for (int i = pt - 1; i >= 0 ; i--){
        cout << factors[i] << endl;
    }
        

    return 0;

}