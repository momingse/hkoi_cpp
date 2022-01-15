#include <cstdio>
#include <iostream>
#include <istream>
#include <fstream>
#include <iterator>
#include <string>
using namespace std;

int main(){
    char c;
    int temp, min=2147483647, max=0;
    ifstream ipf("weather.txt");

    if (!ipf)
        cerr << "No such file!" << endl;

    ipf.get(c);
    while (!ipf.eof()){
        if (c >= '0' && c <= '9'){
            int temp = 0;
            while (c >= '0' && c <= '9'){
                temp = temp * 10 + (c - '0');
                ipf.get(c);
            }

            if (min > temp)
                min = temp;
            if (max < temp)
                max = temp;
        }
        // cout << c;
        ipf.get(c);
    }

    cout << min << ' ' << max << endl;

    ipf.close();

    return 0;
}