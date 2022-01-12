#include <iostream>

using namespace std;

void changes(int &num, int note){
    int amount = num / note;
    for (int i = 0; i < amount; i ++)
        cout << note << endl;
    num %= note;
}

int main(){
    int num;
    int notes[6] = {1000, 500, 100, 50, 20, 10};

    cin >> num;

    for (int i = 0; i < 6; i++){
        changes(num, notes[i]);
    }
}