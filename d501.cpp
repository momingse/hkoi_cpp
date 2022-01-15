#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int ans=0 , num, m;
    ifstream ipf("account.txt");

    if (!ipf)
        cerr << "No such file!" << endl;

    ipf >> num;
    for (int i = 0; i < num; i++){
        ipf >> m;
        ans += m;
    }
    cout << ans << endl;

    ipf.close();

    return 0;
}