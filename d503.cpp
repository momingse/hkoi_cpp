#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int nums[6];

    ofstream opf("chart.txt");

    for (int i = 0; i < 6; i++)
        cin >> nums[i];

    opf << "+-------------------------+" << endl;

    for (int i = 10; i >= 1; i--){
        opf << '|';

        for (int j = 0; j < 6; j++)
            opf << ((nums[j] >= i) ? " ###" : "    ");

        opf << " |" << endl;;
    }

    opf << "+-------------------------+" << endl;

    return 0;
}