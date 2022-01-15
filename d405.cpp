#include<iostream>
using namespace std;

int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a < b ? a : b;}

int main(){
    int x, y, xpos, ypos, pt=0;
    
    cin >> y >> x;

    const int W = x, H = y;
    const int LEN = H + W - 2;
    char ans[LEN];
    char maze[W][H];
    xpos = W - 1;
    ypos = H - 1;

    for (int i = 0; i < H; i++)
        for (int j = 0; j < W; j++)
            cin >> maze[j][i];

    while (xpos != 0 || ypos != 0){
        // cout << xpos << ' ' << ypos << endl;
        maze[xpos][ypos] = 'o';
        if (maze[xpos][max(ypos-1,0)] == '.'){
            ypos--;
            ans[pt] = 'S';
            pt++;
        } else if (maze[max(xpos-1,0)][ypos] == '.'){
            xpos--;
            ans[pt] = 'E';
            pt++;
        } else if (maze[xpos][min(ypos+1,H-1)] == 'o'){
            ypos++;
            pt--;
        }
        else {
            xpos++;
            pt--;
        }
    }

    for (int i = LEN-1; i >= 0; i--)
        cout << ans[i];
    cout << endl;

    return 0;
}